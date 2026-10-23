#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "Main/OpEd/op_res.h"

extern void func_0021eae0(void* destination, const f32* layout);
extern void func_0021eac0(void* destination, f32 value);
extern void func_0021d8e0(void* destination, const f32* layout);
extern void func_0021d890(void* destination, const f32* layout);
extern void func_0021d950(void* destination, const u8* color);
extern void func_0021d3b0(void* destination, void* source);
extern void* func_0021cca0(void* resource, u32 index);
extern u32 func_0021cce0(void* frame);
extern void func_004d7f60(s32 state, u32 value);
typedef void (*OpMenuSetState)(u32 state, u32 value);
typedef void (*OpMenuDraw)(void* quad, u32 layer, u32 group, u32 pass, u32 blend);
typedef void (*OpMenuDrawWords)(u32* quad, u32 layer, u32 group, u32 pass, u32 blend);
extern u32 D_00960090[];
typedef void (*OpMenuSetFrame)(u32 state, u32 value);
#pragma alias opMenuStatePtr D_00960090
extern u8 opMenuStatePtr[];
#pragma alias opMenuDrawPtr D_0096009C
extern u8 opMenuDrawPtr[];
extern u32 D_0096009C[];
extern f32 func_0052e878(f32 value);
extern f32 func_0052e6d8(f32 value);
extern void* func_00198590(void);
#pragma alias opResGetTitleRasterU32 opResGetTitleRaster
extern u32 opResGetTitleRasterU32(u32 id);
extern f32 fGpffff8248;
extern f32 fGpffff80c0;
extern f32 fGpffff82fc;
extern f32 fGpffff819c;
extern f32 fGpffff8478;
extern f32 fGpffff847c;
extern f32 fGpffff8480;
extern f32 fGpffff809c;
extern f32 fGpffff83a4;

void opMenu0026da90(s32 param_1);
void opMenu0026db30(s32 param_1);
void opMenu0026dc20(void);
void opMenu0026dc70(void);
static u32* sOpMenu; // DAT_007ce3b4 / puGpffffb6c4
static inline u8* opMenuData(u32 offset)
{
    return (u8*)sOpMenu + offset;
}

static inline u32 opMenuGet(u32 offset)
{
    return *(u32*)opMenuData(offset);
}
static inline u32 opMenuGetW(u32* work, u32 offset)
{
    return *(u32*)((u8*)work + offset);
}

static inline s32 opMenuGetSW(u32* work, u32 offset)
{
    return *(s32*)((u8*)work + offset);
}

static inline void opMenuPutW(u32* work, u32 offset, u32 value)
{
    *(u32*)((u8*)work + offset) = value;
}

static inline s32 opMenuGetS(u32 offset)
{
    return *(s32*)opMenuData(offset);
}

static inline void opMenuPut(u32 offset, u32 value)
{
    *(u32*)opMenuData(offset) = value;
}

static inline void opMenuColor(void* quad, f32 alpha, u8* color)
{
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = (u8)alpha;
    func_0021d950(quad, color);
}

static inline f32 opMenuClamp01(s32 value, s32 begin, s32 end)
{
    if (value <= begin)
        return 0.0f;
    if (value >= end)
        return 1.0f;
    return (f32)(value - begin) / (f32)(end - begin);
}

static inline void opMenuSetRect(f32* rect, u32 offset, f32 x, f32 y, f32 width, f32 height)
{
    rect[0] = x;
    rect[1] = y;
    rect[2] = width;
    rect[3] = height;
    func_0021d8e0(opMenuData(offset), rect);
}

static void opMenuSetPoly(f32* poly, u32 offset, f32 x, f32 y, f32 width, f32 height,
                          f32 angle, f32 scaleX, f32 scaleY)
{
    f32 centerX = width * 0.5f;
    f32 centerY = height * 0.5f;
    s32 i;

    poly[0] = -centerX;
    poly[1] = -centerY;
    poly[2] = centerX;
    poly[3] = -centerY;
    poly[4] = centerX;
    poly[5] = centerY;
    poly[6] = -centerX;
    poly[7] = centerY;
    for (i = 0; i < 4; i++)
    {
        f32 sineX = func_0052e878(angle);
        f32 py = poly[i * 2 + 1] * scaleY;
        f32 cosineX = func_0052e6d8(angle);
        f32 px = poly[i * 2] * scaleX;
        f32 outX = px * cosineX - py * sineX + x + centerX;
        f32 sineY = func_0052e878(angle);
        f32 px2 = poly[i * 2] * scaleX;
        f32 cosineY = func_0052e6d8(angle);
        f32 outY = px2 * sineY + py * cosineY + y + centerY;
        poly[i * 2] = outX;
        poly[i * 2 + 1] = outY;
    }
    func_0021d890(opMenuData(offset), poly);
}

static inline void opMenuSetIcon(u32 offset, void* frame, f32 x, f32 y)
{
    f32* destination;
    f32 width;
    f32 height;

    destination = (f32*)opMenuData(offset);
    width = (f32)*(s32*)((u8*)frame + 0x0c);
    height = (f32)*(s32*)((u8*)frame + 0x10);
    destination[0x00 / 4] = x;
    destination[0x04 / 4] = y;
    destination[0x40 / 4] = x + width;
    destination[0x44 / 4] = y;
    destination[0x80 / 4] = x + width;
    destination[0x84 / 4] = y + height;
    destination[0xc0 / 4] = x;
    destination[0xc4 / 4] = y + height;
}


