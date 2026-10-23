#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "Main/Battle/Result/bp_ifont.h"




typedef struct
{
    u8 unused[0x3730];
    u32 unlockedSkillIndex;
    u32 unlockedSkillLevel;
    u8 unlockedSkillLevelGlyphs[1];
} BrpParamWork;

static BrpParamWork* sBrpParam; // iGpffffb6e0


#include "Utils.h"
#include "Main/OpEd/op_fade_mid.h"
extern u32* DAT_007ce3d0;
#define sOpTailA DAT_007ce3d0
extern u32* DAT_007ce3d4;
#define sOpTailB DAT_007ce3d4
#define sOpTailC DAT_007ce3d8
extern u32* DAT_007ce3dc;
#define sOpTailD DAT_007ce3dc
extern u32* DAT_007ce3e0;
#define sOpTailE DAT_007ce3e0
extern u32 *DAT_007ce3d8;
extern u32 *DAT_007ce3e4;
#define sOpTailF DAT_007ce3e4
#define sOpTailG (*(u32 **)(uintptr_t)0x007ce3e8)
#define OP_F80BC (*(volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ float*)(uintptr_t)0x007cadac)
#define OP_F80D8 (*(volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ float*)(uintptr_t)0x007cadc8)
#define OP_F81F8 (*(volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ float*)(uintptr_t)0x007caee8)
#define OP_F82BC (*(volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ float*)(uintptr_t)0x007cafac)
#define OP_F82C0 (*(volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ float*)(uintptr_t)0x007cafb0)
#define OP_F82C4 (*(volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ float*)(uintptr_t)0x007cafb4)
extern volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ s32 iGpffff97f0;
extern f32 fGpffff80d8;
extern f32 fGpffff82bc;
extern f32 fGpffff82c0;
extern f32 fGpffff82c4;
extern u8 DAT_007cc4e8[1];
#define OP_F82FC (*(volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ float*)(uintptr_t)0x007cafec)
#define OP_F839C (*(volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ float*)(uintptr_t)0x007cb08c)
extern void func_003b0170(u32 resource);
extern u32 func_003b0970(const char* text, s32 mode, s32 group, s32 a, s32 b);
extern void func_003b0d70(u32 resource, s32 x, s32 y);
extern void func_003b0e54(u32 resource, u32 color);
extern void frFontSetTextScale(u32 resource, f32 angle);
extern void func_003b0e70(s32 mode);
extern void* (*DAT_00960178[])(u32 size, u32 heap);
extern void (*DAT_0096017c[])(void* memory);
extern void func_003b1360_y2(u32 resource, s32 visible, s32 flags);
extern s32 func_003b19d0(u32 resource);
extern u8* DAT_007ce4ec;
extern void func_00521250(void* dst, const void* src, u32 size);
extern s32 func_00524388(const char* text);
extern void func_00524828(char* dst, const char* src, s32 size);
extern void func_005225a8(const void* text, ...);
extern u32 func_0016f190(s32 id);
extern void func_001985b0(u8 r, u8 g, u8 b, u8 a);
extern u32 func_0017d800(void);
extern void* func_001016b0(void* resource);
extern void* func_00102100(void* resource, s32 index, s32* size);
extern void func_00100ec0(void* resource);
extern void* func_00100d80(const void* descriptor, s32 flags);
extern void func_003af770(s32 slot, void* data);
extern void func_003afc30(s32 slot);
extern void* func_00194b80(void* parent, u32 priority, const char* name,
                           void* update, void* destroy, void* work);
extern void* func_00194e10(const char* name, u32 size, u32 a, u32 b, void* update,
                           void* destroy, u32 flags);
extern void func_00195550(void* task, void* resource);
extern s32 func_00195460(void* task, ...);
extern void func_00108570(void);
extern void func_001085c0(void);
extern u32 func_00108710(void);
extern void* func_0010bce0(void* task, u32 id);
extern void func_00195020(u32 resource);
extern void func_001749a0(u32 id);
extern void func_00176680(void* dst, u32 id);
extern void func_003c9850(s32 a, s32 b, s32 c, s32 d);
extern void func_003c9b00(u32 resource, const void* data, s32 mode);
extern void func_003c9cd0(u32 resource, s32 value);
extern void func_003c9d00(u32 resource, s32 value);
extern void func_003c9e00(u32 resource, s32 value);
extern s32 func_003c9ab0(u32 resource);
extern void func_00238980_y2(void* dst, s32 count, u32 value, s32 mode);
extern u32 func_0021c3f0(s32 id);
extern u32 func_0021cca0_y2(u32 resource, s32 id);
extern u32 func_0021cce0_y2(u32 resource);
extern void func_0021d3b0_y2(void* dst, u32 resource);
extern void func_0021d8e0_y2(void* dst, const void* value);
extern void func_0021d950_y2(void* dst, const void* value);
extern s32 func_004c9d10(u32 value);
extern void func_004c9d00(u32 value);
extern void func_004d7f60_y2(s32 a, u32 b);
extern u32 func_00198590(void);
extern void (*DAT_00960090[])(s32 state, u32 value);
extern void (*DAT_00960094[])(s32 state, void* value);
extern void (*DAT_0096009c[])(void* vertices, s32 stride, s32 mode, s32 a, s32 b);
extern void func_00521408(void* dst, s32 value, u32 size);
void func_0027a3b0(void);
u32* func_0027a4a0(void);
void func_0027a560(u32* work);
void func_0027a5d0(void);
void func_0027a6a0(u32* work, char* text, s32 align);
void func_0027a930(u32* work, const float* pos);
void func_0027aa00(u32* work, const u8* color);
u32 func_0027aaa0(void);
s32 func_0027ab10(void);
void func_0027ab80(void);
u32 func_0027b070(void);
void func_0027b200(void);
void func_0027ace0(void);
u32 func_0027b310(void);
void func_0027b3f0(s32 param);
void func_0027b6c0(void);
void sflPersonaDestroy(void);
void func_0027ac60(u32* work);
void func_0027ac80(void);
void func_0027ace0(void);
void func_0027ae90(void);
u32 func_0027af80(void);
void func_0027afd0(void);
void func_0027b0b0(void);
u32 func_0027b2b0(void);
u32 func_0027b460(void);
void func_0027b5b0(u32* work);
void func_0027b5d0(void);
void func_0027b610(void);
void func_0027b6c0(void);
void func_0027b880(void);
void func_0027b9f0(void);
void func_0027ba90(void);
typedef struct OpTailPosition {
    f32 x;
    f32 y;
} OpTailPosition;
void func_0027bae0(const OpTailPosition* value);
#include "Main/Battle/Result/br_res.h"
typedef int (*code)(...);
extern void K_Assert(const char* file, s32 line);
extern const char D_0068ED88[];
#define OP_MATCH_ASSERT(condition, line) \
    do {                                 \
        if (!(condition)) {              \
            K_Assert(__FILE__, (line));  \
        }                                \
    } while (0)
