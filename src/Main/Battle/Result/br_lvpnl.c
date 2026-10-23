#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"

#include "Main/OpEd/op_fade_mid.h"
#include "Main/Battle/Result/br_res.h"
typedef int (*code)(); /* PC: unnamed varargs */
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
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
#pragma alias D_0096009C_abs D_0096009C
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
extern u32 func_00194b80(void *parent, u32 priority, const void *name,
                          void *update, void *destroy, void *work);
extern u32 func_00194e10(const void *name, u32 size, u32 a, u32 b,
                          void *update, void *destroy, u32 flags);
extern void func_00195020(u32 resource);
extern void func_0010a370(s32 channel, const char *message);
extern u32 func_00119a60(u32 id);
extern u32 func_00198590(void);
extern void func_001985b0(u8 r, u8 g, u8 b, u8 a);
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
extern void func_002791b0(u16 id);
extern void func_00279330(u16 id);
extern void brpParamSetUnlockedSkillLevel(u32 level);
extern void brpParamSetUnlockedSkillIndex(u32 index);
extern void func_00279510(s32 index, u32 value);
extern void func_00279580(s32 index, u32 value);
extern void func_002795f0(s32 index, u32 value);
extern void func_003b0170(u32 resource);
extern u32 func_003b0d70(u32 resource, s32 x, s32 y);
extern void func_003b0e20(u32 resource, u32 color);
extern void func_003b0e70(s32 mode);
extern void func_003b0e90(s32 mode);
extern u32 func_003b1360(u32 resource, s32 visible, s32 flags);
extern void func_003c7430(s32 value);
extern void func_003c7bc0(s32 channel, u32 value);
extern void func_003c7e20(s32 mode, s32 x, s32 y, u64 value, s32 a,
                           s32 b, s32 c);
extern u32 func_003c9ab0(u32 resource);
extern void func_003c9ba0(u32 stream, u32 resource);
extern void func_003c9cd0(u32 resource, s32 value);
extern void func_003c9d00(u32 resource, s32 value);
extern void func_003c9d80(u32 resource, s32 value);
extern void func_004d7f60(s32 state, u32 value);
extern void func_00521250(void *destination, const void *source, u32 size);
extern void func_005225a8(const void *message, ...);
extern void brLvpnlStartEntranceAnimation_y2(void);
extern void brLvpnlDisableDrawing_y2(void);
extern void brLvpnlEnableDrawing_y2(void);
extern u32 *DAT_007ce3c0;
extern u32 *DAT_007ce3c4;
extern u32 *DAT_007ce3c8;
extern u32 *DAT_007ce3cc;
extern u32 *DAT_007ce3d0;
#undef gOpWorkC0
#undef gOpWorkC4
#undef gOpWorkC8
#undef gOpWorkCC
#undef gOpWorkD0
#define gOpWorkC0 DAT_007ce3c0
#define gOpWorkC4 DAT_007ce3c4
#define gOpWorkC8 DAT_007ce3c8
#define gOpWorkCC DAT_007ce3cc
#define gOpWorkD0 DAT_007ce3d0
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
#define D_00960090 (*state)
#define D_0096009C (*quad)
#undef D_00960090
#undef D_0096009C


#pragma alias brLvpnlStartEntranceAnimation_y2 brLvpnlStartEntranceAnimation_y2
#pragma alias brLvpnlDisableDrawing_y2 brLvpnlDisableDrawing_y2
#pragma alias brLvpnlEnableDrawing_y2 brLvpnlEnableDrawing_y2


typedef struct
{
    u32 flags;
    u32 unused[0x183];
    u32 animationFrame;
    u32 animationMode;
} BrLvpnlWork;

enum
{
    BR_LVPNL_FLAG_ACTIVE = 1 << 0,
    BR_LVPNL_FLAG_ANIMATING = 1 << 1,
    BR_LVPNL_FLAG_VISIBLE = 1 << 2,
    BR_LVPNL_FLAG_DRAW_DISABLED = 1 << 3,
};

static BrLvpnlWork* sBrLvpnl; // DAT_007ce3c8
/* Retail helpers used by the opening/ending result state. */

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



// FUN_00275a90
void func_00275a90(void)
{
    u32 *work;
    u32 resource;
    OP_MATCH_ASSERT(gOpWorkC8 != NULL, 0x3b);
    work = (u32*)OP_WORK8;
    resource = brRes00234630(0);
    func_0021d3b0(work + 4, func_0021cca0(resource, 0));
    func_0021d3b0(work + 0x44, func_0021cca0(resource, 2));
    func_0021d3b0(work + 0x84, func_0021cca0(resource, 1));
    func_0021d3b0(work + 0xc4, func_0021cca0(resource, 3));
    resource = func_0021cca0(resource, 0xb);
    func_0021d3b0(work + 0x104, resource);
    func_0021e380(work + 0x144, resource, 1);
    func_002760f0();
    *work |= 1;
}