// FUN_0026a230
void opMenu0026a230(u32* param_1)
{
    K_ASSERT(sOpMenu == NULL, 0x8e);
    *param_1 = 0;
    sOpMenu = param_1;
}

// FUN_0026a280
void opMenu0026a280(void)
{
    K_ASSERT(sOpMenu != NULL, 0x87);
    sOpMenu = NULL;
}
// FUN_0026A2C0
asm void opMenu0026a2c0(void)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0080
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
  .word 0x8f82b6c4
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ed20
  .word 0x24050087
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b6c4
  .word 0x0000202d
  .word 0x0c099b14
  .word 0x00000000
  .word 0x0040a02d
  .word 0x8e230000
  .word 0x00601827
  .word 0x30630001
  .word 0x146008e7
  .word 0x00000000
  .word 0x8e220910
  .word 0x24430001
  .word 0xae230910
  .word 0x24020514
  .word 0x0062001a
  .word 0x00001010
  .word 0xae220910
  .word 0x8e220914
  .word 0x24430001
  .word 0xae230914
  .word 0x240201f4
  .word 0x0062001a
  .word 0x00001010
  .word 0xae220914
  .word 0x8e220918
  .word 0x24420001
  .word 0xae220918
  .word 0x24040096
  .word 0x0044001a
  .word 0x00001010
  .word 0xae220918
  .word 0x8e220ae4
  .word 0x24420001
  .word 0xae220ae4
  .word 0x0044001a
  .word 0x00001010
  .word 0xae220ae4
  .word 0x8e220ae0
  .word 0x24430001
  .word 0xae230ae0
  .word 0x24020050
  .word 0x0062001a
  .word 0x00001010
  .word 0xae220ae0
  .word 0x8e220ae8
  .word 0x24420001
  .word 0xae220ae8
  .word 0x0044001a
  .word 0x00001010
  .word 0xae220ae8
  .word 0x8e220af0
  .word 0x24420001
  .word 0xae220af0
  .word 0x0044001a
  .word 0x00001010
  .word 0xae220af0
  .word 0x8e220aec
  .word 0x24420001
  .word 0xae220aec
  .word 0x0044001a
  .word 0x00001010
  .word 0xae220aec
  .word 0x8e220af4
  .word 0x28410028
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae220af4
  .word 0x10000005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae220000
  .word 0x8e230000
  .word 0x30620004
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e22091c
  .word 0x28410050
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae22091c
  .word 0x10000004
  .word 0x00000000
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae220000
  .word 0x8e220000
  .word 0x30420020
  .word 0x10400027
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000018
  .word 0x00000000
  .word 0x000410c0
  .word 0x00441823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021100
  .word 0x02221021
  .word 0x24430b00
  .word 0x8c420b00
  .word 0x28410008
  .word 0x10200003
  .word 0x00000000
  .word 0x24420001
  .word 0xac620000
  .word 0x8e220af8
  .word 0x10820007
  .word 0x00000000
  .word 0x8c620004
  .word 0x28410010
  .word 0x10200003
  .word 0x00000000
  .word 0x24420001
  .word 0xac620004
  .word 0x24840001
  .word 0x28820004
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x26231740
  .word 0x8e221740
  .word 0x28410008
  .word 0x10200022
  .word 0x00000000
  .word 0x24420001
  .word 0xac620000
  .word 0x1000001e
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000018
  .word 0x00000000
  .word 0x000410c0
  .word 0x00441823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021100
  .word 0x02221021
  .word 0x24431a60
  .word 0x8c421a60
  .word 0x28410008
  .word 0x10200003
  .word 0x00000000
  .word 0x24420001
  .word 0xac620000
  .word 0x8e221a50
  .word 0x10820007
  .word 0x00000000
  .word 0x8c620004
  .word 0x28410010
  .word 0x10200003
  .word 0x00000000
  .word 0x24420001
  .word 0xac620004
  .word 0x24840001
  .word 0x28820002
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x8e22091c
  .word 0x04410004
  .word 0x00000000
  .word 0x4480a000
  .word 0x10000012
  .word 0x00000000
  .word 0x28410046
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c02428c
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0xafa00090
  .word 0xafa00094
  .word 0x3c024420
  .word 0xafa20098
  .word 0x3c0243e0
  .word 0xafa2009c
  .word 0x26240010
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
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
  .word 0xa3a300bf
  .word 0x26240010
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e22091c
  .word 0x04410004
  .word 0x00000000
  .word 0x4480b000
  .word 0x10000010
  .word 0x00000000
  .word 0x0441000c
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46000d83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0xc6200910
  .word 0x46800060
  .word 0x24020514
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x2402044c
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010081
  .word 0x3c02c3a0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x46021d5d
  .word 0xc6200914
  .word 0x46800060
  .word 0x3c0243fa
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
  .word 0x3c023e80
  .word 0x44821800
  .word 0xc7828064
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x46001d1c
  .word 0xe7b50090
  .word 0xafa00094
  .word 0x3c0244a0
  .word 0xafa20098
  .word 0x3c0243e0
  .word 0xafa2009c
  .word 0x26240110
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6200910
  .word 0x46800060
  .word 0x24020514
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x2402044c
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010081
  .word 0x3c02c3a0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181d
  .word 0x46001800
  .word 0xe7a00090
  .word 0xafa00094
  .word 0x3c0244a0
  .word 0xafa20098
  .word 0x3c0243e0
  .word 0xafa2009c
  .word 0x26240210
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46160002
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
  .word 0xa3a300bf
  .word 0x26240110
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26240210
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0xc6200ae8
  .word 0x46800060
  .word 0x3c024316
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
  .word 0x3c023fc0
  .word 0x44820800
  .word 0x00000000
  .word 0x46000842
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010502
  .word 0xafa00090
  .word 0xafa00094
  .word 0x3c024420
  .word 0xafa20098
  .word 0xafa0009c
  .word 0xafa200a0
  .word 0x3c0243e0
  .word 0xafa200a4
  .word 0xafa000a8
  .word 0xafa200ac
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
  .word 0xc4400000
  .word 0x46020001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0xc78180c0
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
  .word 0xc4400000
  .word 0x46010002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000001e
  .word 0x00000000
  .word 0x001210c0
  .word 0x005d1021
  .word 0x24500090
  .word 0x26150004
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000586
  .word 0xc6b50000
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6010000
  .word 0x4600081a
  .word 0x4616addd
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000586
  .word 0xc6150000
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6a10000
  .word 0x4600081a
  .word 0x4616a81c
  .word 0xe6170000
  .word 0xe6a00000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffe1
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26240310
  .word 0x27a50090
  .word 0x0c087624
  .word 0x00000000
  .word 0xc6200af0
  .word 0x46800060
  .word 0x3c024316
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0xc78082fc
  .word 0x46010040
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820800
  .word 0x00000000
  .word 0x46000842
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010502
  .word 0x8e220aec
  .word 0x28410041
  .word 0x10200004
  .word 0x00000000
  .word 0xc78380c0
  .word 0x10000019
  .word 0x00000000
  .word 0x2841005f
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffbf
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0xc78082fc
  .word 0x46010042
  .word 0xc78080c0
  .word 0x460100c0
  .word 0x10000008
  .word 0x00000000
  .word 0x28410073
  .word 0x10200004
  .word 0x00000000
  .word 0xc78380c0
  .word 0x10000002
  .word 0x00000000
  .word 0xc78380c0
  .word 0xafa00090
  .word 0xafa00094
  .word 0x3c024420
  .word 0xafa20098
  .word 0xafa0009c
  .word 0xafa200a0
  .word 0x3c0243e0
  .word 0xafa200a4
  .word 0xafa000a8
  .word 0xafa200ac
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
  .word 0xc4400000
  .word 0x46020001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
  .word 0xc4400000
  .word 0x46030002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46030002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000001e
  .word 0x00000000
  .word 0x001210c0
  .word 0x005d1021
  .word 0x24500090
  .word 0x26150004
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000586
  .word 0xc6b50000
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6010000
  .word 0x4600081a
  .word 0x4616addd
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000586
  .word 0xc6150000
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6a10000
  .word 0x4600081a
  .word 0x4616a81c
  .word 0xe6170000
  .word 0xe6a00000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffe1
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26240410
  .word 0x27a50090
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0xa3a200bf
  .word 0x26240310
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0xa3a200bf
  .word 0x26240410
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e22091c
  .word 0x04410004
  .word 0x00000000
  .word 0x4480b000
  .word 0x10000010
  .word 0x00000000
  .word 0x0441000c
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46000d83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0xc6200ae4
  .word 0x46800060
  .word 0x3c024316
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0xc78082fc
  .word 0x46010040
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c0241c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46000842
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x3c024000
  .word 0x44821800
  .word 0x00000000
  .word 0x46001802
  .word 0xc7828248
  .word 0x46001542
  .word 0xc6200ae0
  .word 0x46800060
  .word 0x3c0242a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46001802
  .word 0x460015c2
  .word 0x4600bb06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c023e80
  .word 0x44821800
  .word 0xc782819c
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x46001d1c
  .word 0x4600bb06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c023e80
  .word 0x44821800
  .word 0xc782819c
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x460018dc
  .word 0xafa00090
  .word 0xafa00094
  .word 0x3c024420
  .word 0xafa20098
  .word 0xafa0009c
  .word 0xafa200a0
  .word 0x3c0243e0
  .word 0xafa200a4
  .word 0xafa000a8
  .word 0xafa200ac
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
  .word 0xc4400000
  .word 0x46020001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
  .word 0xc4400000
  .word 0x46140002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46030002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000001e
  .word 0x00000000
  .word 0x001210c0
  .word 0x005d1021
  .word 0x24500090
  .word 0x26150004
  .word 0x4600ab06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460005c6
  .word 0xc6b40000
  .word 0x4600ab06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6010000
  .word 0x4600081a
  .word 0x4617a61d
  .word 0x4600ab06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460005c6
  .word 0xc6140000
  .word 0x4600ab06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6a10000
  .word 0x4600081a
  .word 0x4617a01c
  .word 0xe6180000
  .word 0xe6a00000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffe1
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26240510
  .word 0x27a50090
  .word 0x0c087624
  .word 0x00000000
  .word 0x26240610
  .word 0x27a50090
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46160042
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
  .word 0xa3a300bf
  .word 0x26240510
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e220aec
  .word 0x28410041
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x1000002a
  .word 0x00000000
  .word 0x2841005f
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffbf
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000019
  .word 0x00000000
  .word 0x28410073
  .word 0x10200004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410091
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ff8d
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0x3c024319
  .word 0x44820000
  .word 0x00000000
  .word 0x46160002
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
  .word 0xa3a300bf
  .word 0x26240610
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e22091c
  .word 0x28410014
  .word 0x10200004
  .word 0x00000000
  .word 0x4480a000
  .word 0x10000013
  .word 0x00000000
  .word 0x28410032
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ffec
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0xafa00090
  .word 0xafa00094
  .word 0x3c024420
  .word 0xafa20098
  .word 0x3c0243e0
  .word 0xafa2009c
  .word 0x26240710
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0x3c02434c
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
  .word 0xa3a300bf
  .word 0x26240710
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e22091c
  .word 0x2841000a
  .word 0x10200004
  .word 0x00000000
  .word 0x4480a000
  .word 0x10000013
  .word 0x00000000
  .word 0x28410050
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442fff6
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c02428c
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0xafa00090
  .word 0xafa00094
  .word 0x3c024420
  .word 0xafa20098
  .word 0x3c0243e0
  .word 0xafa2009c
  .word 0x26240810
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
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
  .word 0xa3a300bf
  .word 0x26240810
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e22091c
  .word 0x28410014
  .word 0x10200007
  .word 0x00000000
  .word 0x240202ee
  .word 0x44820000
  .word 0x00000000
  .word 0x46800520
  .word 0x1000001d
  .word 0x00000000
  .word 0x28410028
  .word 0x10200019
  .word 0x00000000
  .word 0x2442ffec
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4601001a
  .word 0x4601089d
  .word 0x240202ee
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000d02
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0x0280202d
  .word 0x24050015
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b40090
  .word 0x3c0242be
  .word 0xafa20094
  .word 0xc7808478
  .word 0xe7a00098
  .word 0xc780847c
  .word 0xe7a0009c
  .word 0x26240920
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0xa3a200bf
  .word 0x26240920
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420020
  .word 0x104001f7
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000019b
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021100
  .word 0x02221021
  .word 0x24500b00
  .word 0x00121080
  .word 0x00522821
  .word 0x24a40014
  .word 0x8e23091c
  .word 0x0064082a
  .word 0x10200005
  .word 0x00000000
  .word 0x3c02c248
  .word 0x4482a000
  .word 0x1000001c
  .word 0x00000000
  .word 0x24a2001e
  .word 0x0062082a
  .word 0x10200017
  .word 0x00000000
  .word 0x00641023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4601001a
  .word 0x4601089d
  .word 0x3c02c248
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000d02
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0x0064082a
  .word 0x10200004
  .word 0x00000000
  .word 0x4480a800
  .word 0x10000014
  .word 0x00000000
  .word 0x24a2001e
  .word 0x0062082a
  .word 0x1020000e
  .word 0x00000000
  .word 0x00641023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x24020003
  .word 0x12420014
  .word 0x00000000
  .word 0x24030002
  .word 0x1243000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12420008
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000008
  .word 0x00000000
  .word 0x0060982d
  .word 0x10000005
  .word 0x00000000
  .word 0x24130004
  .word 0x10000002
  .word 0x00000000
  .word 0x24130019
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0341a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46140500
  .word 0xe7b40090
  .word 0x24030003
  .word 0x1243001a
  .word 0x00000000
  .word 0x24030002
  .word 0x12430013
  .word 0x00000000
  .word 0x24030001
  .word 0x12430009
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x3c034395
  .word 0xafa30094
  .word 0x10000011
  .word 0x00000000
  .word 0x24030143
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0x1000000a
  .word 0x00000000
  .word 0x3c0343ad
  .word 0xafa30094
  .word 0x10000006
  .word 0x00000000
  .word 0x24030173
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
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
  .word 0xc6000004
  .word 0x46800060
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
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
  .word 0xa3a300bf
  .word 0x26040010
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x24030003
  .word 0x12430014
  .word 0x00000000
  .word 0x24020002
  .word 0x1242000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12420008
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0040982d
  .word 0x10000008
  .word 0x00000000
  .word 0x0060982d
  .word 0x10000005
  .word 0x00000000
  .word 0x24130005
  .word 0x10000002
  .word 0x00000000
  .word 0x2413001a
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b40090
  .word 0x24030003
  .word 0x1243001a
  .word 0x00000000
  .word 0x24030002
  .word 0x12430013
  .word 0x00000000
  .word 0x24030001
  .word 0x12430009
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x3c034395
  .word 0xafa30094
  .word 0x10000011
  .word 0x00000000
  .word 0x24030143
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0x1000000a
  .word 0x00000000
  .word 0x3c0343ad
  .word 0xafa30094
  .word 0x10000006
  .word 0x00000000
  .word 0x24030173
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26040110
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0x3c0242ff
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
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
  .word 0xa3a300bf
  .word 0x26040110
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x24020003
  .word 0x12420014
  .word 0x00000000
  .word 0x24020002
  .word 0x1242000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12420008
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x24130006
  .word 0x10000008
  .word 0x00000000
  .word 0x24130007
  .word 0x10000005
  .word 0x00000000
  .word 0x24130008
  .word 0x10000002
  .word 0x00000000
  .word 0x2413001b
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b40090
  .word 0x24030003
  .word 0x1243001a
  .word 0x00000000
  .word 0x24030002
  .word 0x12430013
  .word 0x00000000
  .word 0x24030001
  .word 0x12430009
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x3c034395
  .word 0xafa30094
  .word 0x10000011
  .word 0x00000000
  .word 0x24030143
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0x1000000a
  .word 0x00000000
  .word 0x3c0343ad
  .word 0xafa30094
  .word 0x10000006
  .word 0x00000000
  .word 0x24030173
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26040210
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6000004
  .word 0x46800060
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
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
  .word 0xa3a300bf
  .word 0x26040210
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440fe64
  .word 0x00000000
  .word 0x26301740
  .word 0x0280202d
  .word 0x24050022
  .word 0x0c087328
  .word 0x00000000
  .word 0x24030143
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00090
  .word 0x3c0342e6
  .word 0xafa30094
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
  .word 0x0280202d
  .word 0x24050023
  .word 0x0c087328
  .word 0x00000000
  .word 0x24030143
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00090
  .word 0x3c0342e6
  .word 0xafa30094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26040110
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
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
  .word 0xa3a300bf
  .word 0x26040010
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26040110
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x100000f6
  .word 0x00000000
  .word 0x0000902d
  .word 0x100000f0
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021100
  .word 0x02221021
  .word 0x24501a60
  .word 0x00121080
  .word 0x00522821
  .word 0x24a40014
  .word 0x8e23091c
  .word 0x0064082a
  .word 0x10200005
  .word 0x00000000
  .word 0x3c02c248
  .word 0x4482a800
  .word 0x1000001c
  .word 0x00000000
  .word 0x24a2001e
  .word 0x0062082a
  .word 0x10200017
  .word 0x00000000
  .word 0x00641023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4601001a
  .word 0x4601089d
  .word 0x3c02c248
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000d42
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a800
  .word 0x0064082a
  .word 0x10200004
  .word 0x00000000
  .word 0x4480a000
  .word 0x10000014
  .word 0x00000000
  .word 0x24a2001e
  .word 0x0062082a
  .word 0x1020000e
  .word 0x00000000
  .word 0x00641023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x24020001
  .word 0x12420008
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x2413001c
  .word 0x10000002
  .word 0x00000000
  .word 0x2413001e
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0341d0
  .word 0x44830000
  .word 0x00000000
  .word 0x46150540
  .word 0xe7b50090
  .word 0x24030001
  .word 0x1243000c
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x24030159
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0x10000003
  .word 0x00000000
  .word 0x3c0343bf
  .word 0xafa30094
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
  .word 0xc6000004
  .word 0x46800060
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
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
  .word 0xa3a300bf
  .word 0x26040010
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x24020001
  .word 0x12420008
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x2413001d
  .word 0x10000002
  .word 0x00000000
  .word 0x2413001f
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b50090
  .word 0x24030001
  .word 0x1243000c
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x24030159
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0x10000003
  .word 0x00000000
  .word 0x3c0343bf
  .word 0xafa30094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26040110
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6000004
  .word 0x46800060
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x240200ff
  .word 0xa3a200bc
  .word 0xa3a200bd
  .word 0xa3a200be
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
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
  .word 0xa3a300bf
  .word 0x26040110
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420002
  .word 0x1440ff0f
  .word 0x00000000
  .word 0x8e22091c
  .word 0x04410004
  .word 0x00000000
  .word 0x4480a800
  .word 0x10000010
  .word 0x00000000
  .word 0x0441000c
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0xafa00090
  .word 0x3c02c2b0
  .word 0xafa20094
  .word 0x2402043e
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00098
  .word 0x3c0243e0
  .word 0xafa2009c
  .word 0xafa000a0
  .word 0xafa200a4
  .word 0xc6200918
  .word 0x46800060
  .word 0x3c024316
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010582
  .word 0x4600b306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xc78383a4
  .word 0xc782809c
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x46001d1c
  .word 0x4600b306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xc78383a4
  .word 0xc781809c
  .word 0x44801000
  .word 0x00000000
  .word 0x46011018
  .word 0x460018dc
  .word 0x0000202d
  .word 0x3c0343e0
  .word 0x44830800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000418c0
  .word 0x007d1821
  .word 0x24630090
  .word 0xc4600000
  .word 0x46020001
  .word 0xe4600000
  .word 0xc4600004
  .word 0x46010001
  .word 0xe4600004
  .word 0x24840001
  .word 0x28830003
  .word 0x1460fff4
  .word 0x00000000
  .word 0x0000202d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000418c0
  .word 0x007d1821
  .word 0x24630090
  .word 0xc4600000
  .word 0x46140002
  .word 0xe4600000
  .word 0xc4600004
  .word 0x46030002
  .word 0xe4600004
  .word 0x24840001
  .word 0x28830003
  .word 0x1460fff4
  .word 0x00000000
  .word 0x0000202d
  .word 0x44801000
  .word 0x3c0343e0
  .word 0x44830800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000418c0
  .word 0x007d1821
  .word 0x24630090
  .word 0xc4600000
  .word 0x46020000
  .word 0xe4600000
  .word 0xc4600004
  .word 0x46010000
  .word 0xe4600004
  .word 0x24840001
  .word 0x28830003
  .word 0x1460fff4
  .word 0x00000000
  .word 0x26230a20
  .word 0xc7a00090
  .word 0xe6200a20
  .word 0xc7a00094
  .word 0xe6200a24
  .word 0xc7a00098
  .word 0xe6200a60
  .word 0xc7a0009c
  .word 0xe6200a64
  .word 0xc7a000a0
  .word 0xe6200aa0
  .word 0xc7a000a4
  .word 0xe6200aa4
  .word 0x2404000a
  .word 0xa3a400bc
  .word 0x24040011
  .word 0xa3a400bd
  .word 0x24040030
  .word 0xa3a400be
  .word 0xa3a000bf
  .word 0x93a400bc
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600020
  .word 0x93a400bd
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600024
  .word 0x93a400be
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600028
  .word 0x93a400bf
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe460002c
  .word 0xa3a000bc
  .word 0x24040007
  .word 0xa3a400bd
  .word 0x24040026
  .word 0xa3a400be
  .word 0xa3a000bf
  .word 0x93a400bc
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600060
  .word 0x93a400bd
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600064
  .word 0x93a400be
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600068
  .word 0x93a400bf
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe460006c
  .word 0xa3a000bc
  .word 0x24040007
  .word 0xa3a400bd
  .word 0x24040026
  .word 0xa3a400be
  .word 0xc7808480
  .word 0x46150042
  .word 0x3c044f00
  .word 0x44840000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44050000
  .word 0x00000000
  .word 0x30a500ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44050000
  .word 0x3c048000
  .word 0x00a42825
  .word 0x30a500ff
  .word 0xa3a500bf
  .word 0x93a400bc
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe46000a0
  .word 0x93a400bd
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe46000a4
  .word 0x93a400be
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe46000a8
  .word 0x93a400bf
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe46000ac
  .word 0xdfbf0080
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
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
}