extern u32 D_00960178[];
extern u32 D_0096017C[];
extern void (*D_00960090)(u32 state, u32 value);
extern void (*D_0096009C)(void *vertices, u32 primitive, u32 offset,
                          u32 first, u32 second);
extern u8 D_00960090_abs[];
extern u8 D_0096009C_abs[];
extern void *D_007D2D60;
extern u8 *DAT_007ce420;
extern s32 DAT_007cc4dc;
extern f32 DAT_007cad74;
extern f32 DAT_007caf38;
extern f32 DAT_007caf8c;
extern f32 DAT_007cafec;
extern f32 DAT_007cb04c;
extern const char DAT_0068EEB8[];
extern const char DAT_0068EED0[];
extern void *FUN_00173220(u16 id);
extern u16 *datPersonaGetSkills(void *persona);
extern u8 datPersonaGetTotalStat(void *persona, u16 stat);
extern u32 datPersonaCountValidSkills(void *persona);
extern void *FUN_001749a0(u16 id);
extern void func_0010a370(s32 channel, const char *message);
extern u32 func_00119a60(u32 id);
extern void func_0019d3f0(const char *file, s32 line);
extern void func_001fb1f0(void *persona, u16 *out, s32 *count);
extern u32 func_001fc230(void *persona);
extern u32 func_001fc3c0(void *persona);
extern void func_0021d3b0(void *destination, u32 source);
extern void func_0021d8e0(void *destination, const f32 *layout);
extern void func_0021d950(void *destination, const u8 *color);
extern u32 func_0021cca0(u32 resource, s32 frame);
extern u32 func_0021cce0(u32 frame);
extern void func_0021e380(void *destination, u32 source, s32 mode);
extern void func_0021eac0(void *destination, f32 value);
extern void func_00238980(void *destination, s32 count, u32 value, s32 mode);
extern void func_00238dc0(void *destination, s32 count, u32 value, s32 mode,
                           const f32 *layout);
extern void func_0025f5d0(void *destination, u32 resource, s32 frame);
extern void func_0025fc50(void *destination, u32 resource, s32 frame, s32 mode);
extern void func_00279120(void);
extern void func_002792c0(void);
extern u32 func_00239140(s32 font);
extern s32 sflPsel00260900(u32 *resource, s32 frame);
extern s32 sflPsel00260920(u32 *resource, s32 frame);
extern f32 sinf(f32 angle);
extern u32 sflPsel00260940(u32 *resource, s32 frame);
extern f32 func_00269c80(f32 value);
extern f32 func_00269ca0(f32 value);
extern void func_00272330(void *task);
extern void func_00272380(void);
extern void func_00272400(u64 value);
extern u32 func_002727c0(void);
extern void func_00272810(void);
extern void func_002791b0_y2(u16 id);
extern void func_00279330_y2(u16 id);
extern void brpParamSetUnlockedSkillLevel_y2(u32 level);
extern void brpParamSetUnlockedSkillIndex_y2(u32 index);
extern void func_00279510_y2(s32 index, u32 value);
extern void func_00279580_y2(s32 index, u32 value);
extern void func_002795f0_y2(s32 index, u32 value);
extern u32 func_003b0d70_y2(u32 resource, s32 x, s32 y);
extern void func_003b0e20(u32 resource, u32 color);
extern void func_003b0e90_y2(s32 mode);
extern u32 func_003b1360(u32 resource, s32 visible, s32 flags);
extern void func_003c7430(s32 value);
extern void func_003c7bc0(s32 channel, u32 value);
extern void func_003c7e20(s32 mode, s32 x, s32 y, u64 value, s32 a,
                           s32 b, s32 c);
extern u32 func_003c9ab0_y2(u32 resource);
extern void func_003c9ba0(u32 stream, u32 resource);
extern void func_003c9d80(u32 resource, s32 value);
extern void func_004d7f60(s32 state, u32 value);
extern void func_00521250_y2(void *destination, const void *source, u32 size);
extern void func_005225a8_y2(const void *message, ...);
extern void brLvpnlStartEntranceAnimation(void);
extern void brLvpnlDisableDrawing(void);
extern void brLvpnlEnableDrawing(void);
extern u32 *DAT_007ce3c0;
extern u32 *DAT_007ce3c4;
extern u32 *DAT_007ce3c8;
extern u32 *DAT_007ce3cc;
extern u32 *DAT_007ce3d0_y2;
#undef gOpWorkC0
#undef gOpWorkC4
#undef gOpWorkC8
#undef gOpWorkCC
#undef gOpWorkD0
#define gOpWorkC0 DAT_007ce3c0
#define gOpWorkC4 DAT_007ce3c4
#define gOpWorkC8 DAT_007ce3c8
#define gOpWorkCC DAT_007ce3cc
#define gOpWorkD0 DAT_007ce3d0_y2
#define opTexW(resource, frame) \
    ((s32)sflPsel00260900((u32 *)(uintptr_t)(resource), (frame)))
