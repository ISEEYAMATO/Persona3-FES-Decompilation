#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"

#pragma alias FUN_0010a4e0_y2 FUN_0010a4e0




/* Recovered battle-misc support prelude */
typedef int (*code)(); /* PC: unnamed varargs */
typedef struct { f32 x; f32 y; f32 z; } SflCardVec;
typedef struct {
    f32 transformed[4];
    u8 pad0[8];
    f32 origin[3];
    u8 pad1[4];
    f32 rotation[3];
    u8 pad2[4];
    f32 rect[4];
    f32 frame_offset;
    f32 frame_const;
    f32 scale[3];
} SflCardDrawFrame;
void FUN_00253600(u32 *param_1);
void FUN_00250cf0();
void FUN_00253a40(void);
void FUN_00258140(void);
void FUN_00258300(void);
void FUN_00258540(u32 param_1,u64 param_2);
void FUN_00258630(u32 *param_1);
void FUN_00258b40(void);
void FUN_00258f80(u32 *param_1);
void FUN_002593d0(void);
void FUN_002594c0(void);
extern u64 DAT_0068ea10;
extern f32 DAT_0068ea18;
extern SflCardVec DAT_0068eaa0;
extern u64 DAT_0068eab0;
extern f32 DAT_0068eab8;
extern SflCardVec DAT_0068eac0;
extern u32 DAT_007e094c;
extern u32 DAT_007e0952;
extern u32 DAT_007e0956;
extern u32 DAT_007e095a;
extern int iGpffffb664;
extern u32 uGpffff8248;
extern f32 fGpffff8248;
extern f32 fGpffff83c0;

static u32* sSflCardB664; // puGpffffb664
static u32* sSflCard354;  // DAT_007ce354
#pragma alias DAT_0068eab0_abs DAT_0068eab0
#pragma alias DAT_0068eab8_abs DAT_0068eab8
extern u8 DAT_0068eab0_abs[];
extern u8 DAT_0068eab8_abs[];
 #pragma alias DAT_0068ea10_abs DAT_0068ea10
 #pragma alias DAT_0068ea18_abs DAT_0068ea18
 extern u8 DAT_0068ea10_abs[];
#pragma alias DAT_007e094c_abs DAT_007e094c
#pragma alias DAT_007e0952_abs DAT_007e0952
#pragma alias DAT_007e0956_abs DAT_007e0956
#pragma alias DAT_007e095a_abs DAT_007e095a
extern u8 DAT_007e094c_abs[];
extern u8 DAT_007e0952_abs[];
extern u8 DAT_007e0956_abs[];
extern u8 DAT_007e095a_abs[];
 extern u8 DAT_0068ea18_abs[];
extern u32* FUN_00255440();
extern void FUN_00256f20();
extern void FUN_00257d00();
extern void FUN_00250a30();
extern void FUN_002508c0();
extern void FUN_0010a4e0_y2();
extern void FUN_0025b300();
extern void FUN_0025b3b0();
extern void FUN_0024f2c0(f32, void*);
extern void FUN_00250ef0(f32, void*);
extern void FUN_00251030();
extern void FUN_0024dc90();
extern u32 FUN_0021a120(void);
extern u32 FUN_00250b90(void*);
extern u32 FUN_00250e70(u32);
extern void FUN_00209f00(void*);
extern void FUN_0020a800(void*);
extern void FUN_0020ab30(void*);
extern f32 FUN_0020c500(void*, f32);
extern void FUN_0020c400(void*, const f32*, f32, f32*);
extern void FUN_0020c590(void*, u16);
extern void FUN_0020c5f0(void*, u32, u32);
extern f32 FUN_0020c660(u32, u32);
extern void FUN_0020cd50(void*, void*);
extern void FUN_0020d630(void*, const f32*);
extern void FUN_0020d650(void*, const f32*);
extern void FUN_0020d6c0(void*);
extern void FUN_0020d710(void*);
extern void* FUN_0020e710(u32);
extern void FUN_0024da60(void*);
extern void FUN_0024f090(void*);
extern void FUN_0024f210(void*, f32, u32, f32);
extern void FUN_0024f9f0(void*, const f32*);
extern void FUN_0024fc40(void*, const f32*);
extern void FUN_0024fd20(void*);
extern void FUN_0024fd40(void*);
extern void FUN_0024fd80(void*);
extern void FUN_0024fdc0(void*);
extern void FUN_0024fe00(void*);
extern void FUN_0024fe20(void*);
extern void FUN_002503f0(void*, u32, void*);
extern void FUN_00250be0(void*, u32, void*);
extern u32 FUN_0034fcd0(void*);
extern void FUN_004bdde0(f32, f32*, const f32*, u32);
extern u32 FUN_00488f30(void);


u32* FUN_00255390();
void scrClearTextBox();
typedef struct {
  u8 auStack_70[16];
  int aiStack_60[8];
  u32 auStack_40[6];
  u64 uStack_28;
  float uStack_20;
  u32 uStack_18;
  u32 uStack_14;
  u8 auStack_10[4];
  float fStack_c;
  u8 auStack_4[4];
} SflCardFrame;
#define auStack_70 frame.auStack_70
#define aiStack_60 frame.aiStack_60
#define auStack_40 frame.auStack_40
#define uStack_28 frame.uStack_28
#define uStack_20 frame.uStack_20
#define uStack_18 frame.uStack_18
#define uStack_14 frame.uStack_14
#define auStack_10 frame.auStack_10
#define fStack_c frame.fStack_c
#define auStack_4 frame.auStack_4
#include "Main/Battle/Panel/bp_tex.h"
#include "rw/rwplcore.h"
#include "rw/rwcore.h"
static u32* sBcmPanel;
extern u8 D_00960090_abs[];
extern u8 D_0096009C_abs[];
extern void (*D_0096009C)(u32*, u32, u32, u32, u32);
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
extern volatile u8 D_0068EA30_abs[];
extern f32 D_0068EA38;
extern volatile u8 D_0068EA38_abs[];
extern u8 D_0068EA00;
extern volatile u8 D_0068EA00_abs[];
extern u64 D_0068EA90;
extern volatile u8 D_0068EA90_abs[];
extern f32 D_0068EA98;
extern volatile u8 D_0068EA98_abs[];
extern u32 jtbl_00960178[];
extern void (*jtbl_0096017C)(void* memory);
extern u32 jtbl_0096017C_abs[];
extern void func_004cde90(void* resource);
extern RwCamera* kwlnGetMainCamera(void);
extern f32 func_0052ea18(f32 x, f32 y);
extern f32 D_00960088;
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
#define BCM_29_STATE(...) (*setStatePtr)(__VA_ARGS__)
#define BCM_29_QUAD(...) (*setQuadPtr)(__VA_ARGS__)
#define BCM_29_STATE2(...) (*setStatePtr2)(__VA_ARGS__)
#undef BCM_29_STATE
#undef BCM_29_STATE2
#undef BCM_29_QUAD
#define BCM_2AE_STATE(...) (*pRender)(__VA_ARGS__)
#define BCM_2AE_QUAD(...) (*pQuad)(__VA_ARGS__)
#undef BCM_2AE_STATE
#undef BCM_2AE_QUAD
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
#include "Main/Social/sfl_script.h"
typedef int (*code)(); /* PC: unnamed varargs */
void sflScriptClearWork(void);
void sflScriptDispatchCommands(void);
void sflScriptAppendCommand(int param_1,const void* param_2);
void sflScriptQueueSwapCommand(u16 param_1,u16 param_2);
void sflScriptQueueCloseCommand(u16 param_1,u16 param_2);
u64 sflScriptHandleEndCommand(void);
u32 sflScriptHandleSwapCommand(s16 *param_1);
u32 sflScriptHandleStartActionsCommand(void);
u32 sflScriptHandleSetCardValueCommand(u16 *param_1);
u32 sflScriptHandleShuffleCommand(void);
u32 sflScriptHandleCloseCommand(s16 *param_1);
u32 sflScriptHandleOpenCommand(s16 *param_1);
u32 sflScriptHandleWaitCommand(s16 *param_1);
extern u16 gSflScriptCommandTableWords[];
extern u16 gSflScriptCommandParamSizes[];
extern SflScriptWork* sSflScriptWorkAddress;
extern u32 sSflScriptShuffleStarted;
extern u32 sSflScriptWorkWord;
extern const char sSflScriptStartActionsTrace[];
extern const char sSflScriptSourceFile[];
extern const char sSflScriptEndTrace[];
extern const char sSflScriptOpenTrace[];
extern const char sSflScriptSwapTrace[];
extern const char sSflScriptCloseTrace[];
void copyMemory(void* destination, const void* source, u32 size);
extern const char sSflScriptWaitTrace[];
void debugPrintf(const char* message, ...);
static SflScriptWork* sSflScript; // puGpffffb668

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
#define BP_TEX_WRITE_VERTEX_INLINE(destination, baseOffset, u, v, color, depth, reciprocalDepth) do { \
    BP_TEX_F32(destination, (baseOffset) + 0x10) = (u); \
    BP_TEX_F32(destination, (baseOffset) + 0x14) = (v); \
    BP_TEX_F32(destination, (baseOffset) + 0x18) = (reciprocalDepth); \
    BP_TEX_F32(destination, (baseOffset) + 0x08) = (depth); \
    BP_TEX_WRITE_COLOR_INLINE(destination, baseOffset, color); \
} while (0)
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

// FUN_00253560
void sflCard00253560(void)
{
    int base;
    int i;
    int p;

    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    base = (int)sSflCardB664;
    for (i = 0; i < 0x10; i++) {
        p = base + i * 0x1264;
        if ((~*(u32*)(p + 4) & 4) == 0) {
            FUN_00253600((u32*)(p + 4));
        }
    }
    sSflCardB664 = NULL;
}

// FUN_00253600


void FUN_00253600(u32 *param_1)



{

  if ((*param_1 & 0x100) != 0) {

    if ((*param_1 & 0x80) != 0) {

      FUN_0034fcf0(param_1[0x492]);

    }

    FUN_0024daf0(param_1 + 0x3f3);

    FUN_0024daf0(param_1 + 0x425);

    FUN_0024daf0(param_1 + 0x40c);

    FUN_0024daf0(param_1 + 0x43e);

    FUN_0024daf0(param_1 + 0x45a);

    FUN_0024daf0(param_1 + 0x476);

  }

  *param_1 = *param_1 & 0xfffffeff;

  return;

}

// FUN_002536b0
void sflCard002536b0(u32 param_1, u32 param_2)
{
    u32* a;
    u32* b;
    u32* node;

    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    a = sSflCardB664;
    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    b = sSflCardB664;
    node = FUN_00255390();
    if (b[0x4997] == 0) {
        node[0x3f1] = 0;
        node[0x3f0] = 0;
        b[0x4997] = (u32)node;
        b[0x4998] = (u32)node;
    } else {
        node[0x3f1] = 0;
        node[0x3f0] = b[0x4998];
        ((u32*)b[0x4998])[0x3f1] = (u32)node;
        b[0x4998] = (u32)node;
    }
    *node |= 4;
    node[1] = 1;
    node[2] = param_1;
    node[3] = param_2;
    node[4] = a[0x499f];
    a[0x499f]++;
}

// FUN_002537f0
void sflCard002537f0(u16 param_1)
{
    u32* a;
    u32* b;
    u32* node;

    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    a = sSflCardB664;
    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    b = sSflCardB664;
    node = FUN_00255390();
    if (b[0x4997] == 0) {
        node[0x3f1] = 0;
        node[0x3f0] = 0;
        b[0x4997] = (u32)node;
        b[0x4998] = (u32)node;
    } else {
        node[0x3f1] = 0;
        node[0x3f0] = b[0x4998];
        ((u32*)b[0x4998])[0x3f1] = (u32)node;
        b[0x4998] = (u32)node;
    }
    *node |= 4;
    node[1] = 0;
    *(u16*)(node + 2) = param_1;
    node[4] = a[0x499f];
    a[0x499f]++;
}

// FUN_00253920
void sflCard00253920(void)
{
    u32* a;
    u32* b;
    u32* node;

    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    a = sSflCardB664;
    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    b = sSflCardB664;
    node = FUN_00255390();
    if (b[0x4997] == 0) {
        node[0x3f1] = 0;
        node[0x3f0] = 0;
        b[0x4997] = (u32)node;
        b[0x4998] = (u32)node;
    } else {
        node[0x3f1] = 0;
        node[0x3f0] = b[0x4998];
        ((u32*)b[0x4998])[0x3f1] = (u32)node;
        b[0x4998] = (u32)node;
    }
    *node |= 4;
    node[1] = 2;
    node[4] = a[0x499f];
    a[0x499f]++;
}

#pragma push
#pragma opt_lifetimes on
// FUN_00253A40