// FUN_0026C710
void opMenu0026c710(void)
{
    u32* work;
    OpMenuSetState* setState;
    OpMenuDrawWords* draw;

    K_ASSERT(sOpMenu != NULL, 0x87);
    work = sOpMenu;
    opResGetTitleSprite(0);
    if ((~work[0] & 1) != 0)
        return;
    setState = (OpMenuSetState*)D_00960090;
    (*setState)(8, 0);
    (*setState)(6, 0);
    (*setState)(9, 2);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x44);
    (*setState)(1, opResGetTitleRasterU32(1));
    draw = (OpMenuDrawWords*)D_0096009C;
    (*draw)(work + 4, 4, 0, 1, 2);
    (*draw)(work + 4, 4, 0, 2, 3);
    func_004d7f60(3, 0x71801);
    func_004d7f60(2, 0x48);
    (*setState)(1, opResGetTitleRasterU32(0));
    (*draw)(work + 0x44, 4, 0, 1, 2);
    (*draw)(work + 0x44, 4, 0, 2, 3);
    (*draw)(work + 0x84, 4, 0, 1, 2);
    (*draw)(work + 0x84, 4, 0, 2, 3);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x6a);
    (*setState)(1, opResGetTitleRasterU32(3));
    (*draw)(work + 0x144, 4, 0, 1, 2);
    (*draw)(work + 0x144, 4, 0, 2, 3);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x58);
    (*setState)(1, opResGetTitleRasterU32(4));
    (*draw)(work + 0xc4, 4, 0, 1, 2);
    (*draw)(work + 0xc4, 4, 0, 2, 3);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x6a);
    (*setState)(1, opResGetTitleRasterU32(3));
    (*draw)(work + 0x184, 4, 0, 1, 2);
    (*draw)(work + 0x184, 4, 0, 2, 3);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x58);
    (*setState)(1, opResGetTitleRasterU32(4));
    (*draw)(work + 0x104, 4, 0, 1, 2);
    (*draw)(work + 0x104, 4, 0, 2, 3);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x44);
    (*setState)(1, opResGetTitleRasterU32(2));
    (*draw)(work + 0x1c4, 4, 0, 1, 2);
    (*draw)(work + 0x1c4, 4, 0, 2, 3);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x44);
    (*setState)(1, 0);
    (*draw)(work + 0x288, 3, 0, 1, 2);
    func_004d7f60(3, 0x71801);
    func_004d7f60(2, 0x48);
    (*setState)(1, opResGetTitleRasterU32(5));
    (*draw)(work + 0x204, 4, 0, 1, 2);
    (*draw)(work + 0x204, 4, 0, 2, 3);
}