typedef struct OpFadeEntry
{
    u32 drawHandle;
    u8 pad_004[0x0c];
    u8 draw[0x210];
    u8 panel18[0x100];
    u8 panel1b[0x100];
    u8 panel14[0x100];
    u8 panel14Alt[0x100];
    u8 panel15[0x100];
} OpFadeEntry;
typedef struct OpFadeWork
{
    u32 flags;
    u8 pad_004[0x0c];
    u8 list12[8][0x110];
    OpFadeEntry entries[5];
    u8 panel13[0x100];
    u8 panel15[0x100];
    u8 panel15Alt[0x100];
    u8 panel17[0x100];
    u8 list14[7][0x100];
    u32 pad_3730;
    u32 drawHandle;
    u32 pad_3738;
    u32 state;
    u32 frame;
    u8 pad_3744[0x0c];
    u8 draw[0x210];
    u8 texture1[0x100];
    u8 texture0[0x110];
    u8 texture0Alt[0x100];
} OpFadeWork;

#define opTexH(resource, frame) \
    ((s32)sflPsel00260920((u32 *)(uintptr_t)(resource), (frame)))
#define opTexFrame(resource, frame) \
    (sflPsel00260940((u32 *)(uintptr_t)(resource), (frame)))

#define OP_U8(base, offset) (*(u8 *)((u8 *)(base) + (offset)))
#define OP_S8(base, offset) (*(s8 *)((u8 *)(base) + (offset)))
#define OP_U16(base, offset) (*(u16 *)((u8 *)(base) + (offset)))
#define OP_S16(base, offset) (*(s16 *)((u8 *)(base) + (offset)))
#define OP_U32(base, offset) (*(u32 *)((u8 *)(base) + (offset)))
#define OP_S32(base, offset) (*(s32 *)((u8 *)(base) + (offset)))
#define OP_PTR(base, offset) (*(void **)((u8 *)(base) + (offset)))
#define OP_WORD(base, index) (((u32 *)(base))[index])
#define OP_ALLOC(size, flags) (*(void *(**)(u32, u32))D_00960178)((size), (flags))
#define OP_WORK0 ((u8 *)gOpWorkC0)
#define OP_WORK4 ((u8 *)gOpWorkC4)
#define OP_WORK8 ((u8 *)gOpWorkC8)
#define OP_WORKC ((u8 *)gOpWorkCC)
#define OP_WORKD ((u8 *)gOpWorkD0)


static inline u8 opFadeColorByte(f32 value)
{
    return (u8)(u32)value;
}
static inline f32 opFadeMul(f32 left, f32 right)
{
    return left * right;
}

// FUN_00276d30
void func_00276d30(void)
{
    OP_MATCH_ASSERT(gOpWorkD0 != NULL, 0x61);
    if ((*gOpWorkD0 & 1) != 0)
        func_00277070();
    gOpWorkD0 = NULL;
}

// FUN_00276d90
void func_00276d90(void)
{
    OpFadeWork* work;
    u32 res8;
    u32 res10;
    u32 res1;
    s32 i;

    OP_MATCH_ASSERT(gOpWorkD0 != NULL, 0x61);
    work = (OpFadeWork*)gOpWorkD0;
    res8 = func_00119a60(8);
    res10 = func_00119a60(10);
    res1 = brRes00234630(1);
    OP_MATCH_ASSERT((~work->flags & 1) != 0, 0x84);

    func_0025f5d0(work->panel15, res8, 0x15);
    func_0025fc50(work->panel15Alt, res8, 0x15, 1);
    func_0025f5d0(work->panel17, res8, 0x17);
    func_0021d3b0(work->texture1, func_0021cca0(res1, 1));
    func_0021d3b0(work->texture0, func_0021cca0(res1, 0));
    func_0021d3b0(work->texture0Alt, func_0021cca0(res1, 0));

    for (i = 0; i < 5; i++)
    {
        OpFadeEntry* entry = &work->entries[i];
        func_0025f5d0(entry->panel14, res10, 0x14);
        func_0025fc50(entry->panel14Alt, res10, 0x14, 1);
        func_0025f5d0(entry->panel15, res10, 0x15);
        func_00238980(entry->draw, 2, entry->drawHandle, 2);
        func_0025f5d0(entry->panel18, res10, 0x18);
        func_0025f5d0(entry->panel1b, res10, 0x1b);
    }

    for (i = 0; i < 8; i++)
        func_0025f5d0(work->list12[i], res8, 0x12);
    func_0025f5d0(work->panel13, res8, 0x13);
    for (i = 0; i < 7; i++)
        func_0025f5d0(work->list14[i], res8, 0x14);

    func_00238980(work->draw, 2, work->drawHandle, 2);
    work->state = 0;
    work->frame = 0;
    func_002771f0();
    work->flags &= ~0x40u;
    work->flags |= 1;
}