#ifndef PC_BUILD
asm void FUN_00253a40(void)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x8f83b664
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b664
  .word 0x3c030069
  .word 0xdc64ea10
  .word 0x3c030069
  .word 0xc460ea18
  .word 0xffa400a8
  .word 0xe7a000b0
  .word 0x8e230000
  .word 0x30630200
  .word 0x10600009
  .word 0x00000000
  .word 0x0c086848
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x8e240000
  .word 0x2403fdff
  .word 0x00831824
  .word 0xae230000
  .word 0x8e230000
  .word 0x00601827
  .word 0x30630001
  .word 0x14600425
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c422680
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac432680
  .word 0x8e250000
  .word 0x30a20020
  .word 0x10400014
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9444094c
  .word 0x30828000
  .word 0x1440000f
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430956
  .word 0x30628000
  .word 0x1440000a
  .word 0x00000000
  .word 0x30822000
  .word 0x14400007
  .word 0x00000000
  .word 0x30622000
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffdf
  .word 0x00a21024
  .word 0xae220000
  .word 0x8e240000
  .word 0x30820004
  .word 0x1040006a
  .word 0x00000000
  .word 0x00801827
  .word 0x30620008
  .word 0x10400066
  .word 0x00000000
  .word 0x30620020
  .word 0x10400063
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94440952
  .word 0x30828000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443095a
  .word 0x30628000
  .word 0x10400027
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4227ac
  .word 0x18400011
  .word 0x00000000
  .word 0x2444ffff
  .word 0x3c020001
  .word 0x02221021
  .word 0xac4427ac
  .word 0x0c096cc0
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4227ac
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e220000
  .word 0x34420020
  .word 0xae220000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x2444ffff
  .word 0x3c020001
  .word 0x02221021
  .word 0xac4427ac
  .word 0x0c096cec
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000016e
  .word 0x00000000
  .word 0x30822000
  .word 0x14400004
  .word 0x00000000
  .word 0x30622000
  .word 0x10400168
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4327ac
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x2442ffff
  .word 0x0062082a
  .word 0x10200015
  .word 0x00000000
  .word 0x24640001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac4427ac
  .word 0x0c096cc0
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4327ac
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x2442ffff
  .word 0x1462000c
  .word 0x00000000
  .word 0x8e220000
  .word 0x34420020
  .word 0xae220000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac4027ac
  .word 0x0000202d
  .word 0x0c096cec
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000013c
  .word 0x00000000
  .word 0x30820010
  .word 0x10400139
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4327b8
  .word 0x24020001
  .word 0x106200c3
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000012f
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4227b4
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac4327b4
  .word 0x0000902d
  .word 0x10000044
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040802d
  .word 0x8c420000
  .word 0x30420040
  .word 0x1440003b
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x3c010001
  .word 0x342127bc
  .word 0x00411021
  .word 0x8c460000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4727b4
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c422888
  .word 0x00c21018
  .word 0x00e2102a
  .word 0x1440002b
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea20
  .word 0x0240282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50090
  .word 0x27a600cc
  .word 0x0c095bc8
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0240282d
  .word 0x8fa60090
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c47267c
  .word 0x0c095f40
  .word 0x00000000
  .word 0xc7a100c4
  .word 0x3c024348
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000c4
  .word 0x26041094
  .word 0x27a500c0
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c46288c
  .word 0x0c09428c
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420020
  .word 0xae020000
  .word 0x34420040
  .word 0xae020000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x26520001
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x0242102a
  .word 0x1440ffb8
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040802d
  .word 0x8c430000
  .word 0x00601027
  .word 0x30420040
  .word 0x1440000b
  .word 0x00000000
  .word 0x30620020
  .word 0x14400008
  .word 0x00000000
  .word 0x26520001
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x0242102a
  .word 0x1440ffee
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x164200c1
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000008
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x00121880
  .word 0x007d1821
  .word 0xac620070
  .word 0x26520001
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x0242102a
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000282d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00052080
  .word 0x02241821
  .word 0x3c020001
  .word 0x00621021
  .word 0x8c4327bc
  .word 0x009d1021
  .word 0x8c420070
  .word 0xac430010
  .word 0x24a50001
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x00a2102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000001d
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200202d
  .word 0x27a50090
  .word 0x27a600cc
  .word 0x0c095bc8
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0240282d
  .word 0x8fa60090
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c47267c
  .word 0x0c095f40
  .word 0x00000000
  .word 0xc7a100c4
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000c4
  .word 0x26041094
  .word 0x27a500c0
  .word 0x0c093e7c
  .word 0x00000000
  .word 0x26520001
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x0242102a
  .word 0x1440ffdf
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac4027b4
  .word 0x24030001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac4327b8
  .word 0x10000071
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4227b4
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac4327b4
  .word 0x0000902d
  .word 0x1000002b
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040802d
  .word 0x8c420000
  .word 0x00401027
  .word 0x30420040
  .word 0x14400021
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4327b4
  .word 0x00121040
  .word 0x00521021
  .word 0x0062102a
  .word 0x14400019
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50090
  .word 0x27a600cc
  .word 0x0c095bc8
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0240282d
  .word 0x8fa60090
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c47267c
  .word 0x0c095f40
  .word 0x00000000
  .word 0x26041094
  .word 0x27a500c0
  .word 0x2406000a
  .word 0x0c094230
  .word 0x00000000
  .word 0x8e020000
  .word 0x34430020
  .word 0xae030000
  .word 0x2402ffbf
  .word 0x00621024
  .word 0xae020000
  .word 0x26520001
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x0242102a
  .word 0x1440ffd1
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000010
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4327b4
  .word 0x00121040
  .word 0x00521021
  .word 0x24420006
  .word 0x14620007
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x26520001
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x0242102a
  .word 0x1440ffec
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000d
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040802d
  .word 0x8c430000
  .word 0x30620040
  .word 0x1440000b
  .word 0x00000000
  .word 0x30620020
  .word 0x14400008
  .word 0x00000000
  .word 0x26520001
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x0242102a
  .word 0x1440ffef
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x16420005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffef
  .word 0x00621024
  .word 0xae220000
  .word 0x8e220000
  .word 0x30420040
  .word 0x10400189
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c422870
  .word 0x2c410006
  .word 0x10200183
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637930
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c432874
  .word 0x24020002
  .word 0x10620005
  .word 0x00000000
  .word 0x10600174
  .word 0x00000000
  .word 0x10000172
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42287c
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac43287c
  .word 0x3c020001
  .word 0x02221021
  .word 0xc440287c
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4427ac
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140501
  .word 0x26041030
  .word 0x4600a306
  .word 0x0c093cb0
  .word 0x00000000
  .word 0x260411d8
  .word 0x4600a306
  .word 0x0c0943bc
  .word 0x00000000
  .word 0x26040fcc
  .word 0x0c09440c
  .word 0x00000000
  .word 0x26040fcc
  .word 0x0c093724
  .word 0x00000000
  .word 0x260410f8
  .word 0x0c09440c
  .word 0x00000000
  .word 0x260410f8
  .word 0x0c093724
  .word 0x00000000
  .word 0x10000143
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c432878
  .word 0x24040002
  .word 0x10640046
  .word 0x00000000
  .word 0x24020001
  .word 0x10620031
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000136
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42287c
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac43287c
  .word 0x3c020001
  .word 0x02221021
  .word 0xc440287c
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024380
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000802
  .word 0x46000024
  .word 0x44030000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac432880
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c43287c
  .word 0x24020006
  .word 0x14620115
  .word 0x00000000
  .word 0x0c0962d0
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac40287c
  .word 0x24030001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac432878
  .word 0x1000010a
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42287c
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac43287c
  .word 0x24020005
  .word 0x14620100
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac40287c
  .word 0x3c020001
  .word 0x02221021
  .word 0xac442878
  .word 0x100000f8
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42287c
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac43287c
  .word 0x3c020001
  .word 0x02221021
  .word 0xc440287c
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024380
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46000024
  .word 0x44030000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac432880
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c43287c
  .word 0x24020006
  .word 0x146200da
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ff7f
  .word 0x00621824
  .word 0xae230000
  .word 0x2402ffbf
  .word 0x00621024
  .word 0xae220000
  .word 0x100000d1
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42287c
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac43287c
  .word 0x3c020001
  .word 0x02221021
  .word 0xc440287c
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024380
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46000024
  .word 0x44030000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac432880
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c43287c
  .word 0x2402001e
  .word 0x146200b3
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffbf
  .word 0x00621824
  .word 0xae230000
  .word 0x2402feff
  .word 0x00621024
  .word 0xae220000
  .word 0x100000aa
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42287c
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac43287c
  .word 0x3c020001
  .word 0x02221021
  .word 0xc440287c
  .word 0x46800060
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024380
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000802
  .word 0x46000024
  .word 0x44030000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac432880
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c43287c
  .word 0x24020010
  .word 0x14620089
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffbf
  .word 0x00621824
  .word 0xae230000
  .word 0x2402f7ff
  .word 0x00621024
  .word 0xae220000
  .word 0x10000080
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42287c
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac43287c
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x00000000
  .word 0x00000000
  .word 0x2861001f
  .word 0x1020001d
  .word 0x00000000
  .word 0x0000902d
  .word 0x3c024380
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000802
  .word 0x46000024
  .word 0x44100000
  .word 0x1000000b
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4227ac
  .word 0x12420005
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c095510
  .word 0x00000000
  .word 0xac501260
  .word 0x26520001
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x0242102a
  .word 0x1440fff1
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c43287c
  .word 0x2402001e
  .word 0x14620022
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4427ac
  .word 0x0c095510
  .word 0x00000000
  .word 0xac401260
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c442884
  .word 0x3c020001
  .word 0x02221021
  .word 0xac4427ac
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040802d
  .word 0x24030100
  .word 0xac431260
  .word 0x27a400c0
  .word 0x26050018
  .word 0x0c095f64
  .word 0x00000000
  .word 0x26041094
  .word 0x27a500c0
  .word 0x0c093e7c
  .word 0x00000000
  .word 0x44806000
  .word 0x26041030
  .word 0x0c093cb0
  .word 0x00000000
  .word 0x44806000
  .word 0x260411d8
  .word 0x0c0943bc
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4427ac
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c010001
  .word 0x34212800
  .word 0x02212021
  .word 0x27a50060
  .word 0x0c093ee8
  .word 0x00000000
  .word 0x26041168
  .word 0x27a50060
  .word 0x0c093f10
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c43287c
  .word 0x2402005a
  .word 0x14620008
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffbf
  .word 0x00621824
  .word 0xae230000
  .word 0x2402efff
  .word 0x00621024
  .word 0xae220000
  .word 0x26040fcc
  .word 0x0c09440c
  .word 0x00000000
  .word 0x26040fcc
  .word 0x0c093724
  .word 0x00000000
  .word 0x260410f8
  .word 0x0c09440c
  .word 0x00000000
  .word 0x260410f8
  .word 0x0c093724
  .word 0x00000000
  .word 0x0c09553c
  .word 0x00000000
  .word 0x0040902d
  .word 0x0000982d
  .word 0x10000008
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c095930
  .word 0x00000000
  .word 0x26730001
  .word 0x0272182a
  .word 0x1460fff7
  .word 0x00000000
  .word 0x8e230000
  .word 0x30630040
  .word 0x106000bf
  .word 0x00000000
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c632870
  .word 0x24050001
  .word 0x10650022
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000b5
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x24441168
  .word 0x0c09439c
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x26100001
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c63267c
  .word 0x0203182a
  .word 0x1460fff2
  .word 0x00000000
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c63267c
  .word 0x1603009e
  .word 0x00000000
  .word 0x8e240000
  .word 0x2403ffbf
  .word 0x00831824
  .word 0xae230000
  .word 0x10000098
  .word 0x00000000
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c642874
  .word 0x24030002
  .word 0x10830089
  .word 0x00000000
  .word 0x10850037
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000008c
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4427ac
  .word 0x0c095510
  .word 0x00000000
  .word 0x24441168
  .word 0x0c09439c
  .word 0x00000000
  .word 0x14400082
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000001a
  .word 0x00000000
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c6327ac
  .word 0x12430014
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040802d
  .word 0x44806000
  .word 0x26041168
  .word 0x27a500a8
  .word 0xc78d8248
  .word 0x2406000c
  .word 0x0c09433c
  .word 0x00000000
  .word 0xae001250
  .word 0x2403000c
  .word 0xae031254
  .word 0x24030003
  .word 0xae03124c
  .word 0x8e030000
  .word 0x34630200
  .word 0xae030000
  .word 0x26520001
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c63267c
  .word 0x0243182a
  .word 0x1460ffe2
  .word 0x00000000
  .word 0x24040001
  .word 0x3c030001
  .word 0x02231821
  .word 0xac642874
  .word 0x1000005a
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c6327ac
  .word 0x12030009
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x24441168
  .word 0x0c09439c
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x26100001
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c63267c
  .word 0x0203182a
  .word 0x1460ffed
  .word 0x00000000
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c63267c
  .word 0x1603003e
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4427ac
  .word 0x0c095510
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c0243a0
  .word 0xafa200b8
  .word 0x3c024338
  .word 0xafa200bc
  .word 0x3c024348
  .word 0x44826000
  .word 0x26040018
  .word 0x0c083140
  .word 0x00000000
  .word 0x26040018
  .word 0x27a500b8
  .word 0x46000306
  .word 0x27a600c0
  .word 0x0c083100
  .word 0x00000000
  .word 0xc7a100c4
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000c4
  .word 0x26041094
  .word 0x27a500c0
  .word 0x2406000a
  .word 0x0c094140
  .word 0x00000000
  .word 0x8e230000
  .word 0x00601827
  .word 0x30632000
  .word 0x10600007
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x2407000f
  .word 0x0c042938
  .word 0x00000000
  .word 0x3c030001
  .word 0x02231821
  .word 0xac60287c
  .word 0x24040002
  .word 0x3c030001
  .word 0x02231821
  .word 0xac642874
  .word 0x1000000a
  .word 0x00000000
  .word 0x26041094
  .word 0x0c0942e4
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x8e240000
  .word 0x2403ffbf
  .word 0x00831824
  .word 0xae230000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset
#pragma pop
#undef auStack_70
#undef aiStack_60
#undef auStack_40
#undef uStack_28
#undef uStack_20
#undef uStack_18
#undef uStack_14
#undef auStack_10
#undef fStack_c
#undef auStack_4