// FUN_0026CC90
void opMenu0026cc90(void)
{
    u32* work;
    void* atlas;
    OpMenuSetFrame* setState;
    OpMenuDraw* draw;
    u32 frame;
    s32 i;
    u32 id;

    K_ASSERT(sOpMenu != NULL, 0x87);
    work = sOpMenu;
    atlas = opResGetTitleSprite(0);
    if ((~work[0] & 1) != 0)
        return;

    setState = (OpMenuSetFrame*)D_00960090;
    (*setState)(8, 0);
    (*setState)(6, 0);
    (*setState)(9, 2);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x44);
    frame = func_0021cce0(func_0021cca0(atlas, 0x15));
    (*setState)(1, frame);
    draw = (OpMenuDraw*)D_0096009C;
    (*draw)(work + 0x920 / 4, 4, 0, 1, 2);
    (*draw)(work + 0x920 / 4, 4, 0, 2, 3);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x44);

    if ((work[0] & 0x20) != 0)
    {
        for (i = 0; i < 4; i++)
        {
            u8* item = (u8*)work + 0xb00 + i * 0x310;
            switch (i)
            {
                case 0: id = 0; break;
                case 1: id = 2; break;
                case 2: id = 4; break;
                case 3: id = 0x19; break;
            }
            frame = func_0021cce0(func_0021cca0(atlas, id));
            (*setState)(1, frame);
            draw = (OpMenuDraw*)D_0096009C;
            (*draw)(item + 0x10, 4, 0, 1, 2);
            (*draw)(item + 0x10, 4, 0, 2, 3);
            switch (i)
            {
                case 0: id = 6; break;
                case 1: id = 7; break;
                case 2: id = 8; break;
                case 3: id = 0x1b; break;
            }
            frame = func_0021cce0(func_0021cca0(atlas, id));
            (*setState)(1, frame);
            draw = (OpMenuDraw*)D_0096009C;
            (*draw)(item + 0x210, 4, 0, 1, 2);
            (*draw)(item + 0x210, 4, 0, 2, 3);
        }
        func_004d7f60(3, 0x71801);
        func_004d7f60(2, 0x48);
        for (i = 0; i < 4; i++)
        {
            u8* item = (u8*)work + 0xb00 + i * 0x310;
            switch (i)
            {
                case 0: id = 1; break;
                case 1: id = 3; break;
                case 2: id = 5; break;
                case 3: id = 0x1a; break;
            }
            frame = func_0021cce0(func_0021cca0(atlas, id));
            (*setState)(1, frame);
            draw = (OpMenuDraw*)D_0096009C;
            (*draw)(item + 0x110, 4, 0, 1, 2);
            (*draw)(item + 0x110, 4, 0, 2, 3);
        }
        func_004d7f60(3, 0x717fb);
        func_004d7f60(2, 0x44);
        {
            u8* item = (u8*)work + 0x1740;
            id = work[0x1a50 / 4] + 0x22;
            frame = func_0021cce0(func_0021cca0(atlas, id));
            (*setState)(1, frame);
            if (work[0x1a50 / 4] == 0)
            {
                draw = (OpMenuDraw*)D_0096009C;
                (*draw)(item + 0x10, 4, 0, 1, 2);
                (*draw)(item + 0x10, 4, 0, 2, 3);
            }
            else
            {
                draw = (OpMenuDraw*)D_0096009C;
                (*draw)(item + 0x110, 4, 0, 1, 2);
                (*draw)(item + 0x110, 4, 0, 2, 3);
            }
        }
    }
    else
    {
        for (i = 0; i < 2; i++)
        {
            u8* item = (u8*)work + 0x1a60 + i * 0x310;
            switch (i)
            {
                case 0: id = 0x1c; break;
                case 1: id = 0x1e; break;
            }
            frame = func_0021cce0(func_0021cca0(atlas, id));
            (*setState)(1, frame);
            draw = (OpMenuDraw*)D_0096009C;
            (*draw)(item + 0x10, 4, 0, 1, 2);
            (*draw)(item + 0x10, 4, 0, 2, 3);
        }
        func_004d7f60(3, 0x71801);
        func_004d7f60(2, 0x48);
        for (i = 0; i < 2; i++)
        {
            u8* item = (u8*)work + 0x1a60 + i * 0x310;
            switch (i)
            {
                case 0: id = 0x1d; break;
                case 1: id = 0x1f; break;
            }
            frame = func_0021cce0(func_0021cca0(atlas, id));
            (*setState)(1, frame);
            draw = (OpMenuDraw*)D_0096009C;
            (*draw)(item + 0x110, 4, 0, 1, 2);
            (*draw)(item + 0x110, 4, 0, 2, 3);
        }
    }
}