#pragma alias K_Assert_y2 K_Assert
#pragma alias func_0021d3b0_y2 func_0021d3b0
#pragma alias func_0021d8e0_y2 func_0021d8e0
#pragma alias func_0021d950_y2 func_0021d950
#pragma alias func_0021cca0_y2 func_0021cca0
#pragma alias func_0021cce0_y2 func_0021cce0
#pragma alias func_00238980_y2 func_00238980
#pragma alias func_00279120_y2 func_00279120
#pragma alias func_002792c0_y2 func_002792c0
#pragma alias func_003b1360_y2 func_003b1360
#pragma alias func_004d7f60_y2 func_004d7f60
#pragma alias func_002791b0_y2 func_002791b0
#pragma alias func_00279330_y2 func_00279330
#pragma alias brpParamSetUnlockedSkillLevel_y2 brpParamSetUnlockedSkillLevel
#pragma alias brpParamSetUnlockedSkillIndex_y2 brpParamSetUnlockedSkillIndex
#pragma alias func_00279510_y2 func_00279510
#pragma alias func_00279580_y2 func_00279580
#pragma alias func_002795f0_y2 func_002795f0
#pragma alias func_003b0d70_y2 func_003b0d70
#pragma alias func_003b0e90_y2 func_003b0e90
#pragma alias func_003c9ab0_y2 func_003c9ab0
#pragma alias func_00521250_y2 func_00521250
#pragma alias func_005225a8_y2 func_005225a8
#pragma alias DAT_007ce3d0_y2 DAT_007ce3d0


/* GP-owned work records are shared with the adjacent opening/ending TU. */



// FUN_00277070
void func_00277070(void)
{
    u8 *work;
    OP_MATCH_ASSERT(gOpWorkD0 != NULL, 0x61);
    work = OP_WORKD;
    if (OP_U32(work, 0x3738) != 0)
        func_00279120();
    if ((OP_U32(work, 0) & 2) != 0)
        func_002792c0();
    OP_U32(work, 0) &= ~1u;
}

// FUN_002770f0
void func_002770f0(void)
{
    u32 *work;
    u32 flags;
    OP_MATCH_ASSERT(gOpWorkD0 != NULL, 0x61);
    work = (u32 *)OP_WORKD;
    flags = work[0];
    if ((~flags & 1) != 0)
        return;
    if ((flags & 4) != 0)
    {
        if (((s32 *)work)[0x373c / 4] < 0x14)
            work[0x373c / 4]++;
        else
        {
            work[0] &= ~8u;
            work[0] &= ~4u;
        }
    }
    ((s32 *)work)[0x3740 / 4]++;
    ((s32 *)work)[0x3740 / 4] %= 10;
    if ((work[0] & 0x10) != 0)
    {
        if (((s32 *)work)[0x3744 / 4] < 0x1e)
            work[0x3744 / 4]++;
        else
            work[0] &= ~0x10u;
    }
    func_002771f0();
}

/* W455 reconstruction: retail resets the list-entry color each iteration,
 * switches to c7/b9 resource colors before the resource loop, and computes all
 * four panel13 channels from alpha. Implemented those decoded blocks; 104 bytes
 * remain in later layout and scheduling differences. */