#pragma push
#pragma opt_lifetimes on
// FUN_00254B90
#ifndef PC_BUILD
asm void bpTexSortVisibleNodes(void)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83b664
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f83b664
  .word 0x8c630000
  .word 0x00601827
  .word 0x30630001
  .word 0x14600084
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x24520030
  .word 0x0c09553c
  .word 0x00000000
  .word 0x0040882d
  .word 0x0000802d
  .word 0x0000982d
  .word 0x1000000d
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x00101880
  .word 0x007d1821
  .word 0x0040202d
  .word 0x24650070
  .word 0x27a600d8
  .word 0x0c095be8
  .word 0x00000000
  .word 0x26100001
  .word 0x26730001
  .word 0x0271182a
  .word 0x1460fff2
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000008
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c095510
  .word 0x00000000
  .word 0x00131880
  .word 0x007d1821
  .word 0xac620050
  .word 0x26730001
  .word 0x0271182a
  .word 0x1460fff7
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000016
  .word 0x00000000
  .word 0x00119880
  .word 0x027d1021
  .word 0x8c420070
  .word 0xc4410038
  .word 0xc6400000
  .word 0x46000801
  .word 0xe7a000c8
  .word 0xc441003c
  .word 0xc6400004
  .word 0x46000801
  .word 0xe7a000cc
  .word 0xc4410040
  .word 0xc6400008
  .word 0x46000801
  .word 0xe7a000d0
  .word 0x27a400c8
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x027d1821
  .word 0xe46000b0
  .word 0x26310001
  .word 0x0230182a
  .word 0x1460ffe9
  .word 0x00000000
  .word 0x0000402d
  .word 0x2604ffff
  .word 0x1000001e
  .word 0x00000000
  .word 0x0000482d
  .word 0x10000017
  .word 0x00000000
  .word 0x00091880
  .word 0x007d3821
  .word 0x24e500b0
  .word 0x24a30004
  .word 0xc4a10004
  .word 0xc4a00000
  .word 0x46010034
  .word 0x4500000d
  .word 0x00000000
  .word 0xe4a10000
  .word 0xe4600000
  .word 0x24e60070
  .word 0x8cc50000
  .word 0x8cc30004
  .word 0xacc30000
  .word 0xacc50004
  .word 0x24e60050
  .word 0x8cc50000
  .word 0x8cc30004
  .word 0xacc30000
  .word 0xacc50004
  .word 0x25290001
  .word 0x0124182a
  .word 0x1460ffe8
  .word 0x00000000
  .word 0x25080001
  .word 0x0104182a
  .word 0x1460ffe1
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000016
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x8c440050
  .word 0x27a50090
  .word 0x27a600dc
  .word 0x0c095bc8
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000007
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x8c440090
  .word 0x0c082c94
  .word 0x00000000
  .word 0x26310001
  .word 0x8fa300dc
  .word 0x0223182a
  .word 0x1460fff7
  .word 0x00000000
  .word 0x26520001
  .word 0x0250182a
  .word 0x1460ffe9
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_lifetimes reset

// FUN_00254E10
void bpTexFinishNodeStreams(void)
{
    u32* work;
    s32 i;

    if (BP_TEX_GLOBAL == NULL)
    {
        K_ASSERT(false, 0xbc);
    }
    work = BP_TEX_GLOBAL;
    for (i = 0; i < 0x10; i++)
    {
        u32* record;
        u32 flags;

        record = (u32*)((u8*)work + i * 0x1264 + 4);
        flags = ~record[0];
        if (!(flags & 4))
        {
            if (!(flags & 8))
            {
                K_ASSERT(false, 0x38d);
            }
            switch (record[1])
            {
            case 0:
                func_0021ab80(*(u16*)((u8*)record + 8));
                break;
            case 1:
                func_0021a920(record[2], record[3]);
                break;
            }
        }
    }
    *work |= 0x400;
    *work |= 0x200;
}

// FUN_00254F20
u32 bpTexIsReady(void)
{
    u32* work = BP_TEX_GLOBAL;

    K_ASSERT(work != NULL, 0xbc);
    return BP_TEX_GLOBAL[0] & 0x200;
}

#pragma optimization_level 1
// FUN_00254F70
void bpTexBeginRender(void)
{
    u32* work;
    u32* node;
    u64 xy;
    f32 z;
    struct
    {
        u64 xy;
        f32 z;
    } origin;

    K_ASSERT(BP_TEX_GLOBAL != NULL, 0xbc);
    work = BP_TEX_GLOBAL;
    xy = *(volatile u64*)D_0068EA30_abs;
    z = *(volatile f32*)D_0068EA38_abs;
    origin.xy = xy;
    origin.z = z;
    for (node = BP_TEX_PTR(work, 0x1265c);
         node != NULL;
         node = bpTexNodeNext(node))
    {
        func_00258630(node);
    }
    BP_TEX_U32(work, 0x12680) = 0;
    func_0024fda0((u32*)((u8*)work + 0x127d4));
    func_0024faf0((f32*)((u8*)work + 0x127d4), &origin);
    func_0024da60((u8*)work + 0x127d4);
    func_0024f090((void*)((u8*)work + 0x127d4));
    func_0024fe00((u32*)((u8*)work + 0x12800));
    func_0024da60((u8*)work + 0x12800);
    func_0024f090((void*)((u8*)work + 0x12800));
    *work |= 1;
}


#pragma optimization_level 2

// FUN_002550B0
void bpTexEndRender(void)
{
    u32* work;

    if (BP_TEX_GLOBAL == NULL)
    {
        K_ASSERT(false, 0xbc);
    }
    work = BP_TEX_GLOBAL;
    func_0024daf0((u8*)work + 0x127d4);
    func_0024daf0((u8*)work + 0x12800);
    *work &= ~1;
}

// FUN_00255130 bpTexResetNodes
void bpTexResetNodes(void)
{
    K_ASSERT(BP_TEX_GLOBAL != NULL, 0xbc);
    (void)bpTexGetNodeCount();
}

// FUN_00255170
void sflCard00255170(u32* param_1)
{
    *param_1 |= 1;
}

// FUN_00255190
void sflCard00255190(u32* param_1)
{
    param_1[0x496] = 0;
    *param_1 |= 0x80;
}

// FUN_002551B0
void bpTexSetTransitionPending(u32* work)
{
    *work |= 0x400;
}

// FUN_002551D0
void bpTexQueueNodePair(u32 first, u32 second)
{
    typedef struct BpTexQueueAction
    {
        u32 type;
        u32 duration;
        u32 first;
        u32 second;
        u8 reserved[0x14];
    } BpTexQueueAction;
    typedef struct BpTexQueueData
    {
        u8 reserved[0x2688];
        BpTexQueueAction actions[8];
        u32 actionCount;
        u32 reserved2;
        u32 duration;
    } BpTexQueueData;
    typedef struct BpTexWorkQueue
    {
        u8 reserved[0x10000];
        BpTexQueueData queue;
    } BpTexWorkQueue;
    u32* work;
    u32* left;
    u32* right;
    BpTexWorkQueue* typedWork;
    K_ASSERT(BP_TEX_GLOBAL != NULL, 0xbc);
    work = BP_TEX_GLOBAL;
    typedWork = (BpTexWorkQueue*)work;
    func_00257e20();
    left = bpTexFindNode(first);
    right = bpTexFindNode(second);
    K_ASSERT((~*left & 0x20) != 0, 0x421);
    K_ASSERT((~*right & 0x20) != 0, 0x422);
    *left |= 0x20;
    *right |= 0x20;
    typedWork->queue.actions[typedWork->queue.actionCount].type = 0;
    typedWork->queue.actions[typedWork->queue.actionCount].first = (u32)left;
    typedWork->queue.actions[typedWork->queue.actionCount].second = (u32)right;
    typedWork->queue.actions[typedWork->queue.actionCount].duration = typedWork->queue.duration;
    typedWork->queue.actionCount++;
}


#pragma optimization_level 3
#pragma schedule off
// FUN_00255390
u32* bpTexFindFreeNode(void)
{
    u32* work;
    u32* node;
    s32 i;

    K_ASSERT(BP_TEX_GLOBAL != NULL, 0xbc);
    work = BP_TEX_GLOBAL;
    for (i = 0; i < 0x10; i++) {
        node = work + i * 0x499 + 1;
        if ((~node[0] & 4) != 0) {
            break;
        }
    }
    K_ASSERT(i < 0x10, 0x45f);
    return node;
}

#pragma optimization_level 2

// FUN_00255440 bpTexFindNodeByIndex
u32* bpTexFindNodeByIndex(u32 index)
{
    u32* node;
    u32* result;

    K_ASSERT(BP_TEX_GLOBAL != NULL, 0xbc);
    for (node = BP_TEX_PTR(BP_TEX_GLOBAL, 0x1265c);
         node != NULL;
         node = (u32*)node[0x3f1])
    {
        result = node;
        if ((node[0] & 2) == 0 && node[4] == index)
        {
            break;
        }
    }
    K_ASSERT(node != NULL, 0x47a);
    return result;
}

// FUN_002554F0 bpTexGetNodeCount
s32 bpTexGetNodeCount(void)
{
    s32 count;
    u32* node;

    K_ASSERT(BP_TEX_GLOBAL != NULL, 0xbc);
    count = 0;
    for (node = BP_TEX_PTR(BP_TEX_GLOBAL, 0x1265c);
         node != NULL;
         node = (u32*)node[0x3f1])
    {
        if ((node[0] & 2) == 0)
        {
            count++;
        }
    }
    return count;
}

/* SocialA W417 negatives: opt_common_subs on worsened bpTexQueueNodeRange (nd 407 -> 434, object 668 -> 648); node/selected, action/node, and i/total declaration permutations were byte-identical. */
#pragma opt_common_subs off
// FUN_00255570
#ifndef PC_BUILD
asm void bpTexQueueNodeRange(s32 start, s32 count)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x8f83b664
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b664
  .word 0x16000006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000882d
  .word 0x8f84b664
  .word 0x3c030001
  .word 0x00831821
  .word 0x8c64265c
  .word 0x10000007
  .word 0x00000000
  .word 0x8c830000
  .word 0x30630002
  .word 0x14600002
  .word 0x00000000
  .word 0x26310001
  .word 0x8c840fc4
  .word 0x1480fff9
  .word 0x00000000
  .word 0x2a210007
  .word 0x14200006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x2405049f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000025
  .word 0x00000000
  .word 0x8f83b664
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f84b664
  .word 0x3c030001
  .word 0x00831821
  .word 0x8c64265c
  .word 0x1000000a
  .word 0x00000000
  .word 0x0080a82d
  .word 0x8c830000
  .word 0x30630002
  .word 0x14600004
  .word 0x00000000
  .word 0x8c830010
  .word 0x10720004
  .word 0x00000000
  .word 0x8c840fc4
  .word 0x1480fff6
  .word 0x00000000
  .word 0x14800006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x2405047a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00121880
  .word 0x007d1821
  .word 0xac750070
  .word 0x26520001
  .word 0x0251182a
  .word 0x1460ffda
  .word 0x00000000
  .word 0x02931821
  .word 0x0223082a
  .word 0x10200006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240504a4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000302d
  .word 0x00141880
  .word 0x007d1821
  .word 0x24630070
  .word 0x10000008
  .word 0x00000000
  .word 0x00062080
  .word 0x00642021
  .word 0x8c850000
  .word 0x8ca40000
  .word 0x34840020
  .word 0xaca40000
  .word 0x24c60001
  .word 0x00d3202a
  .word 0x1480fff7
  .word 0x00000000
  .word 0x3c040001
  .word 0x02042021
  .word 0x8c8527a8
  .word 0x000520c0
  .word 0x00852021
  .word 0x00042080
  .word 0x02042021
  .word 0x3c010001
  .word 0x34212688
  .word 0x00812821
  .word 0x24040001
  .word 0xaca40000
  .word 0x3c040001
  .word 0x02042021
  .word 0x8c8427b0
  .word 0xaca40004
  .word 0x24a60008
  .word 0xaca00020
  .word 0x0000382d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00072080
  .word 0x00642021
  .word 0x8c850000
  .word 0x8cc40018
  .word 0x00042080
  .word 0x00c42021
  .word 0xac850000
  .word 0x8cc40018
  .word 0x24840001
  .word 0xacc40018
  .word 0x24e70001
  .word 0x00f3202a
  .word 0x1480fff3
  .word 0x00000000
  .word 0x3c030001
  .word 0x02031821
  .word 0x8c6327a8
  .word 0x24640001
  .word 0x3c030001
  .word 0x02031821
  .word 0xac6427a8
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_common_subs on

/* W310 measured: opt_common_subs off nd477->392, object 776/784; reset nd477. */
#pragma opt_common_subs off
// FUN_00255810
#ifndef PC_BUILD
asm void bpTexRemoveNodeAt_y2(s32 index)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f82b664
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b664
  .word 0x3c020001
  .word 0x02021021
  .word 0x8c422684
  .word 0x0222102a
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240504c9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c020001
  .word 0x02021021
  .word 0x8c422684
  .word 0x2442ffff
  .word 0x00519023
  .word 0x00121080
  .word 0x00501821
  .word 0x3c020001
  .word 0x00621021
  .word 0x8c542664
  .word 0x8e820000
  .word 0x00401027
  .word 0x30420002
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240504cf
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f82b664
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000882d
  .word 0x8f83b664
  .word 0x3c020001
  .word 0x00621021
  .word 0x8c43265c
  .word 0x10000007
  .word 0x00000000
  .word 0x8c620000
  .word 0x30420002
  .word 0x14400002
  .word 0x00000000
  .word 0x26310001
  .word 0x8c630fc4
  .word 0x1460fff9
  .word 0x00000000
  .word 0x2a210007
  .word 0x14200006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240504d2
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000021
  .word 0x00000000
  .word 0x8f82b664
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f83b664
  .word 0x3c020001
  .word 0x00621021
  .word 0x8c43265c
  .word 0x10000009
  .word 0x00000000
  .word 0x8c620000
  .word 0x30420002
  .word 0x14400004
  .word 0x00000000
  .word 0x8c620010
  .word 0x10530004
  .word 0x00000000
  .word 0x8c630fc4
  .word 0x1460fff7
  .word 0x00000000
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x2405047a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26730001
  .word 0x0271102a
  .word 0x1440ffde
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a50060
  .word 0x27a6007c
  .word 0x0c096464
  .word 0x00000000
  .word 0x0000282d
  .word 0x10000008
  .word 0x00000000
  .word 0x00051880
  .word 0x007d1821
  .word 0x8c640060
  .word 0x8c830000
  .word 0x34630020
  .word 0xac830000
  .word 0x24a50001
  .word 0x8fa3007c
  .word 0x00a3182a
  .word 0x1460fff6
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x00121880
  .word 0x02032821
  .word 0x3c030001
  .word 0x00a31821
  .word 0x8c642668
  .word 0x3c030001
  .word 0x00a31821
  .word 0xac642664
  .word 0x26520001
  .word 0x3c030001
  .word 0x02031821
  .word 0x8c632684
  .word 0x2463ffff
  .word 0x0243182a
  .word 0x1460fff1
  .word 0x00000000
  .word 0x3c030001
  .word 0x02031821
  .word 0x8c632684
  .word 0x2464ffff
  .word 0x3c030001
  .word 0x02031821
  .word 0xac642684
  .word 0x3c030001
  .word 0x02031821
  .word 0x8c6427a8
  .word 0x000418c0
  .word 0x00641821
  .word 0x00031880
  .word 0x02031821
  .word 0x3c010001
  .word 0x34212688
  .word 0x00612021
  .word 0x24030002
  .word 0xac830000
  .word 0x3c030001
  .word 0x02031821
  .word 0x8c6327b0
  .word 0xac830004
  .word 0xac940008
  .word 0x3c030001
  .word 0x02031821
  .word 0x8c6327a8
  .word 0x24640001
  .word 0x3c030001
  .word 0x02031821
  .word 0xac6427a8
  .word 0xdfbf0050
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
}
#endif /* PC_BUILD: asm function omitted */