// FUN_0026D430
asm void opMenu0026d430(void)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x8f82b6c4
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ed20
  .word 0x24050087
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b6c4
  .word 0x0000202d
  .word 0x0c099b14
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d03
  .word 0xafa00070
  .word 0xafa00074
  .word 0xafa30078
  .word 0xafa3007c
  .word 0x26440010
  .word 0x27a50070
  .word 0x0c087ab8
  .word 0x00000000
  .word 0x44806000
  .word 0x26440010
  .word 0x0c087ab0
  .word 0x00000000
  .word 0xafa00070
  .word 0xafa00074
  .word 0x3c023f80
  .word 0xafa20078
  .word 0xafa2007c
  .word 0x26440110
  .word 0x27a50070
  .word 0x0c087ab8
  .word 0x00000000
  .word 0x44806000
  .word 0x26440110
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x26440210
  .word 0x27a50070
  .word 0x0c087ab8
  .word 0x00000000
  .word 0x44806000
  .word 0x26440210
  .word 0x0c087ab0
  .word 0x00000000
  .word 0xafa00070
  .word 0xafa00074
  .word 0x3c023f80
  .word 0xafa20078
  .word 0xafa2007c
  .word 0x26440310
  .word 0x27a50070
  .word 0x0c087ab8
  .word 0x00000000
  .word 0x44806000
  .word 0x26440310
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x26440410
  .word 0x27a50070
  .word 0x0c087ab8
  .word 0x00000000
  .word 0x44806000
  .word 0x26440410
  .word 0x0c087ab0
  .word 0x00000000
  .word 0xafa00070
  .word 0xafa00074
  .word 0x3c023f80
  .word 0xafa20078
  .word 0xafa2007c
  .word 0x26440510
  .word 0x27a50070
  .word 0x0c087ab8
  .word 0x00000000
  .word 0x44806000
  .word 0x26440510
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x26440610
  .word 0x27a50070
  .word 0x0c087ab8
  .word 0x00000000
  .word 0x44806000
  .word 0x26440610
  .word 0x0c087ab0
  .word 0x00000000
  .word 0xafa00070
  .word 0xafa00074
  .word 0x3c023f80
  .word 0xafa20078
  .word 0xafa2007c
  .word 0x26440710
  .word 0x27a50070
  .word 0x0c087ab8
  .word 0x00000000
  .word 0x44806000
  .word 0x26440710
  .word 0x0c087ab0
  .word 0x00000000
  .word 0xafa00070
  .word 0xafa00074
  .word 0x3c023f80
  .word 0xafa20078
  .word 0xafa2007c
  .word 0x26440810
  .word 0x27a50070
  .word 0x0c087ab8
  .word 0x00000000
  .word 0x44806000
  .word 0x26440810
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050015
  .word 0x0c087328
  .word 0x00000000
  .word 0x26440920
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0xae400af8
  .word 0x0000982d
  .word 0x1000006f
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021100
  .word 0x02428821
  .word 0x26230b00
  .word 0x8e420af8
  .word 0x16620004
  .word 0x00000000
  .word 0xac600000
  .word 0x10000003
  .word 0x00000000
  .word 0x24020008
  .word 0xac620000
  .word 0xac600004
  .word 0x24020003
  .word 0x12620014
  .word 0x00000000
  .word 0x24030002
  .word 0x1263000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12620008
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000008
  .word 0x00000000
  .word 0x0060a02d
  .word 0x10000005
  .word 0x00000000
  .word 0x24140004
  .word 0x10000002
  .word 0x00000000
  .word 0x24140019
  .word 0x0200202d
  .word 0x0280282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x26240b10
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24030003
  .word 0x12630014
  .word 0x00000000
  .word 0x24020002
  .word 0x1262000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12620008
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0040a02d
  .word 0x10000008
  .word 0x00000000
  .word 0x0060a02d
  .word 0x10000005
  .word 0x00000000
  .word 0x24140005
  .word 0x10000002
  .word 0x00000000
  .word 0x2414001a
  .word 0x0200202d
  .word 0x0280282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x26240c10
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24020003
  .word 0x12620014
  .word 0x00000000
  .word 0x24020002
  .word 0x1262000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12620008
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x24140006
  .word 0x10000008
  .word 0x00000000
  .word 0x24140007
  .word 0x10000005
  .word 0x00000000
  .word 0x24140008
  .word 0x10000002
  .word 0x00000000
  .word 0x2414001b
  .word 0x0200202d
  .word 0x0280282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x26240d10
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620004
  .word 0x1440ff90
  .word 0x00000000
  .word 0xae401740
  .word 0xae401744
  .word 0x0200202d
  .word 0x24050022
  .word 0x0c087328
  .word 0x00000000
  .word 0x26441750
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24140023
  .word 0x0200202d
  .word 0x0280282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x26441850
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0xae401a50
  .word 0x0000982d
  .word 0x10000038
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021100
  .word 0x02428821
  .word 0x26231a60
  .word 0x8e421a50
  .word 0x16620004
  .word 0x00000000
  .word 0xac600000
  .word 0x10000003
  .word 0x00000000
  .word 0x24020008
  .word 0xac620000
  .word 0xac600004
  .word 0x24020001
  .word 0x12620008
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x2414001c
  .word 0x10000002
  .word 0x00000000
  .word 0x2414001e
  .word 0x0200202d
  .word 0x0280282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x26241a70
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24020001
  .word 0x12620008
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x2414001d
  .word 0x10000002
  .word 0x00000000
  .word 0x2414001f
  .word 0x0200202d
  .word 0x0280282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x26241b70
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620002
  .word 0x1440ffc7
  .word 0x00000000
  .word 0xae400a30
  .word 0xae400a34
  .word 0xe6540a38
  .word 0xae400a28
  .word 0xae400a70
  .word 0xae400a74
  .word 0xe6540a78
  .word 0xae400a68
  .word 0xae400ab0
  .word 0xae400ab4
  .word 0xe6540ab8
  .word 0xae400aa8
  .word 0xae400910
  .word 0xae400914
  .word 0xae400918
  .word 0xae400ae0
  .word 0xae400ae4
  .word 0xae400ae8
  .word 0xae400aec
  .word 0xae400af0
  .word 0xae400af4
  .word 0x8e420000
  .word 0x34420008
  .word 0xae420000
  .word 0x0c09b71c
  .word 0x00000000
  .word 0x8e430000
  .word 0x34630001
  .word 0xae430000
  .word 0xdfbf0060
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