// FUN_002771f0
asm void func_002771f0(void)
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
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b6e0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ef30
  .word 0x24050061
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b6e0
  .word 0x24040008
  .word 0x0c046698
  .word 0x00000000
  .word 0x0040902d
  .word 0x2404000a
  .word 0x0c046698
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24040001
  .word 0x0c08d18c
  .word 0x00000000
  .word 0x0040a82d
  .word 0x2402019b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00080
  .word 0x3c0243a3
  .word 0xafa20084
  .word 0x0240202d
  .word 0x24050015
  .word 0x0c098240
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00088
  .word 0x0240202d
  .word 0x24050015
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26242d30
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050015
  .word 0x0c098240
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x2402019b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0xe7a00080
  .word 0x3c0243a3
  .word 0xafa20084
  .word 0x3c0241f8
  .word 0xafa20088
  .word 0x0240202d
  .word 0x24050015
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26242e30
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x2402022d
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00080
  .word 0x3c0243a3
  .word 0xafa20084
  .word 0x0240202d
  .word 0x24050017
  .word 0x0c098240
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00088
  .word 0x0240202d
  .word 0x24050017
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26242f30
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x26242d30
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x26242e30
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x26242f30
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000047
  .word 0x00000000
  .word 0x00101100
  .word 0x00501021
  .word 0x00021100
  .word 0x02221021
  .word 0x24530010
  .word 0x00101083
  .word 0x06010003
  .word 0x00000000
  .word 0x26020003
  .word 0x00021083
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c02433e
  .word 0x44821000
  .word 0x3c024208
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603111c
  .word 0x32020003
  .word 0x06010004
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffc
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c0241c0
  .word 0x44821000
  .word 0x3c02439e
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a40080
  .word 0xe7a00084
  .word 0x0240202d
  .word 0x24050012
  .word 0x0c098240
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00088
  .word 0x0240202d
  .word 0x24050012
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x0260202d
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x0260202d
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020008
  .word 0x1440ffb8
  .word 0x00000000
  .word 0x240200c7
  .word 0xa3a200ac
  .word 0x240200b9
  .word 0xa3a200ad
  .word 0x240200ff
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x0000802d
  .word 0x1000004b
  .word 0x00000000
  .word 0x00101100
  .word 0x00501021
  .word 0x00021100
  .word 0x02221021
  .word 0x24530010
  .word 0x00101083
  .word 0x06010003
  .word 0x00000000
  .word 0x26020003
  .word 0x00021083
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c02433e
  .word 0x44821000
  .word 0x3c024208
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603111c
  .word 0x32020003
  .word 0x06010004
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffc
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c0241c0
  .word 0x44821000
  .word 0x2402013b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603109c
  .word 0x3c024180
  .word 0x44820800
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46040000
  .word 0x46000802
  .word 0x46000024
  .word 0x44050000
  .word 0xc7808084
  .word 0x46001041
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46000024
  .word 0x44060000
  .word 0x8e640100
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x93a200ac
  .word 0x00021e00
  .word 0x93a200ad
  .word 0x00021400
  .word 0x00621825
  .word 0x93a200ae
  .word 0x00021200
  .word 0x00431825
  .word 0x93a200af
  .word 0x00432825
  .word 0x8e640100
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x26100001
  .word 0x8e223738
  .word 0x0202102a
  .word 0x1440ffb3
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620002
  .word 0x10400180
  .word 0x00000000
  .word 0x30620010
  .word 0x10400033
  .word 0x00000000
  .word 0x8e223744
  .word 0x28410005
  .word 0x10200004
  .word 0x00000000
  .word 0x4480a000
  .word 0x1000002d
  .word 0x00000000
  .word 0x2841000a
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442fffb
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x28410014
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x10000016
  .word 0x00000000
  .word 0x2841001e
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffec
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010501
  .word 0x10000005
  .word 0x00000000
  .word 0x4480a000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0x3c0245d4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000024
  .word 0x44050000
  .word 0x3c024529
  .word 0x44820000
  .word 0x00000000
  .word 0x46000024
  .word 0x44060000
  .word 0x8e243950
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x3c02425c
  .word 0x44821000
  .word 0x3c024347
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602a05c
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
  .word 0xa3a300ac
  .word 0x3c02428c
  .word 0x44821000
  .word 0x3c024339
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602a05c
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
  .word 0xa3a300ad
  .word 0x3c02c2be
  .word 0x44821000
  .word 0x3c02437f
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602a05c
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
  .word 0xa3a300ae
  .word 0x44800800
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000818
  .word 0x4601a05c
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
  .word 0x93a200ac
  .word 0x00021e00
  .word 0x93a200ad
  .word 0x00021400
  .word 0x00621825
  .word 0x93a200ae
  .word 0x00021200
  .word 0x00431825
  .word 0x93a200af
  .word 0x00432825
  .word 0x8e243950
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x3c0243cf
  .word 0xafa20080
  .word 0x24020157
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00084
  .word 0x0240202d
  .word 0x24050013
  .word 0x0c098240
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00088
  .word 0x0240202d
  .word 0x24050013
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26242c30
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x26242c30
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420010
  .word 0x10400033
  .word 0x00000000
  .word 0x8e223744
  .word 0x28410005
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b000
  .word 0x1000002d
  .word 0x00000000
  .word 0x2841000a
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442fffb
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x28410014
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x10000016
  .word 0x00000000
  .word 0x2841001e
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffec
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010581
  .word 0x10000005
  .word 0x00000000
  .word 0x4480b000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480b000
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c087328
  .word 0x00000000
  .word 0x24030197
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00080
  .word 0x2403013f
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00084
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26243960
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46160502
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
  .word 0xa3a300af
  .word 0x26243960
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x24030195
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00080
  .word 0x2403014d
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00084
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26243a60
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
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
  .word 0xa3a300af
  .word 0x26243a60
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000045
  .word 0x00000000
  .word 0x00101043
  .word 0x06010003
  .word 0x00000000
  .word 0x26020001
  .word 0x00021043
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c024278
  .word 0x44821000
  .word 0x3c0243cf
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603111c
  .word 0x32020001
  .word 0x06010004
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c0241c0
  .word 0x44821000
  .word 0x3c0243b7
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a40080
  .word 0xe7a00084
  .word 0x0240202d
  .word 0x24050014
  .word 0x0c098240
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00088
  .word 0x0240202d
  .word 0x24050014
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x00101200
  .word 0x02221021
  .word 0x24533030
  .word 0x0260202d
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x0260202d
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x8e223730
  .word 0x0202102a
  .word 0x1440ffb9
  .word 0x00000000
  .word 0x2402020e
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00080
  .word 0x3c0243a4
  .word 0xafa20084
  .word 0x26243750
  .word 0x24050002
  .word 0x8e263734
  .word 0x00a0382d
  .word 0x27a80080
  .word 0x0c08e370
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24443750
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020002
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000181
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x000210c0
  .word 0x00521021
  .word 0x00021140
  .word 0x02221021
  .word 0x24500890
  .word 0x3c0242d0
  .word 0xafa20080
  .word 0x3c024198
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000d42
  .word 0x3c024301
  .word 0x44820000
  .word 0x00000000
  .word 0x46150040
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d01
  .word 0xe7b40084
  .word 0x0280202d
  .word 0x24050014
  .word 0x0c098240
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00088
  .word 0x0280202d
  .word 0x24050014
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780829c
  .word 0x46010000
  .word 0xe7a0008c
  .word 0x26040420
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050014
  .word 0x0c098240
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242d0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00080
  .word 0xe7b40084
  .word 0x3c02435c
  .word 0xafa20088
  .word 0x0280202d
  .word 0x24050014
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780829c
  .word 0x46010000
  .word 0xe7a0008c
  .word 0x26040520
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x26040420
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x26040520
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0xc780835c
  .word 0xe7a00080
  .word 0xe7b40084
  .word 0x0280202d
  .word 0x24050015
  .word 0x0c098240
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00088
  .word 0x0280202d
  .word 0x24050015
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780829c
  .word 0x46010000
  .word 0xe7a0008c
  .word 0x26040620
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x26040620
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x3c02428a
  .word 0xafa20080
  .word 0x3c024303
  .word 0x44820000
  .word 0x00000000
  .word 0x46150040
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00084
  .word 0x26040010
  .word 0x24050002
  .word 0x8e060000
  .word 0x00a0382d
  .word 0x27a80080
  .word 0x0c08e370
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x0000982d
  .word 0x10000008
  .word 0x00000000
  .word 0x00131200
  .word 0x02021021
  .word 0x24440010
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620002
  .word 0x1440fff7
  .word 0x00000000
  .word 0x8e030210
  .word 0x24020063
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x44800800
  .word 0x10000013
  .word 0x00000000
  .word 0x3c024365
  .word 0x44820800
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c024361
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x3c0242c4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c0242d8
  .word 0xafa20080
  .word 0x3c0242d2
  .word 0x44820000
  .word 0x00000000
  .word 0x46150500
  .word 0xe7b40084
  .word 0xe7a10088
  .word 0x0280202d
  .word 0x24050018
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26040220
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x3402ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0x26040220
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x26040220
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420004
  .word 0x1040001a
  .word 0x00000000
  .word 0x8e22373c
  .word 0x2841000a
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x10000014
  .word 0x00000000
  .word 0x28410014
  .word 0x10200011
  .word 0x00000000
  .word 0x2442fff6
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010581
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0xc6203740
  .word 0x46800060
  .word 0x3c024120
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
  .word 0xc78282fc
  .word 0xc7818084
  .word 0x44801800
  .word 0x00000000
  .word 0x46011818
  .word 0x4600155c
  .word 0x8e030210
  .word 0x24020063
  .word 0x10620007
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x3c024365
  .word 0x44821800
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c024361
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x3c0242c4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x460100c0
  .word 0x8e030214
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x44800800
  .word 0x10000013
  .word 0x00000000
  .word 0x3c024080
  .word 0x44820800
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c024360
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x3c0242c4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c0242d8
  .word 0x44820000
  .word 0x00000000
  .word 0x46030000
  .word 0x46010001
  .word 0xe7a00080
  .word 0xe7b40084
  .word 0xe7a10088
  .word 0x0280202d
  .word 0x2405001b
  .word 0x0c098248
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26040320
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46160002
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
  .word 0xa3a300af
  .word 0x26040320
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420005
  .word 0x1440fe7e
  .word 0x00000000
  .word 0xc6203b60
  .word 0x468000a0
  .word 0x3c02433e
  .word 0x44820800
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x44801800
  .word 0x00000000
  .word 0x46001818
  .word 0x46020d5c
  .word 0xc6203b64
  .word 0x468000a0
  .word 0x3c0241c0
  .word 0x44820800
  .word 0x24020135
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46001818
  .word 0x46020d1c
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b50080
  .word 0xe7b40084
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26243b70
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0xa3a200af
  .word 0x26243b70
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#define D_00960090 (*state)
#define D_0096009C (*quad)
// FUN_00278550
asm void func_00278550(void)
{
  .set noreorder
  .word 0x27bdfe40
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
  .word 0x8f82b6e0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ef30
  .word 0x24050061
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b6e0
  .word 0x24040008
  .word 0x0c046698
  .word 0x00000000
  .word 0x0040a02d
  .word 0x2404000a
  .word 0x0c046698
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24040001
  .word 0x0c08d18c
  .word 0x00000000
  .word 0x0040f02d
  .word 0x8e240000
  .word 0x00801827
  .word 0x30630001
  .word 0x146002c3
  .word 0x00000000
  .word 0x30830040
  .word 0x146002c0
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040014
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e230000
  .word 0x30630020
  .word 0x1060003b
  .word 0x00000000
  .word 0x03c0202d
  .word 0x24050002
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040902d
  .word 0x27a400c0
  .word 0x0240282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x3c024397
  .word 0xafa200a0
  .word 0x3c024361
  .word 0xafa200a4
  .word 0xc640000c
  .word 0x46800020
  .word 0xe7a000a8
  .word 0xc6400010
  .word 0x46800020
  .word 0xe7a000ac
  .word 0x27a400c0
  .word 0x27a500a0
  .word 0x0c087638
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
  .word 0x0240202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652009c
  .word 0x27a400c0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x27a400c0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000002d
  .word 0x00000000
  .word 0x24020007
  .word 0x00521823
  .word 0x00031100
  .word 0x00431021
  .word 0x00021100
  .word 0x02221021
  .word 0x24530010
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050012
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c160096
  .word 0x26d6009c
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430008
  .word 0x1460ffd2
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00121100
  .word 0x00521021
  .word 0x00021100
  .word 0x02221021
  .word 0x8c440110
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x26520001
  .word 0x8e233738
  .word 0x0243182a
  .word 0x1460fff3
  .word 0x00000000
  .word 0x8e230000
  .word 0x30630002
  .word 0x1060010b
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
  .word 0x0280202d
  .word 0x24050015
  .word 0x0c098250
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652009c
  .word 0x26242d30
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242d30
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242e30
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242e30
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050017
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242f30
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242f30
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
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
  .word 0x0280202d
  .word 0x24050013
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242c30
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242c30
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x03c0202d
  .word 0x24050001
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26243960
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26243960
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x03c0202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26243a60
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26243a60
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e243950
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000029
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
  .word 0x0280202d
  .word 0x24050014
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x00121200
  .word 0x02221021
  .word 0x24533030
  .word 0x3c160096
  .word 0x26d6009c
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26520001
  .word 0x8e223730
  .word 0x0242102a
  .word 0x1440ffd5
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
  .word 0x24040002
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000017
  .word 0x00000000
  .word 0x00121200
  .word 0x02221021
  .word 0x24533750
  .word 0x3c140096
  .word 0x2694009c
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430002
  .word 0x1460ffe8
  .word 0x00000000
  .word 0x0000a02d
  .word 0x100000cf
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541023
  .word 0x000210c0
  .word 0x00541021
  .word 0x00021140
  .word 0x02221021
  .word 0x24530890
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050014
  .word 0x0c098250
  .word 0x00000000
  .word 0x3c160096
  .word 0x26d60090
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652009c
  .word 0x26640420
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640420
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640520
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640520
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050015
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640620
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640620
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
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
  .word 0x24040002
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000017
  .word 0x00000000
  .word 0x00121200
  .word 0x02621021
  .word 0x24560010
  .word 0x3c170096
  .word 0x26f7009c
  .word 0x02c0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02c0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420002
  .word 0x1440ffe8
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
  .word 0x02a0202d
  .word 0x24050018
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652009c
  .word 0x26640220
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640220
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e230000
  .word 0x30630008
  .word 0x10600023
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
  .word 0x02a0202d
  .word 0x2405001b
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640320
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640320
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26940001
  .word 0x2a830005
  .word 0x1460ff30
  .word 0x00000000
  .word 0x8e230000
  .word 0x30630020
  .word 0x10600034
  .word 0x00000000
  .word 0x8f8a97ec
  .word 0x2406ffff
  .word 0x11460009
  .word 0x00000000
  .word 0x44806000
  .word 0x2404013c
  .word 0x24050100
  .word 0x24070001
  .word 0x24080006
  .word 0x24090003
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x03c0202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
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
  .word 0x26243b70
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26243b70
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
  .word 0x27bd01c0
  .word 0x03e00008
  .word 0x00000000
}
#undef D_00960090
#undef D_0096009C