// FUN_00275bc0
void func_00275bc0(void)
{
    u32 *work;
    u32 flags;
    OP_MATCH_ASSERT(gOpWorkC8 != NULL, 0x3b);
    work = (u32 *)OP_WORK8;
    flags = work[0];
    if ((~flags & 1) != 0)
        return;
    if ((flags & 2) != 0)
    {
        switch (work[0x614 / 4])
        {
        case 0:
            if (((s32 *)work)[0x610 / 4] < 0x24)
                work[0x610 / 4]++;
            else
                work[0] &= ~2u;
            break;
        case 1:
            if (((s32 *)work)[0x610 / 4] < 0x21)
                work[0x610 / 4]++;
            else
                work[0] &= ~2u;
            break;
        }
    }
    func_002760f0();
}

// FUN_00275cb0
void func_00275cb0(void)
{
    code *state;
    code *quad;
    u32 *work;
    u32 resource;
    OP_MATCH_ASSERT(gOpWorkC8 != NULL, 0x3b);
    work = (u32 *)OP_WORK8;
    resource = brRes00234630(0);
    if ((~*work & 1) != 0)
        return;
    if ((*work & 8) != 0)
        return;
    state = (code *)&D_00960090_abs;
    (*state)(8, 0);
    (*state)(6, 0);
    (*state)(9, 2);
    (*state)(9, 1);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x44);
    (*state)(1, func_0021cce0(func_0021cca0(resource, 0xb)));
    quad = (code *)&D_0096009C_abs;
    (*quad)(work + 0x104, 4, 0, 1, 2);
    (*quad)(work + 0x104, 4, 0, 2, 3);
    (*quad)(work + 0x144, 4, 0, 1, 2);
    (*quad)(work + 0x144, 4, 0, 2, 3);
    (*state)(9, 2);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x44);
    (*state)(1, func_0021cce0(func_0021cca0(resource, 0)));
    (*quad)(work + 4, 4, 0, 1, 2);
    (*quad)(work + 4, 4, 0, 2, 3);
    func_004d7f60(3, 0x71801);
    func_004d7f60(2, 0x48);
    (*state)(1, func_0021cce0(func_0021cca0(resource, 2)));
    (*quad)(work + 0x44, 4, 0, 1, 2);
    (*quad)(work + 0x44, 4, 0, 2, 3);
    (*state)(9, 2);
    func_004d7f60(3, 0x717fb);
    func_004d7f60(2, 0x44);
    (*state)(1, func_0021cce0(func_0021cca0(resource, 1)));
    (*quad)(work + 0x84, 4, 0, 1, 2);
    (*quad)(work + 0x84, 4, 0, 2, 3);
    func_004d7f60(3, 0x71801);
    func_004d7f60(2, 0x48);
    (*state)(1, func_0021cce0(func_0021cca0(resource, 3)));
    (*quad)(work + 0xc4, 4, 0, 1, 2);
    (*quad)(work + 0xc4, 4, 0, 2, 3);
}




















/* W455 reconstruction: retail uses separate first- and second-stage alpha
 * values for panel colors and converts the final 0xb resource dimensions
 * through the decoded result frame. Implemented those accesses; 8 bytes remain
 * in the callee-saved frame/layout difference. */