// FUN_0026da10
void opMenu0026da10(void)
{
    u32* work;

    K_ASSERT(sOpMenu != NULL, 0x87);
    work = sOpMenu;
    opMenu0026da90(0);
    opMenu0026db30(0);
    opMenu0026dc20();
    *work &= 0xfffffffe;
}

// FUN_0026DA90
void opMenu0026da90(s32 param_1)
{
    u32* base;

    K_ASSERT(sOpMenu != NULL, 0x87);
    base = sOpMenu;
    base[param_1 * 0xc4 + 0x2c0] = 8;
    base[base[0x2be] * 0xc4 + 0x2c1] = 0;
    base[0x2be] = param_1;
    base[param_1 * 0xc4 + 0x2c0] = 0;
    base[param_1 * 0xc4 + 0x2c1] = 0;
}

// FUN_0026DB30
void opMenu0026db30(s32 param_1)
{
    u32* base;

    K_ASSERT(sOpMenu != NULL, 0x87);
    base = sOpMenu;
    base[param_1 * 0xc4 + 0x698] = 8;
    base[base[0x694] * 0xc4 + 0x699] = 0;
    base[0x694] = param_1;
    base[param_1 * 0xc4 + 0x698] = 0;
    base[param_1 * 0xc4 + 0x699] = 0;
}

// FUN_0026dbd0
void opMenu0026dbd0(void)
{
    K_ASSERT(sOpMenu != NULL, 0x87);
    *sOpMenu |= 0x20;
}

// FUN_0026DC20
void opMenu0026dc20(void)
{
    K_ASSERT(sOpMenu != NULL, 0x87);
    *sOpMenu &= ~0x20u;
}

// FUN_0026dc70
void opMenu0026dc70(void)
{
    u32* work;

    K_ASSERT(sOpMenu != NULL, 0x87);
    work = sOpMenu;
    work[0x247] = 0;
    *work |= 4;
}

// FUN_0026dcc0
u32 opMenu0026dcc0(void)
{
    K_ASSERT(sOpMenu != NULL, 0x87);
    return *sOpMenu & 8;
}