// FUN_00279120
void func_00279120_y2(void)
{
    s32 i;
    u32* work;

    K_ASSERT(sOpTailA != NULL, 0x61);
    work = sOpTailA;
    for (i = 0; i < (s32)work[0x3738 / 4]; i++) {
        func_003b0170(*(u32*)((u8*)work + i * 0x110 + 0x110));
    }
    work[0x3738 / 4] = 0;
}

// FUN_002791b0
void func_002791b0(u32 id)
{
    u32* root;
    u32* work;
    u32 handle;

    K_ASSERT(sOpTailA != NULL, 0x61);
    root = sOpTailA;
    work = (u32*)((u8*)root + root[0x3738 / 4] * 0x110 + 0x10);
    func_003b0e70(1);
    func_003b0e90(2);
    handle = func_003b0970(
        (const char*)(DAT_007ce4ec + (id & 0xffff) * 0x13), 1, 6, 0, 0);
    func_003b0d70(handle, 0x640, 0x320);
    frFontSetTextScale(handle, 0.0f);
    work[0x100 / 4] = handle;
    func_003b0e90(1);
    func_003b0e70(2);
    root[0x3738 / 4]++;
}

// FUN_002792c0
void func_002792c0_y2(void)
{
    u32* work;

    K_ASSERT(sOpTailA != NULL, 0x61);
    work = sOpTailA;
    if ((work[0] & 2) != 0) {
        func_003b0170(work[0xe54]);
    }
    work[0] &= ~2u;
}