/* Recovered battle-misc harvest: 0x00253A40-0x002594C0 */
/* W389 measured FUN_00253A40 opt_lifetimes on: nd 2726 -> 2722; object 4408/4432 -> 4408/4432. */
#pragma opt_common_subs on

/* W310 measured: opt_common_subs off nd703->571, object 1036/1040; reset nd703. */
#pragma opt_common_subs off
/* W389 measured opt_loop_invariants on + opt_lifetimes on: nd571/1036B -> nd568/1036B (window 1040B). */
#pragma push
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
// FUN_00255B20
#ifndef PC_BUILD
asm void bpTexShuffleNodes(void)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b664
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b664
  .word 0x3c040069
  .word 0x2484ea40
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4527b0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4227b0
  .word 0x2442fffc
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024160
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0x3c024120
  .word 0x44820000
  .word 0x3c024040
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4603001c
  .word 0x46000024
  .word 0x44030000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac432888
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000818
  .word 0x4603101c
  .word 0x46000024
  .word 0x44030000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac43288c
  .word 0x3c040069
  .word 0x2484ea50
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c452888
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea60
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c45288c
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000007
  .word 0x00000000
  .word 0x00041080
  .word 0x02221821
  .word 0x3c020001
  .word 0x00621021
  .word 0xac4427bc
  .word 0x24840001
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c42267c
  .word 0x0082102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0x24100100
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420001
  .word 0x02028021
  .word 0x0000902d
  .word 0x10000027
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c63267c
  .word 0x0043001b
  .word 0x0000a010
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c63267c
  .word 0x2463ffff
  .word 0x0043001b
  .word 0x00001810
  .word 0x0074102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24660001
  .word 0x10000003
  .word 0x00000000
  .word 0x0280302d
  .word 0x0060a02d
  .word 0x00141080
  .word 0x02221021
  .word 0x3c010001
  .word 0x342127bc
  .word 0x00412821
  .word 0x8ca40000
  .word 0x00061080
  .word 0x02221021
  .word 0x3c010001
  .word 0x342127bc
  .word 0x00411821
  .word 0x8c620000
  .word 0xaca20000
  .word 0xac640000
  .word 0x26520001
  .word 0x0250102a
  .word 0x1440ffd8
  .word 0x00000000
  .word 0x8f82b664
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000902d
  .word 0x8f85b664
  .word 0x3c020001
  .word 0x00a21021
  .word 0x8c43265c
  .word 0x10000007
  .word 0x00000000
  .word 0x8c620000
  .word 0x30420002
  .word 0x14400002
  .word 0x00000000
  .word 0x26520001
  .word 0x8c630fc4
  .word 0x1460fff9
  .word 0x00000000
  .word 0x0000802d
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c44267c
  .word 0x10000009
  .word 0x00000000
  .word 0x00101080
  .word 0x02221821
  .word 0x3c020001
  .word 0x00621021
  .word 0x8c4227bc
  .word 0x10400005
  .word 0x00000000
  .word 0x26100001
  .word 0x0204102a
  .word 0x1440fff6
  .word 0x00000000
  .word 0x14a00006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f83b664
  .word 0x3c020001
  .word 0x00621021
  .word 0x8c43265c
  .word 0x1000000a
  .word 0x00000000
  .word 0x0060982d
  .word 0x8c620000
  .word 0x30420002
  .word 0x14400004
  .word 0x00000000
  .word 0x8c620010
  .word 0x10500004
  .word 0x00000000
  .word 0x8c630fc4
  .word 0x1460fff6
  .word 0x00000000
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x2405047a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a50060
  .word 0x27a6008c
  .word 0x0c095bc8
  .word 0x00000000
  .word 0x27a40080
  .word 0x0200282d
  .word 0x8fa60060
  .word 0x0240382d
  .word 0x0c095f40
  .word 0x00000000
  .word 0xc7a10084
  .word 0x3c024348
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00084
  .word 0x26641094
  .word 0x27a50080
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c46288c
  .word 0x0c09428c
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e630000
  .word 0x34630020
  .word 0xae630000
  .word 0x34630040
  .word 0xae630000
  .word 0x3c030001
  .word 0x02231821
  .word 0xac6027b4
  .word 0x3c030001
  .word 0x02231821
  .word 0xac6027b8
  .word 0x8e230000
  .word 0x34630010
  .word 0xae230000
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
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
#pragma opt_common_subs reset

/* Removing this loses FUN_00258300 (MATCH nd0 -> MISMATCH nd16) - measured W161. */
// FUN_00255F30
u32 bpTexIsShuffleActive(void)
{
    u32* work = BP_TEX_GLOBAL;

    K_ASSERT(work != NULL, 0xbc);
    return BP_TEX_GLOBAL[0] & 0x10;
}

// FUN_00255F80
void bpTexStartShuffle(void)
{
    u32* work;

    if (BP_TEX_GLOBAL == NULL)
    {
        K_ASSERT(false, 0xbc);
    }
    work = BP_TEX_GLOBAL;
    BP_TEX_U32(work, 0x49eb * 4) = 0;
    *work |= 4;
    *work &= ~8;
}

// FUN_00255FE0
void bpTexStopShuffle(void)
{
    if (BP_TEX_GLOBAL == NULL)
    {
        K_ASSERT(false, 0xbc);
    }
    *BP_TEX_GLOBAL &= ~4;
}

// W389 residual nd13: pure call-argument evaluation scheduling; retail materializes 90.0f before the pointer addiu, while MWCCPS2 does the pointer load/addiu first. No load permutation or source-order lever applies.
// FUN_00256030
u32* bpTexGetCurrentNode(void)
{
    u32* node;
    u32* result;
    u32 ordinal;

    if (BP_TEX_GLOBAL == NULL)
    {
        K_ASSERT(false, 0xbc);
    }
    ordinal = BP_TEX_U32(BP_TEX_GLOBAL, 0x127ac);
    if (BP_TEX_GLOBAL == NULL)
    {
        K_ASSERT(false, 0xbc);
    }
    for (node = BP_TEX_PTR(BP_TEX_GLOBAL, 0x1265c);
         node != NULL;
         node = (u32*)node[0x3f1])
    {
        result = node;
        if ((node[0] & 2) == 0 && node[4] == ordinal)
        {
            break;
        }
    }
    if (node == NULL)
    {
        K_ASSERT(false, 0x47a);
    }
    return result;
}

// FUN_00256110 bpTexFindNodeById
u32* bpTexFindNodeById(u32 id)
{
    u32* node;
    u32* result;

    K_ASSERT(BP_TEX_GLOBAL != NULL, 0xbc);
    for (node = BP_TEX_PTR(BP_TEX_GLOBAL, 0x1265c);
         node != NULL;
         node = (u32*)node[0x3f1])
    {
        result = node;
        if ((node[0] & 2) == 0 && node[4] == id)
        {
            break;
        }
    }
    K_ASSERT(node != NULL, 0x47a);
    return result;
}

// FUN_002561c0
u32 sflCard002561c0(u32* param_1)
{
    return *param_1 & 1;
}

// FUN_002561d0
u32 sflCard002561d0(u32* param_1)
{
    return *param_1 & 0x80;
}

/* Recovered battle-misc harvest: 0x00253600-0x00258140 */
// FUN_002561E0
void bpTexApplyGlobalAlpha(f32 amount, void* node)
{
    RwRGBA rgba;
    f32 color;
    u32* leaves[8];
    s32 count;
    s32 i;

    color = DAT_007cc470;
    rgba.r = (u8)(((s32)((u8*)&color)[0] - 0xff) * amount + 255.0f);
    rgba.g = (u8)(((s32)((u8*)&color)[1] - 0xff) * amount + 255.0f);
    rgba.b = (u8)(((s32)((u8*)&color)[2] - 0xff) * amount + 255.0f);
    rgba.a = (u8)(((s32)((u8*)&color)[3] - 0xff) * amount + 255.0f);
    bpTexCollectLeafPos(node, leaves, &count);
    for (i = 0; i < count; i++)
    {
        func_0020cc80(leaves[i], &rgba);
    }
}

// FUN_00256430
u32 bpTexHasPendingNode_y2(void)
{
    u32* node;

    if (BP_TEX_GLOBAL == NULL)
    {
        K_ASSERT(false, 0xbc);
    }
    for (node = BP_TEX_PTR(BP_TEX_GLOBAL, 0x1265c);
         node != NULL;
         node = (u32*)node[0x3f1])
    {
        if ((*node & 0x20) != 0)
        {
            break;
        }
    }
    if (node != NULL)
    {
        return true;
    }
    return false;
}



#pragma alias bpTexRemoveNodeAt_y2 bpTexRemoveNodeAt
#pragma alias bpTexHasPendingNode_y2 bpTexHasPendingNode
#pragma alias FUN_005225a8_y2 FUN_005225a8


#pragma alias D_0096009C_u32 D_0096009C




#pragma alias D_0068EA30_abs D_0068EA30
#pragma alias D_0068EA38_abs D_0068EA38
#pragma alias D_0068EA00_abs D_0068EA00
#pragma alias D_0068EA90_abs D_0068EA90
#pragma alias D_0068EA98_abs D_0068EA98

#pragma alias jtbl_0096017C_abs jtbl_0096017C
#pragma alias D_00960088_abs D_00960088







/* W357 measured bpTex0021c9f0: optimization_level 3 nd121/556B -> nd0/556B. */































/*
 * The command panel stores all of its render records in one work area.  The
 * retail code uses the records as packed byte arrays; keeping the addressing
 * in these small helpers makes the state-machine routines below considerably
 * easier to audit than a collection of magic pointer casts.
 */









/* Removing this loses FUN_002230e0 (MATCH nd0 -> MISMATCH nd19) - measured W302. */






// Previous body was a wrong-helper stub unrelated to retail (1296B window).
// Rewritten from disasm: retail dispatches per-record state via a switch
// (case 0/2 shared, case 1 loops 4 quad slots), using the same
// D_00960090_abs/D_0096009C_abs vtable style as this file's other draw
// functions. Key finding: D_0096009C_abs must be re-cast to a fresh local
// inside both the state==1 loop and the case 0/2 body, matching retail's
// W389 measured first-use swap (slot0 before records): nd11/1292B -> nd16/1292B
// (window 1296B), reverted. Residual is the 2-variable register-bank swap
// (slot0/setQuad), unfixable per the declaration/statement-order floor.



/* W389 measured opt_dead_assignments off: nd1212/1760B -> nd1211/1748B (window 1792B). */

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



// Previous body used bcm_panel_read/write's wrong work-relative base for
// the 0x55c/0x550 count/progress fields (should be overlay0-relative,
// same bug class as FUN_00224150/FUN_00225040) and fabricated the
// interpolated y-offset via raw integer bit-pattern arithmetic instead
// of retail's genuine float divide. The enlarged local rectangle preserves
// retail's 0x70-byte frame, while explicit temporaries preserve mul ordering.

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




// Previous body was a wrong-helper stub (232B) unrelated to retail (1296B
// window). Rewritten from disasm: retail does a 9-entry jump-table
// resource dispatch + per-slot D_00960090/D_0096009C_u32 indirect-vtable
// quad-draw calls (matching FUN_00229B40's style), not the guessed
// bcm_panel_* helpers. obj now 1292B/1296B; residual is a single
// register-bank choice (retail s3/mine s4 for `work`) cascading through
// the whole body - 2 declaration-order attempts had no effect (floor).
/* W389 measured opt_lifetimes on: nd562/1296B -> nd217/1280B (window 1296B). */



// Previous body was a wrong-helper stub unrelated to retail (1168B window).
// Rewritten from disasm: retail sets a fixed initial vtable state(9,2),
// draws a 6-slot resource strip, then 4 single quads reusing/refreshing
// the vtable casts per retail's own re-materialization points, a 4-slot
// double-quad loop, then a final 2-quad pair - all via the established
// D_00960090_abs/D_0096009C_abs style. nd 198->16 (obj 1156B/1168B);
// residual is a table0/loop-counter register-bank swap, unfixable per
// the usual declaration-order floor (2 attempts tried).




/* W389 measured opt_loop_invariants on: nd1997/2852B -> nd1941/2732B (window 3024B). */

































/* W389 measured opt_loop_invariants on: nd797/1676B -> nd716/1676B (window 1728B). */