// FUN_002760f0
#ifndef PC_BUILD
asm void func_002760f0(void)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b6d8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ef10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b6d8
  .word 0x0000202d
  .word 0x0c08d18c
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e030000
  .word 0x30620002
  .word 0x1040002d
  .word 0x00000000
  .word 0x8e030614
  .word 0x24020001
  .word 0x10620025
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x8e020610
  .word 0x04410006
  .word 0x00000000
  .word 0x4480b000
  .word 0x00000000
  .word 0x4600b546
  .word 0x10000025
  .word 0x00000000
  .word 0x28410006
  .word 0x10200011
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46160001
  .word 0x46000d42
  .word 0x10000012
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x4480a800
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x10000009
  .word 0x00000000
  .word 0x30620004
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480b000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034300
  .word 0x44830000
  .word 0x00000000
  .word 0x46150000
  .word 0xe7a00040
  .word 0xafa00044
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00048
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0004c
  .word 0x26040010
  .word 0x27a50040
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2006c
  .word 0xa3a2006d
  .word 0xa3a2006e
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
  .word 0xa3a3006f
  .word 0x26040010
  .word 0x27a5006c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c087328
  .word 0x00000000
  .word 0x24030167
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46150000
  .word 0xe7a00040
  .word 0xafa00044
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00048
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0004c
  .word 0x26040210
  .word 0x27a50040
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2006c
  .word 0xa3a2006d
  .word 0xa3a2006e
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
  .word 0xa3a3006f
  .word 0x26040210
  .word 0x27a5006c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420002
  .word 0x1040006b
  .word 0x00000000
  .word 0x8e030614
  .word 0x24020001
  .word 0x10620037
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000064
  .word 0x00000000
  .word 0x8e020610
  .word 0x28410003
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b000
  .word 0x1000005d
  .word 0x00000000
  .word 0x28410006
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442fffd
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
  .word 0x1000004d
  .word 0x00000000
  .word 0x28410006
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x10000046
  .word 0x00000000
  .word 0x28410024
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442fffa
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
  .word 0x46010581
  .word 0x10000035
  .word 0x00000000
  .word 0x4480b000
  .word 0x10000032
  .word 0x00000000
  .word 0x8e020610
  .word 0x04410004
  .word 0x00000000
  .word 0x4480b000
  .word 0x1000002c
  .word 0x00000000
  .word 0x28410003
  .word 0x1020000d
  .word 0x00000000
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
  .word 0x1000001d
  .word 0x00000000
  .word 0x28410003
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x10000016
  .word 0x00000000
  .word 0x28410021
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442fffd
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
  .word 0x46010581
  .word 0x10000005
  .word 0x00000000
  .word 0x4480b000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480b000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034300
  .word 0xafa30040
  .word 0xafa00044
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00048
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0004c
  .word 0x26040110
  .word 0x27a50040
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2006c
  .word 0xa3a2006d
  .word 0xa3a2006e
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
  .word 0xa3a3006f
  .word 0x26040110
  .word 0x27a5006c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050003
  .word 0x0c087328
  .word 0x00000000
  .word 0x24030167
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00040
  .word 0xafa00044
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00048
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0004c
  .word 0x26040310
  .word 0x27a50040
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2006c
  .word 0xa3a2006d
  .word 0xa3a2006e
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
  .word 0xa3a3006f
  .word 0x26040310
  .word 0x27a5006c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0220202d
  .word 0x2405000b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040882d
  .word 0xafa00040
  .word 0xafa00044
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00048
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0004c
  .word 0x26040410
  .word 0x27a50040
  .word 0x0c087638
  .word 0x00000000
  .word 0xc620000c
  .word 0x46800020
  .word 0xe7a00040
  .word 0xafa00044
  .word 0x2402028a
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00048
  .word 0xc6200010
  .word 0x46800020
  .word 0xe7a0004c
  .word 0x26040510
  .word 0x27a50040
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2006c
  .word 0xa3a2006d
  .word 0xa3a2006e
  .word 0xa3a2006f
  .word 0x26040410
  .word 0x27a5006c
  .word 0x0c087654
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2006c
  .word 0xa3a2006d
  .word 0xa3a2006e
  .word 0xa3a2006f
  .word 0x26040510
  .word 0x27a5006c
  .word 0x0c087654
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002767e0
void brLvpnlStartEntranceAnimation(void)
{
    BrLvpnlWork* work;

    K_ASSERT(sBrLvpnl != NULL, 0x3b);
    work = sBrLvpnl;
    if (work->flags & BR_LVPNL_FLAG_VISIBLE) {
        work->animationMode = 1;
        work->animationFrame = 0;
        work->flags |= BR_LVPNL_FLAG_ANIMATING;
    } else {
        work->animationMode = 0;
        work->animationFrame = 0;
        work->flags |= BR_LVPNL_FLAG_ANIMATING;
        work->flags |= BR_LVPNL_FLAG_VISIBLE;
    }
}

// FUN_00276870
void brLvpnlDisableDrawing(void)
{
    K_ASSERT(sBrLvpnl != NULL, 0x3b);
    sBrLvpnl->flags |= BR_LVPNL_FLAG_DRAW_DISABLED;
}

// FUN_002768c0
void brLvpnlEnableDrawing(void)
{
    K_ASSERT(sBrLvpnl != NULL, 0x3b);
    sBrLvpnl->flags &= ~BR_LVPNL_FLAG_DRAW_DISABLED;
}

// FUN_00276910
void func_00276910(u32 *work)
{
    *work = 0;
    gOpWorkCC = work;
}

// FUN_00276920
void func_00276920(void)
{
    gOpWorkCC = NULL;
}