// FUN_00279330
void func_00279330(u32 id)
{
    u32* work;
    u32 handle;

    K_ASSERT(sOpTailA != NULL, 0x61);
    work = sOpTailA;
    if ((~work[0] & 2) == 0) {
        K_Assert_y2("brp_param.c", 0x3e0);
    }
    func_003b0e70(1);
    func_003b0e90(2);
    handle = func_003b0970(
        (const char*)(DAT_007ce4ec + (id & 0xffff) * 0x13), 1, 6, 0, 0);
    func_003b0d70(handle, 0x640, 0x320);
    frFontSetTextScale(handle, 0.0f);
    work[0xe54] = handle;
    func_003b0e90(1);
    func_003b0e70(2);
    work[0] |= 2;
}

// FUN_00279450
void brpParamSetUnlockedSkillLevel(u32 level)
{
    int workBase;

    K_ASSERT(sBrpParam != NULL, 0x61);
    /* MWCC requires this address form to retain the retail call setup. */
    workBase = (int)sBrpParam;
    *(u32*)(workBase + 0x3734) = level;
    bpIFont00238980((void*)(workBase + 0x3750), 2, level, 2);
}

// FUN_002794c0
void brpParamSetUnlockedSkillIndex(u32 index)
{
    K_ASSERT(sBrpParam != NULL, 0x61);
    sBrpParam->unlockedSkillIndex = index;
}

// FUN_00279510
void func_00279510(s32 index, u32 value)
{
    u8* work;
    s32 byteOffset;

    K_ASSERT(sOpTailA != NULL, 0x61);
    work = (u8*)sOpTailA;
    byteOffset = index * 0x720;
    work = (u8*)((uintptr_t)byteOffset + (uintptr_t)work);
    *(u32*)(work + 0x890) = value;
}

// FUN_00279580
void func_00279580(s32 index, u32 value)
{
    u8* work;
    s32 byteOffset;

    K_ASSERT(sOpTailA != NULL, 0x61);
    work = (u8*)sOpTailA;
    byteOffset = index * 0x720;
    work = (u8*)((uintptr_t)byteOffset + (uintptr_t)work);
    *(u32*)(work + 0xaa0) = value;
}

// FUN_002795f0
void func_002795f0(s32 index, u32 value)
{
    u8* work;
    s32 byteOffset;

    K_ASSERT(sOpTailA != NULL, 0x61);
    work = (u8*)sOpTailA;
    byteOffset = index * 0x720;
    work = (u8*)((uintptr_t)byteOffset + (uintptr_t)work);
    *(u32*)(work + 0xaa4) = value;
}