// Previous body was a wrong-helper stub unrelated to retail (624B window).
// Rewritten from disasm: retail loops 3 quad-setter calls, then computes a
// flag from state fields 0x463c/0x4644, gating func_003b1360 + a resource
// draw, matching FUN_0022C5A0's D_00960090_abs/D_0096009C_abs style.
// nd 89->7 (obj 612B/624B); residual is the state-1 loop's register-bank
// Fixed: swapping i and record declaration order resolved the s3/s4 register coloring.






// Previous body was a wrong-helper stub unrelated to retail (720B window).
// Rewritten from disasm: retail draws 3 rects (2 sharing a resource fetch)
// with a shared alpha255=255*weight computed once and reused, matching
















/* W389 measured opt_lifetimes on: nd442/636B -> nd441/636B (window 640B). */
#pragma optimization_level 3
// FUN_002564C0
#ifndef PC_BUILD
asm void bpTexUpdateNode(void* nodeData)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x8f82b664
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b664
  .word 0x3c020001
  .word 0x02021021
  .word 0xc4402680
  .word 0x46800060
  .word 0x3c024396
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000047
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010502
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c02c47a
  .word 0x44820800
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a00100
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c02c348
  .word 0x44821800
  .word 0x3c0243b4
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600181c
  .word 0xe7a00108
  .word 0x3c020001
  .word 0x02021021
  .word 0xc4402680
  .word 0x46800060
  .word 0x3c0242a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44821800
  .word 0x3c0242f0
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600181c
  .word 0xe7a00104
  .word 0x8e220000
  .word 0x30420080
  .word 0x10400008
  .word 0x00000000
  .word 0x8e221258
  .word 0x24430001
  .word 0xae231258
  .word 0x2402005a
  .word 0x0062001a
  .word 0x00001010
  .word 0xae221258
  .word 0x0220202d
  .word 0x27a500c0
  .word 0x27a60128
  .word 0x0c095be8
  .word 0x00000000
  .word 0x0000202d
  .word 0x8fa30128
  .word 0x1000000b
  .word 0x00000000
  .word 0x00041080
  .word 0x005d1021
  .word 0x8c4200c0
  .word 0xc7a20100
  .word 0xc7a10104
  .word 0xc7a00108
  .word 0xe4420fac
  .word 0xe4410fb0
  .word 0xe4400fb4
  .word 0x24840001
  .word 0x0083102a
  .word 0x1440fff4
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420200
  .word 0x10400084
  .word 0x00000000
  .word 0x8e221250
  .word 0x24420001
  .word 0xae221250
  .word 0x8e23124c
  .word 0x24020003
  .word 0x10620068
  .word 0x00000000
  .word 0x24020002
  .word 0x10620053
  .word 0x00000000
  .word 0x24020001
  .word 0x10620034
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000006b
  .word 0x00000000
  .word 0xc6201250
  .word 0x46800060
  .word 0xc6201254
  .word 0x46800020
  .word 0x46000d03
  .word 0x0220202d
  .word 0x27a500c0
  .word 0x27a6012c
  .word 0x0c096464
  .word 0x00000000
  .word 0x0000902d
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140501
  .word 0x10000019
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x8c5300c0
  .word 0x26641030
  .word 0x4600a306
  .word 0x0c093cb0
  .word 0x00000000
  .word 0x266411d8
  .word 0x4600a306
  .word 0x0c0943bc
  .word 0x00000000
  .word 0x26640fcc
  .word 0x0c09440c
  .word 0x00000000
  .word 0x26640fcc
  .word 0x0c093724
  .word 0x00000000
  .word 0x266410f8
  .word 0x0c09440c
  .word 0x00000000
  .word 0x266410f8
  .word 0x0c093724
  .word 0x00000000
  .word 0x26520001
  .word 0x8fa2012c
  .word 0x0242102a
  .word 0x1440ffe5
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0xc6201250
  .word 0x46800060
  .word 0xc6201254
  .word 0x46800020
  .word 0x46000d03
  .word 0x00000000
  .word 0x26241030
  .word 0x4600a306
  .word 0x0c093cb0
  .word 0x00000000
  .word 0x262411d8
  .word 0x4600a306
  .word 0x0c0943bc
  .word 0x00000000
  .word 0x26240fcc
  .word 0x0c09440c
  .word 0x00000000
  .word 0x26240fcc
  .word 0x0c093724
  .word 0x00000000
  .word 0x262410f8
  .word 0x0c09440c
  .word 0x00000000
  .word 0x262410f8
  .word 0x0c093724
  .word 0x00000000
  .word 0x10000020
  .word 0x00000000
  .word 0xc6201250
  .word 0x46800060
  .word 0xc6201254
  .word 0x46800020
  .word 0x46000883
  .word 0x3c024380
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000802
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae22125c
  .word 0x1000000e
  .word 0x00000000
  .word 0xc6201250
  .word 0x46800060
  .word 0xc6201254
  .word 0x46800020
  .word 0x46000843
  .word 0x3c024380
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae22125c
  .word 0x8e231250
  .word 0x8e221254
  .word 0x14620005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402fdff
  .word 0x00621024
  .word 0xae220000
  .word 0x8e230000
  .word 0x00601027
  .word 0x30420008
  .word 0x10400022
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000a
  .word 0x00000000
  .word 0x26241094
  .word 0x0c0942e4
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffdf
  .word 0x00621024
  .word 0xae220000
  .word 0x26240fcc
  .word 0x26250038
  .word 0x0c093e58
  .word 0x00000000
  .word 0x262410f8
  .word 0x27a500b0
  .word 0x0c093ee8
  .word 0x00000000
  .word 0xc7a300b0
  .word 0xc7a200b4
  .word 0xc7a100b8
  .word 0xc7a000bc
  .word 0xe6230028
  .word 0xe622002c
  .word 0xe6210030
  .word 0xe6200034
  .word 0x26240018
  .word 0x0c082b24
  .word 0x00000000
  .word 0x10000099
  .word 0x00000000
  .word 0x30620010
  .word 0x1040003f
  .word 0x00000000
  .word 0x30620020
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x24050643
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a500c0
  .word 0x27a6012c
  .word 0x0c096464
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000012
  .word 0x00000000
  .word 0x00131080
  .word 0x005d1021
  .word 0x8c5200c0
  .word 0x8e420000
  .word 0x30420020
  .word 0x1040000a
  .word 0x00000000
  .word 0x26441094
  .word 0x0c0942e4
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x8e430000
  .word 0x2402ffdf
  .word 0x00621024
  .word 0xae420000
  .word 0x26730001
  .word 0x8fa3012c
  .word 0x0263102a
  .word 0x1440ffec
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000009
  .word 0x00000000
  .word 0x00041080
  .word 0x005d1021
  .word 0x8c4200c0
  .word 0x8c420000
  .word 0x30420020
  .word 0x14400005
  .word 0x00000000
  .word 0x24840001
  .word 0x0083102a
  .word 0x1440fff6
  .word 0x00000000
  .word 0x14830016
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffef
  .word 0x00621824
  .word 0xae230000
  .word 0x2402ffdf
  .word 0x00621024
  .word 0xae220000
  .word 0x1000000d
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000a
  .word 0x00000000
  .word 0x26241094
  .word 0x0c0942e4
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffdf
  .word 0x00621024
  .word 0xae220000
  .word 0x0220202d
  .word 0x27a50090
  .word 0x27a6012c
  .word 0x0c096464
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50070
  .word 0x27a6011c
  .word 0x0c095be8
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420010
  .word 0x10400022
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000019
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x8c540090
  .word 0x8c530070
  .word 0x26840fcc
  .word 0x26650038
  .word 0x0c093e58
  .word 0x00000000
  .word 0x268410f8
  .word 0x27a500b0
  .word 0x0c093ee8
  .word 0x00000000
  .word 0xc7a300b0
  .word 0xc7a200b4
  .word 0xc7a100b8
  .word 0xc7a000bc
  .word 0xe6630028
  .word 0xe662002c
  .word 0xe6610030
  .word 0xe6600034
  .word 0x26640018
  .word 0x0c082b24
  .word 0x00000000
  .word 0x26520001
  .word 0x8fa2011c
  .word 0x0242102a
  .word 0x1440ffe5
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000016
  .word 0x00000000
  .word 0x8fb30070
  .word 0x26240fcc
  .word 0x26650038
  .word 0x0c093e58
  .word 0x00000000
  .word 0x262410f8
  .word 0x27a500b0
  .word 0x0c093ee8
  .word 0x00000000
  .word 0xc7a300b0
  .word 0xc7a200b4
  .word 0xc7a100b8
  .word 0xc7a000bc
  .word 0xe6630028
  .word 0xe662002c
  .word 0xe6610030
  .word 0xe6600034
  .word 0x26640018
  .word 0x0c082b24
  .word 0x00000000
  .word 0x26520001
  .word 0x8fa2011c
  .word 0x0242102a
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420080
  .word 0x1040007d
  .word 0x00000000
  .word 0x8e22125c
  .word 0x1040007a
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x24530030
  .word 0x0220202d
  .word 0x27a500c0
  .word 0x27a60128
  .word 0x0c095be8
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000068
  .word 0x00000000
  .word 0x00141080
  .word 0x005d1021
  .word 0x8c5200c0
  .word 0x26240fcc
  .word 0x27a50110
  .word 0x0c093e58
  .word 0x00000000
  .word 0xc7a10114
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46000881
  .word 0xe7a20114
  .word 0xc7a10110
  .word 0xc6600000
  .word 0x46000801
  .word 0xe7a000e0
  .word 0xc6600004
  .word 0x46001001
  .word 0xe7a000e4
  .word 0xc6610008
  .word 0xc7a00118
  .word 0x46010001
  .word 0xe7a000e8
  .word 0x27a400e0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a300e0
  .word 0xe7a300e0
  .word 0xc7a200e4
  .word 0xe7a200e4
  .word 0xc7a100e8
  .word 0xe7a100e8
  .word 0xc7a00110
  .word 0x46001800
  .word 0xe7a000f0
  .word 0xc7a00114
  .word 0x46001000
  .word 0xe7a000f4
  .word 0xc7a00118
  .word 0x46000800
  .word 0xe7a000f8
  .word 0x240200ff
  .word 0xa3a20120
  .word 0xa3a20121
  .word 0xa3a20122
  .word 0xc620125c
  .word 0x46800060
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c024380
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
  .word 0xa3a30123
  .word 0x8e441248
  .word 0x27a50120
  .word 0x0c0d3fe4
  .word 0x00000000
  .word 0x8e441248
  .word 0xc78c8070
  .word 0x0c0d3fdc
  .word 0x00000000
  .word 0x8e441248
  .word 0x27a500f0
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x3c028000
  .word 0x44826000
  .word 0x44806800
  .word 0x8e441248
  .word 0x46006b86
  .word 0x0c0d3f8c
  .word 0x00000000
  .word 0x8e441248
  .word 0x0c0d3f4c
  .word 0x00000000
  .word 0x8e441248
  .word 0x24050005
  .word 0x0c0d3f5c
  .word 0x00000000
  .word 0x26940001
  .word 0x8fa20128
  .word 0x0282102a
  .word 0x1440ff96
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a500c0
  .word 0x27a60128
  .word 0x0c095be8
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000004c
  .word 0x00000000
  .word 0x00131080
  .word 0x005d1021
  .word 0x8c5200c0
  .word 0x3c020001
  .word 0x02021021
  .word 0xc4402880
  .word 0x46800020
  .word 0x3c024380
  .word 0x44820800
  .word 0x00000000
  .word 0x46010503
  .word 0xc6401260
  .word 0x46800020
  .word 0x46010543
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420080
  .word 0x1040000f
  .word 0x00000000
  .word 0xc6201258
  .word 0x46800060
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a20124
  .word 0xa3a20125
  .word 0xa3a20126
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
  .word 0xa3a30127
  .word 0x26440018
  .word 0x27a50124
  .word 0x0c083320
  .word 0x00000000
  .word 0x8e230000
  .word 0x30630080
  .word 0x10600006
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x26440018
  .word 0x0c0835dc
  .word 0x00000000
  .word 0x26730001
  .word 0x8fa30128
  .word 0x0263182a
  .word 0x1460ffb2
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma optimization_level 2

// FUN_00256F20
void bpTexCollectLeafPos(void* node, void* values, s32* count)
{
    u32* children[4];
    s32 childCount;
    s32 i;

    func_00256fa0(node, children, &childCount);
    for (i = 0; i < childCount; i++)
    {
        ((u32*)values)[i] = (u32)((u8*)children[i] + 0x18);
    }
    *count = childCount;
}

// FUN_00256FA0
void bpTexCollectLeaves(void* nodeData, void* values, s32* count)
{
    struct BpTexCollectScratch
    {
        u32* stack[8];
        u32* nested[8];
        u32* leaves[6];
        s32 stackCount;
        s32 nestedCount;
    } scratch;
    u32* node;
    s32 leafCount;
    s32 last;
    s32 i;
    s32 initialCount;

    node = (u32*)nodeData;
    if ((~*node & 8) != 0)
    {
        ((u32*)values)[0] = (u32)node;
        *count = 1;
        return;
    }

    func_00259190(node, scratch.stack, &scratch.stackCount);
    initialCount = scratch.stackCount;
    leafCount = 0;
    while (scratch.stackCount != 0)
    {
        u32* child;
        child = scratch.stack[--scratch.stackCount];
        if ((~*child & 8) != 0)
        {
            scratch.leaves[leafCount++] = child;
        }
        else
        {
            s32 stackIndex;
            func_00259190(child, scratch.nested, &scratch.nestedCount);
            child = ((volatile struct BpTexCollectScratch*)&scratch)->nested[0];
            stackIndex = ((volatile struct BpTexCollectScratch*)&scratch)->stackCount;
            scratch.stack[stackIndex] = child;
            scratch.stackCount = stackIndex + 1;
        }
    }
    K_ASSERT(initialCount == leafCount, 0x702);
    i = 0;
    last = leafCount - 1;
    while (i < leafCount)
    {
        ((u32*)values)[i] = (u32)scratch.leaves[last - i];
        i++;
    }
    if ((*node & 0x10) != 0)
    {
        *count = leafCount;
    }
    else
    {
        *count = 1;
    }
}