// FUN_00279660
void func_00279660(void)
{
    K_ASSERT(sOpTailA != NULL, 0x61);
    sOpTailA[0] |= 8;
}

// FUN_002796b0
void func_002796b0(void)
{
    u32* work;

    K_ASSERT(sOpTailA != NULL, 0x61);
    work = sOpTailA;
    work[0xdcf] = 0;
    work[0] |= 4;
}

// FUN_00279700
u32 func_00279700(void)
{
    K_ASSERT(sOpTailA != NULL, 0x61);
    return sOpTailA[0] & 4;
}
// W389 residual nd20 (object 372/384): six-knob singles and all 15 knob pairs, plus pointer-type, temporary, and declaration-order probes, were reverted as neutral; alignment-cursor register coloring remains a compiler floor.
// FUN_00279750
void func_00279750(void)
{
    u32* work;

    K_ASSERT(sOpTailA != NULL, 0x61);
    work = sOpTailA;
    work[0xdd1] = 0;
    work[0] |= 0x10;
}

// FUN_002797a0
u32 func_002797a0(void)
{
    K_ASSERT(sOpTailA != NULL, 0x61);
    return sOpTailA[0] & 0x10;
}

// FUN_002797f0
void func_002797f0(void)
{
    K_ASSERT(sOpTailA != NULL, 0x61);
    sOpTailA[0] |= 0x20;
}

// FUN_00279840
void func_00279840(void)
{
    K_ASSERT(sOpTailA != NULL, 0x61);
    sOpTailA[0] &= ~0x20u;
}

// FUN_00279890
void func_00279890(u32 a, u32 b)
{
    u32* work;

    K_ASSERT(sOpTailA != NULL, 0x61);
    work = sOpTailA;
    work[0x3b60 / 4] = a;
    work[0x3b64 / 4] = b;
}

// FUN_002798f0
void func_002798f0(void)
{
    K_ASSERT(sOpTailA != NULL, 0x61);
    sOpTailA[0] |= 0x40;
}




/* Retail helpers used by the opening/ending result state. */
#pragma alias D_00960090_abs D_00960090
#pragma alias D_0096009C_abs D_0096009C




























/* W420 direct-field load: nd185/384B, window 384B, rate 0.481771, versus
 * baseline nd20/372B, rate 0.053763; aligned split variant stayed at baseline;
 * both reverted. */


// FUN_00279940
u32* func_00279940(const u32* header)
{
    u32 size;
    u32* out;
    u32* data;
    u32 cursor;
    u32 i;
    u8* bytes;

    size = 0x14;
    size += header[3] * 4;
    if ((size & 3) != 0) {
        size += 4 - (size & 3);
    }
    size += header[6];
    if ((size & 3) != 0) {
        size += 4 - (size & 3);
    }
    size += header[2];
    data = out = (u32*)(*DAT_00960178)(size, 0x40000);
    data += 5;
    out[2] = (u32)data;
    /* Preserve the retail accumulator through both 4-byte alignment joins. */
    __asm__ volatile (
        "lw $v0, 0xc(%2)\n"
        "sll $v0, $v0, 2\n"
        "addu $v0, %3, $v0\n"
        "andi $a0, $v0, 3\n"
        "beqz $a0, 1f\n"
        "addiu $v1, $zero, 4\n"
        "subu $v1, $v1, $a0\n"
        "addu $v0, $v0, $v1\n"
        "1:\n"
        "sw $v0, 0xc(%1)\n"
        "lw $v1, 0x18(%2)\n"
        "addu $v0, $v0, $v1\n"
        "andi $a0, $v0, 3\n"
        "beqz $a0, 2f\n"
        "addiu $v1, $zero, 4\n"
        "subu $v1, $v1, $a0\n"
        "addu $v0, $v0, $v1\n"
        "2:\n"
        "sw $v0, 0x10(%1)"
        : "=r"(size) : "r"(out), "r"(header), "r"(data) : "memory");
    out[1] = header[3];
    out[0] = header[0];
    func_00521250((void*)out[3], (const u8*)header + header[5], header[6]);
    func_00521250((void*)out[4], (const u8*)header + header[1], header[2]);
    bytes = (u8*)header + header[4];
    cursor = out[3];
    for (i = 0; i < header[3]; i++, bytes++) {
        ((u32*)out[2])[i] = cursor;
        cursor += *bytes;
    }
    return out;
}



// FUN_00279ac0
void func_00279ac0(u32 value)
{
    (*DAT_0096017c)((void*)(uintptr_t)value);
}

// FUN_00279AF0
u32 func_00279af0(const u32* work, u32 index)
{
    return *(const u32 *)(index * sizeof(u32) + work[2]);
}

// FUN_00279b10
u32 func_00279b10(const u32* work)
{
    return work[4];
}

// FUN_00279b20
u32 func_00279b20(const u32* work)
{
    return work[1];
}

// FUN_00279b30
void func_00279b30(u32* work)
{
    s32 i;
    u32 dark;

    work[0] = 0;
    ((u8*)work)[0x122c] = 0xff;
    ((u8*)work)[0x122d] = 0xff;
    ((u8*)work)[0x122e] = 0xff;
    ((u8*)work)[0x122f] = 0xff;
    dark = func_0016f190(0xb8e);
    if (dark != 0) {
        func_001985b0(0xff, 0xff, 0xff, 0xff);
    } else {
        func_001985b0(0xf, 0x1f, 0x28, 0xff);
    }
    for (i = 0; i < 0x20; i++) {
        *(u32*)((u8*)work + i * 0x90 + 4) = 0;
    }
    sOpTailB = work;
}