/* W310/W357 measured bpTexBeginRender: optimization_level 1 nd85/288B -> nd0/320B. */
#pragma opt_loop_invariants on
/* W389 measured opt_propagation off: nd2266/2908B -> nd2256/2920B (window 3024B). */
#pragma push
#pragma opt_propagation off
// FUN_00257130
#ifndef PC_BUILD
asm void bpTexApplyActions(void)
{
  .set noreorder
  .word 0x27bdfe00
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
  .word 0x8f82b664
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b664
  .word 0x0220102d
  .word 0x3c030069
  .word 0xdc64ea70
  .word 0x3c030069
  .word 0xc460ea78
  .word 0xffa401b8
  .word 0xe7a001c0
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c74267c
  .word 0x3c010001
  .word 0x34212688
  .word 0x02218021
  .word 0x0000902d
  .word 0x10000031
  .word 0x00000000
  .word 0x8e040000
  .word 0x24030002
  .word 0x1083000d
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800026
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x8e030020
  .word 0x2463ffff
  .word 0x0283a023
  .word 0x1000001f
  .word 0x00000000
  .word 0x8e130008
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000202d
  .word 0x8f82b664
  .word 0x3c030001
  .word 0x00431821
  .word 0x8c65265c
  .word 0x1000000b
  .word 0x00000000
  .word 0x8ca30000
  .word 0x00601827
  .word 0x30630002
  .word 0x14600005
  .word 0x00000000
  .word 0x8ca30fc8
  .word 0x14730002
  .word 0x00000000
  .word 0x24840001
  .word 0x8ca50fc4
  .word 0x14a0fff5
  .word 0x00000000
  .word 0xafa401fc
  .word 0x2483ffff
  .word 0x0283a021
  .word 0x26520001
  .word 0x26100024
  .word 0x3c030001
  .word 0x02231821
  .word 0x8c6327a8
  .word 0x0243182a
  .word 0x1460ffcb
  .word 0x00000000
  .word 0x3c010001
  .word 0x34212688
  .word 0x02219021
  .word 0x0000f02d
  .word 0x10000216
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020002
  .word 0x106201ba
  .word 0x00000000
  .word 0x24020001
  .word 0x106200c7
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000209
  .word 0x00000000
  .word 0x26500008
  .word 0x8e440008
  .word 0x8c930010
  .word 0x8e42000c
  .word 0x8c550010
  .word 0x27a50150
  .word 0x27a601f8
  .word 0x0c095be8
  .word 0x00000000
  .word 0x0000282d
  .word 0x8fa401f8
  .word 0x10000007
  .word 0x00000000
  .word 0x00051080
  .word 0x005d1821
  .word 0x8c620150
  .word 0x24420018
  .word 0xac6201a0
  .word 0x24a50001
  .word 0x00a4102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x27a401d8
  .word 0x02a0282d
  .word 0x8fa601a0
  .word 0x0280382d
  .word 0x0c095f40
  .word 0x00000000
  .word 0x0275b023
  .word 0x02c0202d
  .word 0x0c147838
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x468000a0
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602081c
  .word 0xe7a001c8
  .word 0x02c0202d
  .word 0x0c147838
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c0242c8
  .word 0x44821000
  .word 0x3c0243c8
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a001cc
  .word 0x02c0202d
  .word 0x0c147838
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c0242c8
  .word 0x44821000
  .word 0x3c024348
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a001d0
  .word 0x8e020000
  .word 0x24441094
  .word 0x27a501d8
  .word 0x8e460004
  .word 0x27a701c8
  .word 0x0c09416c
  .word 0x00000000
  .word 0x8e040004
  .word 0x27a50130
  .word 0x27a601f4
  .word 0x0c095be8
  .word 0x00000000
  .word 0x0000282d
  .word 0x8fa401f4
  .word 0x10000007
  .word 0x00000000
  .word 0x00051080
  .word 0x005d1821
  .word 0x8c620130
  .word 0x24420018
  .word 0xac6201a0
  .word 0x24a50001
  .word 0x00a4102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x27a401d8
  .word 0x0260282d
  .word 0x8fa601a0
  .word 0x0280382d
  .word 0x0c095f40
  .word 0x00000000
  .word 0x0275b023
  .word 0x02c0202d
  .word 0x0c147838
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c0242c8
  .word 0x44821000
  .word 0x3c02c2c8
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101d
  .word 0xe7a001c8
  .word 0x02c0202d
  .word 0x0c147838
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c0242c8
  .word 0x44821000
  .word 0x3c02c3c8
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101d
  .word 0xe7a001cc
  .word 0x02c0202d
  .word 0x0c147838
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c0242c8
  .word 0x44821000
  .word 0x3c02c348
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101d
  .word 0xe7a001d0
  .word 0x8e020004
  .word 0x24441094
  .word 0x27a501d8
  .word 0x8e460004
  .word 0x27a701c8
  .word 0x0c09416c
  .word 0x00000000
  .word 0x8e020000
  .word 0xac550010
  .word 0x8e020004
  .word 0xac530010
  .word 0x3c020001
  .word 0x02221021
  .word 0xac54267c
  .word 0x8e430004
  .word 0x2862000a
  .word 0x14400009
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000015a
  .word 0x00000000
  .word 0x28620005
  .word 0x14400009
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070003
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000014f
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x10000147
  .word 0x00000000
  .word 0x26550008
  .word 0x8e420008
  .word 0x8c560010
  .word 0x8f82b664
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b664
  .word 0x0c0954e4
  .word 0x00000000
  .word 0x0040982d
  .word 0x3c020001
  .word 0x02021021
  .word 0x8c42265c
  .word 0x1440000b
  .word 0x00000000
  .word 0xae600fc4
  .word 0xae600fc0
  .word 0x3c020001
  .word 0x02021021
  .word 0xac53265c
  .word 0x3c020001
  .word 0x02021021
  .word 0xac532660
  .word 0x1000000d
  .word 0x00000000
  .word 0xae600fc4
  .word 0x3c020001
  .word 0x02021021
  .word 0x8c422660
  .word 0xae620fc0
  .word 0x3c020001
  .word 0x02021021
  .word 0x8c422660
  .word 0xac530fc4
  .word 0x3c020001
  .word 0x02021021
  .word 0xac532660
  .word 0x8e620000
  .word 0x34420004
  .word 0xae620000
  .word 0x34420008
  .word 0xae620000
  .word 0x34420010
  .word 0xae620000
  .word 0x34420020
  .word 0xae620000
  .word 0xae760010
  .word 0x0260202d
  .word 0x0c09618c
  .word 0x00000000
  .word 0x44806000
  .word 0x27a40170
  .word 0x27a501b8
  .word 0x0000302d
  .word 0x0c12f778
  .word 0x00000000
  .word 0x26641168
  .word 0x27a50170
  .word 0x0c093f10
  .word 0x00000000
  .word 0x0000202d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00041080
  .word 0x02a21021
  .word 0x8c430000
  .word 0xac730fc8
  .word 0x8c620000
  .word 0x34420002
  .word 0xac620000
  .word 0x8c620010
  .word 0x00561023
  .word 0xac620010
  .word 0x24840001
  .word 0x8ea20018
  .word 0x0082102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c422684
  .word 0x28420006
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x24050784
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c422684
  .word 0x00021080
  .word 0x02221821
  .word 0x3c020001
  .word 0x00621021
  .word 0xac532664
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c422684
  .word 0x24430001
  .word 0x3c020001
  .word 0x02221021
  .word 0xac432684
  .word 0x0260202d
  .word 0x27a50110
  .word 0x27a601f0
  .word 0x0c095be8
  .word 0x00000000
  .word 0x0000282d
  .word 0x8fa401f0
  .word 0x10000007
  .word 0x00000000
  .word 0x00051080
  .word 0x005d1821
  .word 0x8c620110
  .word 0x24420018
  .word 0xac6201a0
  .word 0x24a50001
  .word 0x00a4102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x27a401d8
  .word 0x8e650010
  .word 0x8fa601a0
  .word 0x0280382d
  .word 0x0c095f40
  .word 0x00000000
  .word 0x26641094
  .word 0x27a501d8
  .word 0x0c093e7c
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000024
  .word 0x00000000
  .word 0x00101080
  .word 0x02a21021
  .word 0x8c420000
  .word 0x7fa200a0
  .word 0x70402628
  .word 0x27a500f0
  .word 0x27a601ec
  .word 0x0c095be8
  .word 0x00000000
  .word 0x0000282d
  .word 0x8fa401ec
  .word 0x10000007
  .word 0x00000000
  .word 0x00051080
  .word 0x005d1821
  .word 0x8c6200f0
  .word 0x24420018
  .word 0xac6201a0
  .word 0x24a50001
  .word 0x00a4102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x27a401d8
  .word 0x8e650010
  .word 0x8fa601a0
  .word 0x0280382d
  .word 0x0c095f40
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x24441094
  .word 0x27a501d8
  .word 0x8e460004
  .word 0x0c094230
  .word 0x00000000
  .word 0x26100001
  .word 0x8ea20018
  .word 0x0202102a
  .word 0x1440ffda
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c44265c
  .word 0x1000000e
  .word 0x00000000
  .word 0x8c820000
  .word 0x30420002
  .word 0x14400009
  .word 0x00000000
  .word 0x8c830010
  .word 0x02c3082a
  .word 0x10200005
  .word 0x00000000
  .word 0x8ea20018
  .word 0x2442ffff
  .word 0x00621023
  .word 0xac820010
  .word 0x8c840fc4
  .word 0x1480fff2
  .word 0x00000000
  .word 0xae601250
  .word 0x8e420004
  .word 0xae621254
  .word 0xae60124c
  .word 0x8e620000
  .word 0x34420200
  .word 0xae620000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac54267c
  .word 0x8e430004
  .word 0x2862000a
  .word 0x14400009
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000006a
  .word 0x00000000
  .word 0x28620005
  .word 0x14400009
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070003
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000005f
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x10000057
  .word 0x00000000
  .word 0x8e500008
  .word 0x0200202d
  .word 0x27a50180
  .word 0x27a601fc
  .word 0x0c096464
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0963e0
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000002a
  .word 0x00000000
  .word 0x00131080
  .word 0x005d1021
  .word 0x8c500180
  .word 0x0200202d
  .word 0x27a500d0
  .word 0x27a601e8
  .word 0x0c095be8
  .word 0x00000000
  .word 0x0000282d
  .word 0x8fa401e8
  .word 0x10000007
  .word 0x00000000
  .word 0x00051080
  .word 0x005d1821
  .word 0x8c6200d0
  .word 0x24420018
  .word 0xac6201a0
  .word 0x24a50001
  .word 0x00a4102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x27a401d8
  .word 0x8e050010
  .word 0x8fa601a0
  .word 0x0280382d
  .word 0x0c095f40
  .word 0x00000000
  .word 0x26041094
  .word 0x27a501d8
  .word 0x8e460004
  .word 0x0c094230
  .word 0x00000000
  .word 0xae001250
  .word 0x8e420004
  .word 0xae021254
  .word 0x24020001
  .word 0xae02124c
  .word 0x8e020000
  .word 0x34420200
  .word 0xae020000
  .word 0x26730001
  .word 0x8fa201fc
  .word 0x0262102a
  .word 0x1440ffd4
  .word 0x00000000
  .word 0x8e430004
  .word 0x2862000a
  .word 0x14400009
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x28620005
  .word 0x14400009
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070003
  .word 0x0c042938
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x27de0001
  .word 0x26520024
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4227a8
  .word 0x03c2102a
  .word 0x1440fde6
  .word 0x00000000
  .word 0x8f82b664
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000902d
  .word 0x8f83b664
  .word 0x3c020001
  .word 0x00621021
  .word 0x8c43265c
  .word 0x10000007
  .word 0x00000000
  .word 0x8c620000
  .word 0x30420002
  .word 0x14400002
  .word 0x00000000
  .word 0x26520001
  .word 0x8c630fc4
  .word 0x1460fff9
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000045
  .word 0x00000000
  .word 0x8f82b664
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x240500bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f83b664
  .word 0x3c020001
  .word 0x00621021
  .word 0x8c43265c
  .word 0x1000000a
  .word 0x00000000
  .word 0x0060b82d
  .word 0x8c620000
  .word 0x30420002
  .word 0x14400004
  .word 0x00000000
  .word 0x8c620010
  .word 0x10500004
  .word 0x00000000
  .word 0x8c630fc4
  .word 0x1460fff6
  .word 0x00000000
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ea00
  .word 0x2405047a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8ee20000
  .word 0x30420020
  .word 0x14400020
  .word 0x00000000
  .word 0x02e0202d
  .word 0x27a500b0
  .word 0x27a601e4
  .word 0x0c095be8
  .word 0x00000000
  .word 0x0000282d
  .word 0x8fa401e4
  .word 0x10000007
  .word 0x00000000
  .word 0x00051080
  .word 0x005d1821
  .word 0x8c6200b0
  .word 0x24420018
  .word 0xac6201a0
  .word 0x24a50001
  .word 0x00a4102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x27a401d8
  .word 0x8ee50010
  .word 0x8fa601a0
  .word 0x0240382d
  .word 0x0c095f40
  .word 0x00000000
  .word 0x26e41094
  .word 0x27a501d8
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4627b0
  .word 0x0c094230
  .word 0x00000000
  .word 0x26100001
  .word 0x0212102a
  .word 0x1440ffba
  .word 0x00000000
  .word 0x3c020001
  .word 0x02221021
  .word 0xac4027a8
  .word 0x3c040069
  .word 0x2484ea80
  .word 0x3c020001
  .word 0x02221021
  .word 0x8c4527b0
  .word 0x0c14896a
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
  .word 0x27bd0200
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_propagation reset
#pragma opt_loop_invariants reset
// FUN_00257D00 bpTexBuildPosition
void bpTexBuildPosition(void* output, u32 index, void* source, s32 count)
{
    f32 vector[2];
    f32 scale;

    vector[0] = func_0020c660(index, count);
    vector[1] = 184.0f;
    scale = func_0020c500(source, 90.0f);
    func_0020c400(source, vector, scale, output);
    BP_TEX_F32(output, 4) += 100.0f;
}

// FUN_00257D90 bpTexBuildFixedPosition
void bpTexBuildFixedPosition(void* output, void* source)
{
    f32 vector[2];
    f32 scale;

    vector[0] = 320.0f;
    vector[1] = 184.0f;
    scale = func_0020c500(source, 200.0f);
    func_0020c400(source, vector, scale, output);
    BP_TEX_F32(output, 4) += 100.0f;
}

// FUN_00257E20
void bpTexDumpNodes(void)
{
    u32* work;
    u32* node;

    K_ASSERT(BP_TEX_GLOBAL != NULL, 0xbc);
    work = BP_TEX_GLOBAL;
    func_005225a8((u32)"dump\n");
    for (node = BP_TEX_PTR(work, 0x1265c);
         node != NULL;
         node = bpTexNodeNext(node))
    {
        func_005225a8((u32)"%d", node[5]);
        if ((node[0] & 2) != 0)
        {
            func_005225a8((u32)"c");
        }
        if ((node[0] & 8) != 0)
        {
            func_005225a8((u32)"n");
        }
        if ((node[0] & 0x20) != 0)
        {
            func_005225a8((u32)"a");
        }
        func_005225a8((u32)",");
    }
    func_005225a8((u32)"\n\n");
}

// FUN_00257F10
void bpTexPrepareNodes(void)
{
    u32* work;
    s32 i;
    u32* node;
    u32* scan;
    u64 xy;
    f32 z;
    struct
    {
        u64 xy;
        f32 z;
    } origin;

    if (BP_TEX_GLOBAL == NULL)
    {
        func_0019d3f0((const char*)D_0068EA00_abs, 0xbc);
    }
    work = BP_TEX_GLOBAL;
    xy = *(volatile u64*)D_0068EA90_abs;
    z = *(volatile f32*)D_0068EA98_abs;
    origin.xy = xy;
    origin.z = z;
    for (i = 0; i < (s32)BP_TEX_U32(work, 0x499f * 4); i++)
    {
        if (BP_TEX_GLOBAL == NULL)
        {
            func_0019d3f0((const char*)D_0068EA00_abs, 0xbc);
        }
        scan = BP_TEX_PTR(BP_TEX_GLOBAL, 0x1265c);
        while (scan != NULL)
        {
            node = scan;
            if ((scan[0] & 2) == 0 &&
                scan[4] == (u32)i)
            {
                break;
            }
            scan = (u32*)scan[0x3f1];
        }
        if (scan == NULL)
        {
            func_0019d3f0((const char*)D_0068EA00_abs, 0x47a);
        }
        func_00250cf0((u32*)node + 0x45a,
                      &origin,
                      DAT_007caf38,
                      0.0f,
                      0xc);
        node[0x494] = 0;
        node[0x495] = 0xc;
        node[0x493] = 2;
        *node |= 0x200;
    }
    *work |= 2;
    BP_TEX_U32(work, 0x4a1c * 4) = 0;
    *work |= 0x40;
}

/* W357 measured bpTexFindFreeNode: optimization_level 3 nd18/168B -> nd0/168B. */
// FUN_00258090
void sflCard00258090(void)
{
    K_ASSERT(sSflCard354 != NULL, 0xbc);
    *sSflCard354 |= 0x2000;
    FUN_00258140();
}
// FUN_002580e0
void sflCard002580e0(void)
{
    K_ASSERT(sSflCard354 != NULL, 0xbc);
    *sSflCard354 &= 0xffffdfff;
    FUN_00258140();
}

// FUN_00258140


void FUN_00258140(void)
{
  u32 uVar1;
  u32 *puVar2;
  u32 *puVar3;
  u32 *work;
  SflCardVec stack;
  void FUN_00250cf0(u32 *, void *, f32, f32, int);

  K_ASSERT(sSflCard354 != NULL, 0xbc);
  puVar2 = sSflCard354;
  stack = DAT_0068eaa0;
  uVar1 = puVar2[0x49eb];
  K_ASSERT(puVar2 != NULL, 0xbc);
  puVar3 = (u32 *)sSflCard354[0x4997];
  while (puVar3 != NULL) {
    work = puVar3;
    if ((*puVar3 & 2) == 0 && puVar3[4] == uVar1) {
      break;
    }
    puVar3 = (u32 *)puVar3[0x3f1];
  }
  K_ASSERT(puVar3 != NULL, 0x47a);
  FUN_00250cf0(work + 0x45a, &stack, 0.0f, fGpffff8248, 0xc);
  work[0x494] = 0;
  work[0x495] = 0xc;
  work[0x493] = 3;
  *work |= 0x200;
  *puVar2 |= 0x40;
  puVar2[0x4a1c] = 1;
  puVar2[0x4a1d] = 0;
  *puVar2 &= 0xfffffffd;
}

/* Retail queueing performs its root census and action-record writes inline. */
/* W310 measured: opt_common_subs off nd434->407, object 668/672; reset nd434. */
// FUN_002582b0
u32 sflCard002582b0(void)
{
    K_ASSERT(sSflCard354 != NULL, 0xbc);
    return *sSflCard354 & 0x40;
}
#pragma opt_loop_invariants on
// FUN_00258300


void FUN_00258300(void)
{
  int i;
  u32 uVar1;
  u32 *base;
  u32 *item;
  int stride;
  int j;
  K_ASSERT(sSflCard354 != NULL, 0xbc);
  base = sSflCard354;
  for (i = 0; i < 0x10; i++) {
    item = base + i * 0x499 + 1;
    uVar1 = *item;
    if ((~uVar1 & 4) == 0) {
      if ((uVar1 & 0x100) != 0) {
        if ((uVar1 & 0x80) != 0) {
          FUN_0034fcf0(item[0x492]);
        }
        FUN_0024daf0(item + 0x3f3);
        FUN_0024daf0(item + 0x425);
        FUN_0024daf0(item + 0x40c);
        FUN_0024daf0(item + 0x43e);
        FUN_0024daf0(item + 0x45a);
        FUN_0024daf0(item + 0x476);
      }
      *item &= 0xfffffeff;
    }
  }
  FUN_002593d0();
  base[0x499f] = 0;
  base[0x49a1] = 0;
  base[0x4997] = 0;
  base[0x4998] = 0;
  base[0x49ea] = 0;
  stride = 0x1264;
  for (j = 0; j < 0x10; j++) {
    item = (u32 *)((int)base + j * stride);
    item[1] = 0;
    item[6] = j;
  }
}
#pragma opt_loop_invariants reset
// FUN_00258490
void sflCard00258490(void)
{
    K_ASSERT(sSflCard354 != NULL, 0xbc);
    *sSflCard354 |= 8;
}

// FUN_002584e0
void sflCard002584e0(u32 param_1)
{
    K_ASSERT(sSflCard354 != NULL, 0xbc);
    sSflCard354[0x49ec] = param_1;
}

// FUN_00258540


void FUN_00258540(u32 param_1,u64 param_2)
{
  u32 *puVar1;
  u32 *work;

  K_ASSERT(sSflCard354 != NULL, 0xbc);
  K_ASSERT(sSflCard354 != NULL, 0xbc);
  puVar1 = (u32 *)sSflCard354[0x4997];
  while (puVar1 != NULL) {
    work = puVar1;
    if ((*puVar1 & 2) == 0 && puVar1[4] == param_1) {
      break;
    }
    puVar1 = (u32 *)puVar1[0x3f1];
  }
  K_ASSERT(puVar1 != NULL, 0x47a);
  FUN_0024f960(work + 0x3f3,param_2);
}

// FUN_00258630


void FUN_00258630(u32 *param_1)
{
    u32 flags;
    u32 *node;
    u32 *card;
    s32 count;
    SflCardDrawFrame local;
#define scale local.scale
#define frame_offset local.frame_offset
#define frame_const local.frame_const
#define rect local.rect
#define rotation local.rotation
#define transformed local.transformed
#define origin local.origin
    f32 frame;
    u64 origin_pair;
    f32 origin_z;

    origin_pair = *(volatile /* Removing this function's qualifier batch worsens FUN_00258630 (NONMATCHING nd6 -> NONMATCHING nd11, size 1044 -> 1044) - measured W170. */ u64 *)DAT_0068eab0_abs;
    origin_z = *(volatile /* Removing this function's qualifier batch worsens FUN_00258630 (NONMATCHING nd6 -> NONMATCHING nd11, size 1044 -> 1044) - measured W170. */ f32 *)DAT_0068eab8_abs;
    *(u64 *)origin = origin_pair;
    origin[2] = origin_z;
    flags = *param_1;
    *param_1 = flags | 0x100;
    if ((~(flags | 0x100) & 8) != 0) {
        switch (param_1[1]) {
        case 1:
            FUN_0020a800(param_1 + 6);
            FUN_0020c5f0(param_1 + 6, param_1[2], param_1[3]);
            break;
        case 0:
            FUN_00209f00(param_1 + 6);
            card = param_1 + 6;
            FUN_0020c590(card, (u16)card[-4]);
            if ((*param_1 & 1) != 0) {
                FUN_0020d6c0(param_1 + 6);
            }
            if ((*param_1 & 0x400) != 0) {
                FUN_0020d710(param_1 + 6);
            }
            break;
        case 2:
            FUN_0020ab30(param_1 + 6);
            break;
        default:
            K_ASSERT(0, 0x8de);
            break;
        }

        scale[0] = 10.0f;
        scale[1] = 10.0f;
        scale[2] = 10.0f;
        FUN_0020d630(param_1 + 6, scale);

        K_ASSERT(sSflCard354 != NULL, 0xbc);
        count = 0;
        for (node = *(u32 **)((u8 *)sSflCard354 + 0x1265c);
             node != NULL;
             node = (u32 *)node[0x3f1]) {
            if ((*node & 2) == 0) {
                count++;
            }
        }

        frame_offset = FUN_0020c660(param_1[4], count);
        frame_const = 184.0f;
        frame = FUN_0020c500(param_1 + 6, 90.0f);
        FUN_0020c400(param_1 + 6, &frame_offset, frame, rect);
        rect[1] += 100.0f;
        FUN_0020d650(param_1 + 6, rect);

        rotation[0] = 0.0f;
        rotation[1] = 1.0f;
        rotation[2] = 0.0f;
        FUN_004bdde0(180.0f, (f32 *)(param_1 + 10), rotation, 0);
        FUN_0020cd50(param_1 + 6, param_1 + 0x186);
    }

    FUN_0024fd80(param_1 + 0x425);
    FUN_0024f9f0(param_1 + 0x425, rect);
    FUN_0024da60(param_1 + 0x425);
    FUN_0024f090(param_1 + 0x425);
    FUN_0024fd20(param_1 + 0x40c);
    FUN_0024f210(param_1 + 0x40c, 3.0f, 0x3c, 6.0f);
    FUN_0024da60(param_1 + 0x40c);
    FUN_0024f090(param_1 + 0x40c);
    FUN_0024fd40(param_1 + 0x3f3);
    FUN_002503f0(param_1 + 0x3f3, 0, param_1 + 0x425);
    FUN_002503f0(param_1 + 0x3f3, 1, param_1 + 0x40c);
    FUN_0024da60(param_1 + 0x3f3);
    FUN_0024f090(param_1 + 0x3f3);
    FUN_0024fe00(param_1 + 0x45a);
    FUN_004bdde0(180.0f, transformed, origin, 0);
    FUN_0024fc40(param_1 + 0x45a, transformed);
    FUN_0024da60(param_1 + 0x45a);
    FUN_0024f090(param_1 + 0x45a);
    FUN_0024fe20(param_1 + 0x476);
    FUN_0024da60(param_1 + 0x476);
    FUN_0024f090(param_1 + 0x476);
    FUN_0024fdc0(param_1 + 0x43e);
    FUN_0024da60(param_1 + 0x43e);
    FUN_0024f090(param_1 + 0x43e);
    FUN_00250be0(param_1 + 0x43e, 0, param_1 + 0x45a);
    FUN_00250be0(param_1 + 0x43e, 1, param_1 + 0x476);
    if ((*param_1 & 0x80) != 0) {
        param_1[0x492] = FUN_0034fcd0(FUN_0020e710(0));
        param_1[0x497] = 0x100;
    }
    param_1[0x498] = 0x100;
}

#undef scale
#undef frame_offset
#undef frame_const
#undef rect
#undef rotation
#undef transformed
#undef origin
// FUN_00258a50
void sflCard00258a50(void)
{
    u32* work;
    u32 v;

    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    work = sSflCardB664;
    scrClearTextBox(0, 0, 0, 2);
    work[0x4a1f] = 0;
    work[0x4a1e] = 0;
    work[0x4a1c] = 2;
    *work |= 0x40;
    *work |= 0x80;
}

// FUN_00258af0
u32 sflCard00258af0(void)
{
    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    return *sSflCardB664 & 0x80;
}
/* W414 named f32 90.0f local initialized before the pointer expression stayed nd13/1076B (window 1088B); reverted. Residual is the documented call-argument evaluation-order floor; no software-double calls were introduced. */
/* W419 static-inline sflCardMeasure(angle, position) probe kept call-setup order unchanged: nd13/1076B (window1088, rate .012082), reverted. */
// FUN_00258B40


void FUN_00258b40(void)



{

  u32 *puVar1;

  u32 *puVar2;
  u32 *secondNode;

  u32 uVar3;

  int iSecond;
  int iLast;

  u32 iVar4;
  u32 iVar5;

  u32 iVar7;
  int swapValue;

  u32 *unaff_s3_lo;

  u32 *unaff_s2_lo;

  int iFirst;

  f32 uVar8;
  f32 uVar9;
  void *position;
  f32 scale;

  int aiStack_30 [6];

  int aiStack_50 [8];

  struct { f32 x; f32 y; } transformed;

  struct { f32 x; f32 y; } origin;



  u8 auStack_4 [4];

  

  K_ASSERT(sSflCardB664 != NULL, 0xbc);

  puVar1 = sSflCardB664;

  for (iFirst = 0; iFirst < (int)puVar1[0x49a1]; iFirst = iFirst + 1) {

    FUN_00258f80(*(u32 **)((u8 *)puVar1 + 0x12664 + 4 * (puVar1[0x49a1] - 1U - (u32)iFirst)));
  }


  iSecond = 0;
  uVar3 = puVar1[0x499f];
  while (iSecond < (int)uVar3) {
    aiStack_50[iSecond] = iSecond;
    iSecond++;
  }

  uVar3 = 0x400;
  uVar3 = uVar3 + (FUN_00488f30() & 0xf);
  for (iFirst = 0; iFirst < (int)uVar3; iFirst = iFirst + 1) {

    iVar4 = FUN_00488f30();

    iVar4 = iVar4 % (int)puVar1[0x499f];

    iVar5 = FUN_00488f30();

    iVar5 = iVar5 % (int)(puVar1[0x499f] - 1);

    if ((int)iVar5 < (int)iVar4) goto swap_indices;
    iVar7 = iVar5 + 1;
    goto indices_ready;
swap_indices:
    iVar7 = iVar4;
    iVar4 = iVar5;
indices_ready:

    swapValue = aiStack_50[iVar4];

    aiStack_50[iVar4] = aiStack_50[iVar7];

    aiStack_50[iVar7] = swapValue;

  }

  for (uVar3 = 0; (int)uVar3 < (int)puVar1[0x499f]; uVar3 = uVar3 + 1) {

    K_ASSERT(sSflCardB664 != NULL, 0xbc);

    for (puVar2 = (u32 *)sSflCardB664[0x4997];
        puVar2 != NULL;
        puVar2 = (u32 *)puVar2[0x3f1]) {
      unaff_s3_lo = puVar2;
      if (((*puVar2 & 2) == 0) && (puVar2[4] == uVar3)) {
        break;
      }
    }

    K_ASSERT(puVar2 != NULL, 0x47a);

    aiStack_30[uVar3] = (int)unaff_s3_lo;

  }

  for (iLast = 0; iLast < (int)puVar1[0x499f]; iLast = iLast + 1) {

    *(int *)(aiStack_30[iLast] + 0x10) = aiStack_50[iLast];

  }

  *puVar1 = *puVar1 & 0xffffffef;

  for (uVar3 = 0; (int)uVar3 < (int)puVar1[0x499f]; uVar3 = uVar3 + 1) {

    K_ASSERT(sSflCardB664 != NULL, 0xbc);

    for (secondNode = (u32 *)sSflCardB664[0x4997];
        secondNode != NULL;
        secondNode = (u32 *)secondNode[0x3f1]) {
      unaff_s2_lo = secondNode;
      if (((*secondNode & 2) == 0) && (secondNode[4] == uVar3)) {
        break;
      }
    }

    K_ASSERT(secondNode != NULL, 0x47a);

    FUN_00256fa0(unaff_s2_lo,aiStack_30,auStack_4);

    origin.x = FUN_0020c660(unaff_s2_lo[4],puVar1[0x499f]);

    origin.y = 184.0f;

    position = (void *)aiStack_30[0];
    scale = 90.0f;
    uVar8 = FUN_0020c500((void *)((u8 *)position + 0x18),scale);
    FUN_0020c400((void *)(aiStack_30[0] + 0x18),(const f32 *)&origin,uVar8,(f32 *)&transformed);

    transformed.y += 100.0f;

    FUN_00250480(unaff_s2_lo + 0x425);

    FUN_0024f9f0(unaff_s2_lo + 0x425,(const f32 *)&transformed);

    FUN_00250c70(unaff_s2_lo + 0x45a);

    FUN_0024f410(unaff_s2_lo + 0x40c);

    FUN_0024ff10(unaff_s2_lo + 0x476);

    FUN_0024f2c0(1.0f,unaff_s2_lo + 0x40c);

    FUN_00250ef0(1.0f,unaff_s2_lo + 0x476);

  }

  return;

}

// FUN_00258F80


void FUN_00258f80(u32 *param_1)



{

  u32 *iVar1;

  u32 *puVar2;
  u32 *puVar3;

  int iVar3;

  int aiStack_30 [8];

  u8 auStack_10 [12];

  int iStack_4;

  

  K_ASSERT(iGpffffb664 != 0, 0xbc);

  iVar1 = (u32 *)iGpffffb664;

  FUN_00259190(param_1,aiStack_30,&iStack_4);

  for (puVar2 = (u32 *)iVar1[0x4997]; puVar2 != (u32 *)0x0; puVar2 = (u32 *)puVar2[0x3f1])

  {

    if (((*puVar2 & 2) == 0) && ((int)puVar2[4] > (int)param_1[4])) {

      puVar2[4] = puVar2[4] + (iStack_4 - 1);

    }

  }

  for (iVar3 = 0; iVar3 < iStack_4; iVar3 = iVar3 + 1) {

    puVar2 = (u32 *)aiStack_30[iVar3];

    *puVar2 = *puVar2 & 0xfffffffd;

    puVar2[4] = puVar2[4] + param_1[4];

    FUN_0024f960(param_1 + 0x425,auStack_10);

    FUN_0024f9f0(puVar2 + 0x425,(const f32 *)auStack_10);

  }

  K_ASSERT(iGpffffb664 != 0, 0xbc);
  puVar3 = (u32 *)iGpffffb664;

  if (param_1[0x3f1] != 0) {

    *(u32 *)(param_1[0x3f1] + 0xfc0) = param_1[0x3f0];

  }

  if (param_1[0x3f0] != 0) {

    *(u32 *)(param_1[0x3f0] + 0xfc4) = param_1[0x3f1];

  }

  if ((u32 *)puVar3[0x4997] == param_1) {

    puVar3[0x4997] = param_1[0x3f1];

  }

  if ((u32 *)puVar3[0x4998] == param_1) {

    puVar3[0x4998] = param_1[0x3f0];

  }


  FUN_00253600(param_1);

  *param_1 = *param_1 & 0xfffffffb;

  iVar1[0x499f] = (iStack_4 - 1) + iVar1[0x499f];
  return;

}

/* W357 debt: bpTexUpdateNode at honest -O2 is 2860B vs 2656B window
 * (nd2145), 204B over. optimization_level 3 measures 2516B/2656
 * (nd1915) and preserves link layout; real repair needs retail frame
 * comparison, ordered helper call census, and the ABS_f32 stub sweep. */
// FUN_00259190
void sflCard00259190(u32 param_1, int param_2, int* param_3)
{
    u32* p;
    int count;

    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    count = 0;
    for (p = (u32*)sSflCardB664[0x4997]; p != NULL; p = (u32*)p[0x3f1]) {
        if ((~*p & 2) == 0 && p[0x3f2] == param_1) {
            *(u32*)(param_2 + p[4] * 4) = (u32)p;
            count++;
        }
    }
    *param_3 = count;
}
// FUN_00259250
void sflCard00259250(void)
{
    u32* work;

    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    work = sSflCardB664;
    work[0x4a1f] = 0;
    *work |= 0x40;
    work[0x4a1c] = 3;
    *work |= 0x100;
}

// FUN_002592c0
u32 sflCard002592c0(void)
{
    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    return *sSflCardB664 & 0x100;
}

/*
 * Retail offsets 0x9ec-0xbc4 count unowned roots, locate each by index, and redraw leaves.
 */
/* W310 measured: opt_loop_invariants on nd2267->2266, object 2908/3024; reset nd2267. */
// FUN_00259310
void sflCard00259310(void)
{
    u32* work;

    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    work = sSflCardB664;
    work[0x4a1f] = 0;
    *work |= 0x40;
    work[0x4a1c] = 4;
    *work |= 0x800;
}


// FUN_00259380
u32 sflCard00259380(void)
{
    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    return *sSflCardB664 & 0x800;
}

// FUN_002593D0


void FUN_002593d0(void)
{
  u32 *puVar1;
  u32 *card;
  int iVar2;

  K_ASSERT(sSflCardB664 != NULL, 0xbc);
  puVar1 = sSflCardB664;
  for (iVar2 = 0; iVar2 < 0x10; iVar2++) {
    card = puVar1 + iVar2 * 0x499 + 1;
    if ((~*card & 4) != 0 || (*card & 8) != 0) {
      continue;
    }
    switch (card[1]) {
      case 0:
        FUN_0021a760((u16)card[2]);
        break;
      case 1:
        FUN_0021a670(card[2],card[3]);
        break;
    }
  }
  *puVar1 &= 0xfffffbff;
}

// FUN_002594C0


void FUN_002594c0(void)
{
  SflCardVec stack;
  u32 *puVar1;
  u32 uVar2;
  void FUN_00250cf0(u32 *, void *, f32, f32, int);

  K_ASSERT(sSflCardB664 != NULL, 0xbc);
  puVar1 = sSflCardB664;
  stack = DAT_0068eac0;
  uVar2 = (u32)FUN_00488f30();
  puVar1[0x4a21] = uVar2 % puVar1[0x499f];
  FUN_00250cf0(puVar1 + 0x4a00, &stack, fGpffff8248, fGpffff83c0, 0x5a);
  FUN_0010a4e0_y2(1,2,6,2);
  puVar1[0x4a1f] = 0;
  *puVar1 |= 0x40;
  puVar1[0x4a1c] = 5;
  *puVar1 |= 0x1000;
}

// FUN_002595c0
u32 sflCard002595c0(void)
{
    K_ASSERT(sSflCardB664 != NULL, 0xbc);
    return *sSflCardB664 & 0x1000;
}
/*
 * The command-panel work area lives in the same GP slot used by bcm_panel.c.
 */












#pragma alias D_00960090_abs D_00960090
#pragma alias D_0096009C_abs D_0096009C












#pragma alias sflScriptInit FUN_00259610
#pragma alias sflScriptClearWork FUN_00259630
#pragma alias sflScriptStartQueuedCommands FUN_00259640
#pragma alias sflScriptConfigureCommandBuffer FUN_00259690
#pragma alias sflScriptIsRunning FUN_002596f0
#pragma alias sflScriptDispatchCommands FUN_00259740
#pragma alias sflScriptAppendCommand FUN_00259850
#pragma alias sflScriptQueueEndCommand FUN_00259970
#pragma alias sflScriptQueueSwapCommand FUN_002599C0
#pragma alias sflScriptQueueCloseCommand FUN_00259A60
#pragma alias sflScriptQueueWaitCommand FUN_00259b00
#pragma alias sflScriptQueueOpenCommand FUN_00259b60
#pragma alias sflScriptQueueWaitForActionsCommand FUN_00259bc0
#pragma alias sflScriptQueueStartActionsCommand FUN_00259c10
#pragma alias sflScriptQueueSetCardValueCommand FUN_00259c60
#pragma alias sflScriptQueueShuffleCommand FUN_00259cc0
#pragma alias sflScriptHandleEndCommand FUN_00259D10
#pragma alias sflScriptHandleSwapCommand FUN_00259D80
#pragma alias sflScriptHandleWaitForActionsCommand FUN_00259e00
#pragma alias sflScriptHandleStartActionsCommand FUN_00259E60
#pragma alias sflScriptHandleSetCardValueCommand FUN_00259EA0
#pragma alias sflScriptHandleShuffleCommand FUN_00259ED0
#pragma alias sflScriptHandleCloseCommand FUN_00259F40
#pragma alias sflScriptHandleOpenCommand FUN_00259FC0
#pragma alias sflScriptHandleWaitCommand FUN_0025A030
#pragma alias K_Assert FUN_0019d3f0
#pragma alias copyMemory FUN_00521250
#pragma alias debugPrintf FUN_005225a8_y2
#pragma alias bpTexQueueNodePair FUN_002551d0
#pragma alias bpTexQueueNodeRange FUN_00255570
#pragma alias bpTexRemoveNodeAt FUN_00255810
#pragma alias bpTexShuffleNodes FUN_00255b20
#pragma alias bpTexIsShuffleActive FUN_00255f30
#pragma alias bpTexHasPendingNode FUN_00256430
#pragma alias bpTexApplyActions FUN_00257130
#pragma alias sflCardSetScriptValue FUN_002584e0
#pragma alias gSflScriptCommandTableWords D_0068EAD0
#pragma alias gSflScriptCommandParamSizes D_0068EAD4
#pragma alias sSflScriptWorkAddress iGpffffb668
#pragma alias sSflScriptShuffleStarted iGpffffb66c
#pragma alias sSflScriptWorkWord uGpffffb668
#pragma alias sSflScriptStartActionsTrace D_0068EB60
#pragma alias sSflScriptSourceFile D_0068eb18
#pragma alias sSflScriptEndTrace D_0068eb28
#pragma alias sSflScriptOpenTrace D_0068eb98
#pragma alias sSflScriptSwapTrace D_0068eb40
#pragma alias sSflScriptCloseTrace D_0068eb80
#pragma alias sSflScriptWaitTrace D_0068eba8


/* Recovered battle-misc support prelude */


















// FUN_00259610
void sflScriptInit(SflScriptWork* work)
{
    work->flags = 0;
    work->waitCounter = 0;
    sSflScript = work;
}

/* Recovered battle-misc harvest: 0x00259630-0x0025A030 */
// FUN_00259630


void sflScriptClearWork(void)



{

  sSflScriptWorkWord = 0;

  return;

}












/* Recovered battle-misc harvest: 0x00259850-0x00259850 */
