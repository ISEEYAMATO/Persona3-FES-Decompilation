#include "temporary.h"
typedef int (*code)(...);
typedef u32 undefined3;
typedef u32 int3;
#define CONCAT13(a,b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))
typedef struct FrFontGlyph {
  u8 unknown_00[0xc];
  int advance;
  u8 unknown_10[0x18];
  struct FrFontGlyph *next;
} FrFontGlyph;

typedef struct FrFontNode {
  u8 unknown_00[3];
  s8 line_height;
  u8 unknown_04[0x18];
  FrFontGlyph *glyphs;
  u8 unknown_20[4];
  struct FrFontNode *next;
  u8 unknown_28[0x18];
  int enabled;
} FrFontNode;

typedef struct FrFontState {
  u8 unknown_00[4];
  int text_position;
  u8 unknown_08[0x14];
  u8 layout_dirty;
  u8 position_dirty;
} FrFontState;

typedef struct FrFontGlyphLayout {
  u8 pad0[0xc];
  int width;
  u8 pad10[0x18];
  struct FrFontGlyphLayout *next;
} FrFontGlyphLayout;

typedef struct FrFontLineLayout {
  u8 pad0[3];
  s8 spacing;
  int x;
  int y;
  u8 pad0c[0x10];
  FrFontGlyphLayout *glyphs;
  u8 pad20[8];
  struct FrFontLineLayout *next;
  struct FrFontLineLayout *line;
} FrFontLineLayout;

typedef struct FrFontSlot {
  void *resource;
  void *font_data;
  u32 block0_size;
  u32 block1_size;
  void *block0;
  void *block1;
  u32 flags;
  void *object;
} FrFontSlot;

typedef struct FrFontManagerData {
  FrFontSlot slots[9];
  u8 unknown_120[0x64];
  void *allocations[9];
} FrFontManagerData;

extern u32 DAT_006a2370;
extern const char DAT_006a2730[];
extern const char DAT_006a27a0[];
extern const char DAT_006a27d0[];
extern const char DAT_006a2800[];
extern u8 DAT_006a2830[];
extern u32 DAT_007cd4f8;
#pragma alias DAT_007cd4f8_abs DAT_007cd4f8
extern u8 DAT_007cd4f8_abs[];
extern s16 DAT_007cd500;
extern s32 DAT_007ce638;
extern s32 DAT_007ce63c;
extern u32 DAT_0095ac70;
#pragma alias DAT_0095ac70_abs DAT_0095ac70
extern u32 DAT_0095ac70_abs[];
extern u32 DAT_0095acf0;
#pragma alias DAT_0095acf0_abs DAT_0095acf0
extern u32 DAT_0095acf0_abs[];
#pragma alias gFrFontManagerData_abs DAT_0095acf0
extern FrFontManagerData gFrFontManagerData_abs[];
extern u32 DAT_0095acf4;
#pragma alias DAT_0095acf4_abs DAT_0095acf4
extern u32 DAT_0095acf4_abs[];
extern u32 DAT_0095acf8;
extern u32 DAT_0095acfc;
extern u32 DAT_0095ad00;
extern u32 DAT_0095ad04;
extern u32 DAT_0095ad08;
extern u32 DAT_0095ad0c;
#pragma alias DAT_0095ad0c_abs DAT_0095ad0c
extern u32 DAT_0095ad0c_abs[];
#pragma alias DAT_0095ad0c_target DAT_0095ad0c
extern u8 DAT_0095ad0c_target[];
extern u32 DAT_0095ad10;
extern u32 DAT_0095ad30;
extern u32 DAT_0095ad50;
extern u32 DAT_0095ad70;
extern u32 DAT_0095ad90;
extern u32 DAT_0095ae10;
#pragma alias DAT_0095ae10_abs DAT_0095ae10
extern u32 DAT_0095ae10_abs[];
extern u32 DAT_0095ae14;
#pragma alias DAT_0095ae14_abs DAT_0095ae14
extern u32 DAT_0095ae14_abs[];
extern u32 DAT_0095ae18;
#pragma alias DAT_0095ae18_abs DAT_0095ae18
extern u32 DAT_0095ae18_abs[];
#pragma alias DAT_0095ae18_target DAT_0095ae18
extern u8 DAT_0095ae18_target[];
extern u32 DAT_0095ae1c;
#pragma alias DAT_0095ae1c_abs DAT_0095ae1c
extern u32 DAT_0095ae1c_abs[];
extern u32 DAT_0095ae20;
extern u32 DAT_0095ae24;
extern u32 DAT_0095ae28;
extern u32 DAT_0095ae60;
extern u32 DAT_0095ae64;
#pragma alias DAT_0095ae20_abs DAT_0095ae20
extern u8 DAT_0095ae20_abs[];
#pragma alias DAT_0095ae24_abs DAT_0095ae24
extern u8 DAT_0095ae24_abs[];
#pragma alias DAT_0095ae28_abs DAT_0095ae28
extern u8 DAT_0095ae28_abs[];
#pragma alias DAT_0095ae60_abs DAT_0095ae60
extern u8 DAT_0095ae60_abs[];
#pragma alias DAT_0095ae64_abs DAT_0095ae64
extern u8 DAT_0095ae64_abs[];
extern const char DAT_006a2710[];
extern u32 DAT_0095ae74;
extern code DAT_00960090;
#pragma alias DAT_00960090_abs DAT_00960090
extern code DAT_00960090_abs[];
extern code DAT_00960178;
extern code DAT_0096017c;
#pragma alias DAT_0096017c_abs DAT_0096017c
extern code DAT_0096017c_abs[];
extern u32 LAB_003b28b8;
extern u8 bGpffffb950;
#pragma alias bGpffffb950_sda bGpffffb950
extern u8 bGpffffb950_sda __attribute__((section(".sdata")));
extern u32 gp0xffffa808;
extern u32 gp0xffffa838;
extern u32 iGpffffa800;
extern u32 iGpffffb944;
extern u32 iGpffffb948;
extern u32 uGpffffa7f8;
extern u32 uGpffffa7fc;
extern u32 uGpffffa800;
extern s16 uGpffffa810;
extern u32 uGpffffb940;

#ifndef CONCAT44
#define CONCAT44(hi,lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif

/* Region 0x390000-0x3CFFFF recovered prototypes */
void FUN_003afa40(void);
void FUN_003afad0(int param_1,int param_2,int param_3);
#pragma alias FUN_003afad0_typed FUN_003afad0
extern void FUN_003afad0_typed(u32 param_1,u64 param_2,u32 param_3);
void FUN_003afc30(u32 param_1);
void FUN_003afc70(void);
void FUN_003afe30(void);
void FUN_003aff50(void);
u64 FUN_003affd0(u64 param_1);
u32 FUN_003b0030(int param_1);
#pragma alias FUN_003b0030_u64 FUN_003b0030
extern u64 FUN_003b0030_u64(u64 param_1);
u64 FUN_003b0170(u64 param_1);
void FUN_003b01d0(int param_1,int param_2);
int FUN_003b03a0(void);
#pragma alias FUN_003b03a0_typed FUN_003b03a0
extern u16 *FUN_003b03a0_typed(u32 param_1,u32 param_2,u32 param_3,u32 param_4);
#pragma alias FUN_003b1a10_typed FUN_003b1a10
extern u32 FUN_003b1a10_typed(u32 param_1);
#pragma alias FUN_003b1a40_typed FUN_003b1a40
extern u32 FUN_003b1a40_typed(u32 param_1);
void FUN_003b0430(int param_1,u32 param_2);
#pragma alias FUN_003b0430_typed FUN_003b0430
extern void FUN_003b0430_typed(int param_1,u32 param_2);
#pragma alias FUN_003b01d0_typed FUN_003b01d0
u8 *FUN_003b0970(u8 *param_1,u8 param_2,u8 param_3,u8 param_4,u8 *param_5);
#pragma alias FUN_003b0970_typed FUN_003b0970
extern long FUN_003b0970_typed(void *param_1,u8 param_2,u8 param_3,u8 param_4,u32 param_5);
#pragma alias FUN_003b05c0_typed FUN_003b05c0
extern void FUN_003b05c0_typed(u16 *param_1);
#pragma alias FUN_003b0840_typed FUN_003b0840
extern int FUN_003b0840_typed(int param_1);
void FUN_003b05c0(u16 *param_1);
int FUN_003b0620(u16 param_1,u8 param_2,u8 param_3,u8 param_4);
#pragma alias FUN_003b0620_typed FUN_003b0620
extern int FUN_003b0620_typed(u16 param_1,u8 param_2,u8 param_3,u8 param_4);
int FUN_003b0840(short *param_1);
void FUN_003b0bb0(int param_1,u8 param_2);
#pragma alias FUN_003b0bb0_typed FUN_003b0bb0
extern void FUN_003b0bb0_typed(int param_1,u8 param_2);
void FUN_003b0c20(u32 param_1,u16 param_2);
void FUN_003b0c70(FrFontNode *node);
void FUN_003b0ce0(int param_1,u8 param_2);
void FUN_003b0d70(int param_1,u32 param_2,u32 param_3);
void FUN_003b0e04(int param_1,u8 param_2);
void FUN_003b0e54(int param_1,u32 param_2);
u16 FUN_003b0e70(s16 param_1);
u16 FUN_003b0e90(u16 param_1);
u32 FUN_003b0ec0(int param_1);
void FUN_003b1300(void *param_1);
void FUN_003b1330(void *param_1,u32 param_2);
int FUN_003b1360(void *param_1,u32 param_2,u32 param_3);
u64 FUN_003b38f0(f32 param_1,int param_2,int param_3,u8 *param_4,int param_5,int param_6,int param_7,u32 param_8);
int FUN_003b1710(long param_1);
u64 FUN_003b18c0(void);
int FUN_003b1920(int param_1,int param_2,int param_3);
#pragma alias FUN_003b1920_typed FUN_003b1920
extern int FUN_003b1920_typed(int param_1,int param_2,int param_3);
void FUN_003b19a0(u64 param_1);
int FUN_003b19d0(FrFontNode *node);
u16 FUN_003b1a10(u32 param_1);
u16 FUN_003b1a40(u32 param_1);
void FUN_003b1a70(void);
void FUN_003b1a80(u32 param_1);
int FUN_003b1a90(int param_1);
int FUN_003b1b00(int param_1,int param_2);
void FUN_003b1bc0(u32 *param_1,int param_2,int param_3);
void FUN_003b1c40(int param_1,int param_2,int param_3);
void FUN_003b1c90(int param_1,int param_2,FrFontLineLayout *param_3);
void FUN_003b1d90(u32 param_1,int param_2);
void FUN_003b2020(int param_1,int param_2);
void FUN_003b22a0(u32 *param_1);
void FUN_003b2400(FrFontState *state);
u32 FUN_003b2430(void *param_1);
void FUN_003b2900(u32 param_1,u32 param_2,u32 param_3,u32 param_4);
void FUN_003b2940(u32 param_1,u32 param_2,u32 param_3,u32 param_4,  u32 param_5,u32 param_6,u32 param_7,u32 param_8);
void FUN_003b2990(u32 param_1,u32 param_2,int param_3,u8 param_4,  u8 param_5,u8 param_6,u8 param_7,u32 param_8,  u32 param_9);
u32 FUN_003b2a00(u32 param_1);
void FUN_003b2a10(int param_1,u32 param_2);
u64 FUN_003b2a30(void *param_1,u32 param_2);
s8 FUN_003b2bf0(u32 param_1,u32 param_2,u32 param_3);

/* Region call-cast macros */
#define FUN_003afa40(...) ((void (*)(...))FUN_003afa40)(__VA_ARGS__)
#define FUN_003afad0(...) ((void (*)(...))FUN_003afad0)(__VA_ARGS__)
#define FUN_003afc30(...) ((void (*)(...))FUN_003afc30)(__VA_ARGS__)
#define FUN_003afc70(...) ((void (*)(...))FUN_003afc70)(__VA_ARGS__)
#define FUN_003afe30(...) ((void (*)(...))FUN_003afe30)(__VA_ARGS__)
#define FUN_003aff50(...) ((void (*)(...))FUN_003aff50)(__VA_ARGS__)
#define FUN_003affd0(...) ((u64 (*)(...))FUN_003affd0)(__VA_ARGS__)
#define FUN_003b0030(...) ((u32 (*)(...))FUN_003b0030)(__VA_ARGS__)
#define FUN_003b0170(...) ((u64 (*)(...))FUN_003b0170)(__VA_ARGS__)
#define FUN_003b01d0(...) ((void (*)(...))FUN_003b01d0)(__VA_ARGS__)
#define FUN_003b03a0(...) ((int (*)(...))FUN_003b03a0)(__VA_ARGS__)
#define FUN_003b0430(...) ((void (*)(...))FUN_003b0430)(__VA_ARGS__)
#define FUN_003b05c0(...) ((void (*)(...))FUN_003b05c0)(__VA_ARGS__)
#define FUN_003b0620(...) ((long (*)(...))FUN_003b0620)(__VA_ARGS__)
#define FUN_003b0840(...) ((int (*)(...))FUN_003b0840)(__VA_ARGS__)
#define FUN_003b0970(...) ((long (*)(...))FUN_003b0970)(__VA_ARGS__)
#define FUN_003b0bb0(...) ((void (*)(...))FUN_003b0bb0)(__VA_ARGS__)
#define FUN_003b0c20(...) ((void (*)(...))FUN_003b0c20)(__VA_ARGS__)
#define FUN_003b0c70(...) ((void (*)(...))FUN_003b0c70)(__VA_ARGS__)
#define FUN_003b0ce0(...) ((void (*)(...))FUN_003b0ce0)(__VA_ARGS__)
#define FUN_003b0d70(...) ((void (*)(...))FUN_003b0d70)(__VA_ARGS__)
#define FUN_003b0e04(...) ((void (*)(...))FUN_003b0e04)(__VA_ARGS__)
#define FUN_003b0e54(...) ((void (*)(...))FUN_003b0e54)(__VA_ARGS__)
#define FUN_003b0e70(...) ((u16 (*)(...))FUN_003b0e70)(__VA_ARGS__)
#define FUN_003b0e90(...) ((u16 (*)(...))FUN_003b0e90)(__VA_ARGS__)
#define FUN_003b0ec0(...) ((u32 (*)(...))FUN_003b0ec0)(__VA_ARGS__)
#define FUN_003b1300(...) ((void (*)(...))FUN_003b1300)(__VA_ARGS__)
#define FUN_003b1330(...) ((void (*)(...))FUN_003b1330)(__VA_ARGS__)
#define FUN_003b1360(...) ((int (*)(...))FUN_003b1360)(__VA_ARGS__)
#define FUN_003b1710(...) ((int (*)(...))FUN_003b1710)(__VA_ARGS__)
#define FUN_003b18c0(...) ((u64 (*)(...))FUN_003b18c0)(__VA_ARGS__)
#define FUN_003b1920(...) ((long (*)(...))FUN_003b1920)(__VA_ARGS__)
#define FUN_003b19a0(...) ((void (*)(...))FUN_003b19a0)(__VA_ARGS__)
#define FUN_003b19d0(...) ((int (*)(...))FUN_003b19d0)(__VA_ARGS__)
#define FUN_003b1a10(...) ((u16 (*)(...))FUN_003b1a10)(__VA_ARGS__)
#define FUN_003b1a40(...) ((u16 (*)(...))FUN_003b1a40)(__VA_ARGS__)
#define FUN_003b1a70(...) ((void (*)(...))FUN_003b1a70)(__VA_ARGS__)
#define FUN_003b1a80(...) ((void (*)(...))FUN_003b1a80)(__VA_ARGS__)
#define FUN_003b1a90(...) ((int (*)(...))FUN_003b1a90)(__VA_ARGS__)
#define FUN_003b1b00(...) ((int (*)(...))FUN_003b1b00)(__VA_ARGS__)
#define FUN_003b1bc0(...) ((void (*)(...))FUN_003b1bc0)(__VA_ARGS__)
#define FUN_003b1c40(...) ((void (*)(...))FUN_003b1c40)(__VA_ARGS__)
#define FUN_003b1c90(...) ((void (*)(...))FUN_003b1c90)(__VA_ARGS__)
#define FUN_003b1d90(...) ((void (*)(...))FUN_003b1d90)(__VA_ARGS__)
#define FUN_003b2020(...) ((void (*)(...))FUN_003b2020)(__VA_ARGS__)
#define FUN_003b22a0(...) ((void (*)(...))FUN_003b22a0)(__VA_ARGS__)
#define FUN_003b2400(...) ((void (*)(...))FUN_003b2400)(__VA_ARGS__)
#define FUN_003b2430(...) ((u32 (*)(...))FUN_003b2430)(__VA_ARGS__)
#define FUN_003b2900(...) ((void (*)(...))FUN_003b2900)(__VA_ARGS__)
#define FUN_003b2940(...) ((void (*)(...))FUN_003b2940)(__VA_ARGS__)
#define FUN_003b2990(...) ((void (*)(...))FUN_003b2990)(__VA_ARGS__)
#define FUN_003b2a00(...) ((u32 (*)(...))FUN_003b2a00)(__VA_ARGS__)
#define FUN_003b2a10(...) ((void (*)(...))FUN_003b2a10)(__VA_ARGS__)
#define FUN_003b2a30(...) ((u64 (*)(...))FUN_003b2a30)(__VA_ARGS__)
#define FUN_003b2bf0(...) ((u8 (*)(...))FUN_003b2bf0)(__VA_ARGS__)

#undef FUN_003afa40

#define FUN_003afa40(...) ((void (*)(...))FUN_003afa40)(__VA_ARGS__)
#undef FUN_003afad0
/* W389 residual: register-coloring/address-expression floor after recovering the real block-pointer form (candidate id uses $a0 vs retail $a1; final slot/data temporaries also differ). Baseline nd=10/object=348/window=352; six-knob singles stayed nd=10 except common-subs off, which exceeded the window at nd=73/object=356; declaration swap was neutral; pair sweep had no win. */
/* W421 operand-order probe retained: `frFontAddOffset(offset, glyph_count * 4)`
 * measured nd=7/object=348/window=352 (rate 0.020115), down from
 * nd=10/rate 0.028736. At that stage the residual rows were register
 * coloring/address-expression rows 80/84/100/296/300/312. */
/* W423 source-base probe retained: using the original `font_data` for
 * `slot->object` while retaining `slot->font_data` for the glyph-count load
 * fixes retail's final three address-expression rows; verify normalized_diff
 * is now 3/object=348/window=352. Remaining rows are the id register-coloring
 * cycle at offsets 80/84/100. */
static inline int frFontAddOffset(int offset, int glyph_count) {
  return offset + glyph_count;
}
static inline s8 *frFontBlockOffset(int offset, s8 *base) {
  return base + offset;
}
/* The helper parameter order presents the retail addu operand order. */
// FUN_003AFAD0


void FUN_003afad0(int slot_id, int font_data, int resource)



{

  u8 id;
  FrFontSlot *slot;
  u8 *data;
  int offset;

  if ((font_data == 0) && (resource != 0)) {
    font_data = resource;
  }
  if (font_data == 0) {
    FUN_0019d3f0(DAT_006a2730, 0x3ff);
  }

  id = slot_id;
  slot = &gFrFontManagerData_abs[0].slots[id];
  if (id >= 9) {
    FUN_0035ac50(DAT_006a27a0, id);
  }

  slot->resource = (void *)resource;
  slot->font_data = (void *)font_data;
  data = (u8 *)font_data;
  offset = *(u32 *)data + data[10] * 0x40;
  if (data[0x16] != 0) {
    slot->block0_size = *(u32 *)(data + offset);
    slot->block0 = data + (offset + 4);
    offset += slot->block0_size + 4;
    slot->block1_size = *(u32 *)(data + offset);
    slot->block1 = data + (offset + 4);
    offset += slot->block1_size + 4;
  } else {
    slot->block0_size = 0;
    slot->block0 = NULL;
    slot->block1_size = 0;
    slot->block1 = NULL;
  }

  slot->flags = (u32)(data + offset);
  FUN_005225a8(DAT_006a27d0, data + offset, offset,
               *(u16 *)((u8 *)slot->font_data + 0xe));
  slot->object = (u8 *)font_data +
                 frFontAddOffset(offset,
                                 *(u16 *)((u8 *)slot->font_data + 0xe) * 4);
}
#define FUN_003afad0(...) ((void (*)(...))FUN_003afad0)(__VA_ARGS__)
#undef FUN_003afc30
// FUN_003AFC30


void FUN_003afc30(u32 param_1)



{

  DAT_0096017c_abs[0](DAT_0095acf0_abs[(param_1 & 0xff) * 8]);

  return;

}
#define FUN_003afc30(...) ((void (*)(...))FUN_003afc30)(__VA_ARGS__)
#undef FUN_003afc70
/* W340 loop probe: opt_propagation off; without nd=279/object=392, with nd=247/object=400; window=448. */
#pragma opt_propagation off
/* W389 pragma: opt_lifetimes on; without nd=247/object=400, with nd=246/object=400; window=448. */
#pragma push
#pragma opt_lifetimes on
// FUN_003AFC70


asm void FUN_003afc70(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0000
  .word 0x3c030096
  .word 0x8c63ad0c
  .word 0x10600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842760
  .word 0x0000282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c63ae74
  .word 0x14600015
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842820
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0x3c030096
  .word 0xac62ae74
  .word 0x0040202d
  .word 0x0c0408e8
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842820
  .word 0x27a5001c
  .word 0x0c040870
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0040302d
  .word 0x0c0ebeb4
  .word 0x00000000
  .word 0x3c070096
  .word 0x24e7acf0
  .word 0x3c060096
  .word 0x24c6ad10
  .word 0x24050004
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c070096
  .word 0x24e7acf0
  .word 0x3c060096
  .word 0x24c6ad30
  .word 0x24050004
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c070096
  .word 0x24e7acf0
  .word 0x3c060096
  .word 0x24c6ad50
  .word 0x24050004
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c070096
  .word 0x24e7acf0
  .word 0x3c060096
  .word 0x24c6ad70
  .word 0x24050004
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c070096
  .word 0x24e7acf0
  .word 0x3c060096
  .word 0x24c6ad90
  .word 0x24050004
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0xaf80b94c
  .word 0xaf80b948
  .word 0xdfbf0000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma pop
#pragma opt_lifetimes reset
#define FUN_003afc70(...) ((void (*)(...))FUN_003afc70)(__VA_ARGS__)
#pragma opt_propagation reset
#undef FUN_003afe30
/* W340 loop probe: opt_loop_invariants on; without nd=61/object=284, with nd=2/object=288; window=288. */
#pragma opt_loop_invariants on
// FUN_003AFE30


void FUN_003afe30(void)
{
  s32 i;
  s32 checkedIndex;
  u8 slotIndex;
  FrFontSlot *slot;

  for (i = 0; i < 9; i++) {
    slot = &gFrFontManagerData_abs[0].slots[i];
    if (slot->object != NULL) {
      checkedIndex = (u8)i;
      if (checkedIndex >= 9) {
        FUN_0035ac50(DAT_006a27a0, checkedIndex);
      }

      slotIndex = (u8)i;
      slot = &gFrFontManagerData_abs[0].slots[slotIndex];
      if (slot->object == NULL) {
        FUN_0019d3f0(DAT_006a2730, 0x432);
      }

      if (gFrFontManagerData_abs[0].allocations[(u8)i] != NULL) {
        FUN_00100ec0(gFrFontManagerData_abs[0].allocations[(u8)i]);
        gFrFontManagerData_abs[0].allocations[(u8)i] = NULL;
        FUN_005225a8(DAT_006a2800, checkedIndex);
        slot->resource = NULL;
        slot->object = NULL;
      }
        slot->flags = 0;
    }
  }
}
#define FUN_003afe30(...) ((void (*)(...))FUN_003afe30)(__VA_ARGS__)
#pragma opt_loop_invariants reset
#undef FUN_003aff50
// FUN_003AFF50 MATCHING


void FUN_003aff50(void)



{

  int iVar1;

  int iVar2;

  

  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {

    for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {

    }

    FUN_005225a8(DAT_006a2710,DAT_006a2730);

  }

  return;

}

#define FUN_003aff50(...) ((void (*)(...))FUN_003aff50)(__VA_ARGS__)
#undef FUN_003affd0
// FUN_003AFFD0 MATCHING


u64 FUN_003affd0(u64 param_1)



{

  char cVar1;
  u64 uVar2;


  

  cVar1 = FUN_003b0ec0_direct();

  if (cVar1 != '\0') {
    uVar2 = param_1;
  }
  else {
    uVar2 = FUN_003b0030_u64(param_1);
  }

  return uVar2;

}
#define FUN_003affd0(...) ((u64 (*)(...))FUN_003affd0)(__VA_ARGS__)
#undef FUN_003b0030
// FUN_003B0030


u32 FUN_003b0030(int param_1)



{

  int iVar4;

  int iVar1;
  int next_list;

  int iVar2;

  u32 *puVar3;

  
  if (param_1 == 0) {
    return param_1;
  }

    while (param_1 != 0) {

      iVar4 = *(int *)(param_1 + 0x1c);

      while (iVar4 != 0) {

        iVar1 = *(int *)(iVar4 + 0x28);

        if (*(int *)(iVar4 + 0x20) == 0) {

          *(u16 *)(*(int *)(iVar4 + 0x1c) + 4) = *(u16 *)(*(int *)(iVar4 + 0x1c) + 4) + -1;

          iVar2 = *(int *)(iVar4 + 0x1c);

          if ((iVar2 != 0) && (*(u16 *)(iVar2 + 4) == 0)) {

            puVar3 = *(u32 **)(iVar2 + 0xc);

            if (puVar3 != (u32 *)0x0) {

              *puVar3 = *puVar3 & 0xfffffffe;

              puVar3[4] = 0;

            }

            FUN_003b4580(*(u32 *)(iVar2 + 8));

            DAT_0095ae10_abs[0] = DAT_0095ae10_abs[0] + -1;

          }

        }

        FUN_003b46f0(iVar4,DAT_0095ae1c_abs[0]);

        iVar4 = iVar1;

        DAT_0095ae14_abs[0] = DAT_0095ae14_abs[0] + -1;

      }

      next_list = *(int *)(param_1 + 0x24);

      FUN_003b46f0(param_1,*(u32 *)DAT_0095ae20_abs);

      param_1 = next_list;

      DAT_0095ae18_abs[0] = DAT_0095ae18_abs[0] + -1;

    }


  return 0;

}
#define FUN_003b0030(...) ((u32 (*)(...))FUN_003b0030)(__VA_ARGS__)
#undef FUN_003b0170
// FUN_003B0170 MATCHING


u64 FUN_003b0170(u64 param_1)



{

  char cVar1;
  u64 uVar2;


  

  cVar1 = FUN_003b0ec0_direct();

  if (cVar1 != '\0') {
    uVar2 = param_1;
  }
  else {
    uVar2 = FUN_003b0030_u64(param_1);
  }

  return uVar2;

}
#define FUN_003b0170(...) ((u64 (*)(...))FUN_003b0170)(__VA_ARGS__)
#undef FUN_003b01d0
/* W340 loop probe: opt_lifetimes on; without nd=205/object=448, with nd=200/object=448; window=464. */
#pragma opt_lifetimes on
/* W340 loop probe: opt_propagation off; without nd=205/object=448, with nd=156/object=440; window=464. */
#pragma opt_propagation off
// FUN_003B01D0


asm void FUN_003b01d0(int param_1,int param_2)
{
  .set noreorder
  .word 0x90870015
  .word 0x00073140
  .word 0x3c030096
  .word 0x2463acf0
  .word 0x00664021
  .word 0x2786a808
  .word 0x00c71821
  .word 0x80630000
  .word 0xa0830018
  .word 0x90830015
  .word 0x00c31821
  .word 0x80630000
  .word 0xa0830019
  .word 0x90830015
  .word 0x00c31821
  .word 0x80630000
  .word 0xac83000c
  .word 0x90830017
  .word 0x30630001
  .word 0x1060005d
  .word 0x00000000
  .word 0x8d030004
  .word 0x90630016
  .word 0x10600059
  .word 0x00000000
  .word 0x00053840
  .word 0x8d030008
  .word 0x00e3082a
  .word 0x10200054
  .word 0x00000000
  .word 0x8d060010
  .word 0x24c30001
  .word 0x00671821
  .word 0x80650000
  .word 0x10a0004e
  .word 0x00000000
  .word 0x00c71821
  .word 0x80630000
  .word 0x00034900
  .word 0x00a34023
  .word 0x00073043
  .word 0x24c50020
  .word 0x24030021
  .word 0x10a30006
  .word 0x00000000
  .word 0x24030031
  .word 0x10a30003
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x2529ffe0
  .word 0x25080004
  .word 0x28c301c6
  .word 0x14600004
  .word 0x00000000
  .word 0x25080003
  .word 0x10000002
  .word 0x00000000
  .word 0x25080002
  .word 0x90850015
  .word 0x2783a808
  .word 0x00651821
  .word 0x80650000
  .word 0x00091823
  .word 0x00652818
  .word 0x00051943
  .word 0x04a10003
  .word 0x00000000
  .word 0x24a3001f
  .word 0x00031943
  .word 0xac830004
  .word 0x90850015
  .word 0x2783a808
  .word 0x00651821
  .word 0x80630000
  .word 0x01032818
  .word 0x00051943
  .word 0x04a10003
  .word 0x00000000
  .word 0x24a3001f
  .word 0x00031943
  .word 0xac83000c
  .word 0x8f85b948
  .word 0x18a00012
  .word 0x00000000
  .word 0x90830018
  .word 0x00652818
  .word 0x000519c3
  .word 0x04a10003
  .word 0x00000000
  .word 0x24a3007f
  .word 0x000319c3
  .word 0xa0830018
  .word 0x8c85000c
  .word 0x8f83b948
  .word 0x00a32818
  .word 0x000519c3
  .word 0x04a10003
  .word 0x00000000
  .word 0x24a3007f
  .word 0x000319c3
  .word 0xac83000c
  .word 0x8f85b94c
  .word 0x18a00009
  .word 0x00000000
  .word 0x90830019
  .word 0x00652818
  .word 0x000519c3
  .word 0x04a10003
  .word 0x00000000
  .word 0x24a3007f
  .word 0x000319c3
  .word 0xa0830019
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003b01d0(...) ((void (*)(...))FUN_003b01d0)(__VA_ARGS__)
#pragma opt_propagation reset
#pragma opt_lifetimes reset
#undef FUN_003b03a0
// FUN_003B03A0


int FUN_003b03a0(void)



{

  int iVar1;
  int lVar2;

  

  lVar2 = FUN_003b4520();

  if (lVar2 == 0) {

    FUN_0019d400(DAT_006a2830, DAT_006a2730, 0x63f);

  }

  iVar1 = *(int *)((int)lVar2 + 0x14);

  if (iVar1 == 0) {

    FUN_0019d3f0("frFont.c",0x644);

  }

  *(u16 *)(iVar1 + 4) = 1;

  *(int *)(iVar1 + 8) = (int)lVar2;

  return iVar1;

}
#define FUN_003b03a0(...) ((int (*)(...))FUN_003b03a0)(__VA_ARGS__)
#undef FUN_003b0430
/* W415 typed-call census closure: nd 230 -> 211, object 396/400 -> 372/400. */
/* W419 declaration sweep negative: 21 pair swaps; 18 stayed nd211/object372/window400/rate0.567204 and 3 reached nd212/object372/window400/rate0.569892. */
// FUN_003B0430


asm void FUN_003b0430(int param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x90850014
  .word 0x0200202d
  .word 0x0c0ecf74
  .word 0x00000000
  .word 0x0040902d
  .word 0x10400009
  .word 0x00000000
  .word 0x8e420010
  .word 0x10400006
  .word 0x00000000
  .word 0x94430004
  .word 0x24630001
  .word 0xa4430004
  .word 0x10000041
  .word 0x00000000
  .word 0x1640002a
  .word 0x00000000
  .word 0x92220015
  .word 0x00021940
  .word 0x3c020096
  .word 0x2442acf0
  .word 0x00439021
  .word 0x24040200
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x8e44001c
  .word 0x27a50060
  .word 0x0c0ed1dc
  .word 0x00000000
  .word 0x0260202d
  .word 0x0200282d
  .word 0x8e46001c
  .word 0x27a70060
  .word 0x0c0ed1ec
  .word 0x00000000
  .word 0x92260014
  .word 0x0200202d
  .word 0x0260282d
  .word 0x0c0ecf58
  .word 0x00000000
  .word 0x0040902d
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x240506c2
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0260202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x92240015
  .word 0x0c0ec684
  .word 0x00000000
  .word 0x0040a02d
  .word 0x92240015
  .word 0x0c0ec690
  .word 0x00000000
  .word 0x0280202d
  .word 0x0040282d
  .word 0x0260302d
  .word 0x24070001
  .word 0x0c0ec0e8
  .word 0x00000000
  .word 0xa4500000
  .word 0xac52000c
  .word 0xae420010
  .word 0x3c030096
  .word 0x8c63ae10
  .word 0x24640001
  .word 0x3c030096
  .word 0xac64ae10
  .word 0xdfbf0050
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
  .word 0x00000000
}
#define FUN_003b0430(...) ((void (*)(...))FUN_003b0430)(__VA_ARGS__)
#undef FUN_003b05c0
// FUN_003B05C0


void FUN_003b05c0(u16 *param_1)



{

  *(u32 *)(param_1 + 2) = 0;

  *(u32 *)(param_1 + 4) = 0;

  *(u8 *)((int)param_1 + 3) = 0;

  *(u32 *)(param_1 + 6) = 0;

  *(u32 *)(param_1 + 10) = 0;

  *(u8 *)(param_1 + 1) = 0xff;

  *param_1 = 0x20;

  *(u32 *)(param_1 + 0x12) = 0;

  *(u32 *)(param_1 + 0x14) = 0;

  *(u16 **)(param_1 + 0x16) = param_1;

  *(u32 *)(param_1 + 0xe) = 0;

  *(u32 *)(param_1 + 0x10) = 0;

  *(u32 *)(param_1 + 0xc) = 0;

  *(u32 *)(param_1 + 0x18) = 0;

  *(u32 *)(param_1 + 0x1a) = 0;

  *(u32 *)(param_1 + 0x1c) = 0;

  *(u32 *)(param_1 + 0x1e) = 0;

  *(u32 *)(param_1 + 0x20) = 0;

  return;

}
#define FUN_003b05c0(...) ((void (*)(...))FUN_003b05c0)(__VA_ARGS__)
#undef FUN_003b0620
/* W340 loop probe: opt_common_subs off; without nd=276/object=496, with nd=264/object=524; window=544. */
#pragma opt_common_subs off
// FUN_003B0620

asm int FUN_003b0620(u16 param_1,u8 param_2,u8 param_3,u8 param_4)
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
  .word 0x00e0802d
  .word 0x3c020096
  .word 0x8c44ae1c
  .word 0x0c0ed1ac
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c020096
  .word 0x8c42ae14
  .word 0x24430001
  .word 0x3c020096
  .word 0xac43ae14
  .word 0x16200008
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842860
  .word 0x3c05006a
  .word 0x24a52730
  .word 0x24060743
  .word 0x0c067500
  .word 0x00000000
  .word 0xa6340000
  .word 0xa2330015
  .word 0xae200004
  .word 0xae200008
  .word 0xae20000c
  .word 0xa2320014
  .word 0x2402ff00
  .word 0xae220010
  .word 0xa2300016
  .word 0x8782a810
  .word 0xa2220017
  .word 0xa6200002
  .word 0xae20001c
  .word 0xae200020
  .word 0xae200024
  .word 0xae200028
  .word 0x96230000
  .word 0x28610080
  .word 0x1020000a
  .word 0x00000000
  .word 0x24020020
  .word 0x14620004
  .word 0x00000000
  .word 0x241001f7
  .word 0x1000000a
  .word 0x00000000
  .word 0x2470ffe0
  .word 0x10000007
  .word 0x00000000
  .word 0x24628000
  .word 0x2444ff80
  .word 0x3082ff00
  .word 0x00021843
  .word 0x3082007f
  .word 0x00628021
  .word 0x326200ff
  .word 0x00021940
  .word 0x3c020096
  .word 0x2442acf0
  .word 0x00431021
  .word 0x8c420004
  .word 0x9442000e
  .word 0x0202082a
  .word 0x14200002
  .word 0x00000000
  .word 0x24100147
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c0ec10c
  .word 0x00000000
  .word 0xae22001c
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c0ec074
  .word 0x00000000
  .word 0x92220017
  .word 0x30420010
  .word 0x10400025
  .word 0x00000000
  .word 0x0000202d
  .word 0x26030020
  .word 0x24020079
  .word 0x10620012
  .word 0x00000000
  .word 0x24020071
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020070
  .word 0x1062000c
  .word 0x00000000
  .word 0x2402006a
  .word 0x10620009
  .word 0x00000000
  .word 0x24020067
  .word 0x10620006
  .word 0x00000000
  .word 0x24020051
  .word 0x10620003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x24040001
  .word 0x0004163c
  .word 0x0002163f
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020010
  .word 0x0002163c
  .word 0x0002163f
  .word 0xae220008
  .word 0x10000002
  .word 0x00000000
  .word 0xae200008
  .word 0x0220102d
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
#define FUN_003b0620(...) ((long (*)(...))FUN_003b0620)(__VA_ARGS__)
#pragma opt_common_subs reset
#undef FUN_003b0840
// FUN_003B0840

int FUN_003b0840(short *param_1)
{
  u16 *puVar3;
  u16 sVar1;
  int iVar2;
  int iVar3;

  puVar3 = *(u16 **)((int)param_1 + 0x24);
  iVar2 = 0;
  if (*(u8 *)((int)param_1 + 0x15) == 0) {
    goto LAB_003b0860;
  }
  if (*(u8 *)((int)param_1 + 0x15) != 1) {
    goto LAB_003b095c;
  }
LAB_003b0860:
  if (puVar3 == (u16 *)0x0) {
    goto LAB_003b095c;
  }
  sVar1 = *(u16 *)param_1;
  switch (sVar1) {
  case 0x61:
  case 0x65:
  case 0x6f:
  case 0x75:
  case 0x80c1:
  case 0x80c5:
  case 0x80cf:
  case 0x80d5:
    goto LAB_003b08d4;
  default:
    goto LAB_003b095c;
  }
LAB_003b08d4:
  sVar1 = *puVar3;
  if (sVar1 == 0x54) goto LAB_003b08f0;
  if (sVar1 != 0x80b4) goto LAB_003b091c;
LAB_003b08f0:
  iVar2 = 3;
  iVar3 = iGpffffb948;
  if (iVar3 <= 0) goto LAB_003b091c;
  iVar3 = iVar3 * 3;
  iVar2 = iVar3 >> 7;
  if (iVar3 < 0) {
    iVar2 = iVar3 + 0x7f >> 7;
  }
LAB_003b091c:
  if (sVar1 == 0x59) goto LAB_003b0934;
  if (sVar1 != 0x80b9) goto LAB_003b095c;
LAB_003b0934:
  iVar2 = 2;
  iVar3 = iGpffffb948;
  if (iVar3 <= 0) goto LAB_003b095c;
  iVar3 = iVar3 * 2;
  iVar2 = iVar3 >> 7;
  if (iVar3 < 0) {
    iVar2 = iVar3 + 0x7f >> 7;
  }
LAB_003b095c:
  return iVar2;
}
#define FUN_003b0840(...) ((int (*)(...))FUN_003b0840)(__VA_ARGS__)
#undef FUN_003b0970
/* W340 loop probe: opt_common_subs off; without nd=337/object=564, with nd=287/object=572; window=576. */
#pragma opt_common_subs off
/* W340 loop probe: opt_lifetimes on; without nd=337/object=564, with nd=336/object=564; window=576. */
#pragma opt_lifetimes on
/* W417 CONCAT11 probes: direct, whole-cast, second-operand-cast, first-operand-cast, and multiply forms regressed nd=285/object=572 to nd=289/object=572; shift-cast form regressed to nd=306/object=576. Declaration orders J-M with plain arithmetic reached nd=284/object=572; the J order is retained below. */
/* W419 declaration sweep negative: 28 pair swaps; baseline/min nd284/object572/window576/rate0.496503 and 7 reached nd289/object572/window576/rate0.505245. */
// FUN_003B0970


asm u8 *FUN_003b0970(u8 *param_1,u8 param_2,u8 param_3,u8 param_4,u8 *param_5)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00c0b02d
  .word 0x00e0b82d
  .word 0x0100982d
  .word 0x0000a82d
  .word 0x0005163c
  .word 0x0002163f
  .word 0x04400002
  .word 0x00000000
  .word 0xa385b950
  .word 0x9382b950
  .word 0x00021940
  .word 0x3c020096
  .word 0x2442ad0c
  .word 0x00431021
  .word 0x8c420000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000065
  .word 0x00000000
  .word 0x12800005
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c1490e2
  .word 0x00000000
  .word 0x0040a82d
  .word 0x16600015
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c44ae20
  .word 0x0c0ed1ac
  .word 0x00000000
  .word 0x0040982d
  .word 0x3c020096
  .word 0x8c42ae18
  .word 0x24430001
  .word 0x3c020096
  .word 0xac43ae18
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x240507da
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0ec170
  .word 0x00000000
  .word 0x0000882d
  .word 0x8e700020
  .word 0x0000902d
  .word 0x32f700ff
  .word 0x32d600ff
  .word 0x10000037
  .word 0x00000000
  .word 0x02921021
  .word 0x90440000
  .word 0x28820080
  .word 0x14400007
  .word 0x00000000
  .word 0x26520001
  .word 0x02921021
  .word 0x90430000
  .word 0x00041200
  .word 0x00431025
  .word 0x3044ffff
  .word 0x9385b950
  .word 0x02c0302d
  .word 0x02e0382d
  .word 0x0c0ec188
  .word 0x00000000
  .word 0x0040882d
  .word 0x16000004
  .word 0x00000000
  .word 0xae71001c
  .word 0x10000002
  .word 0x00000000
  .word 0xae110028
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x240507ef
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xae300024
  .word 0x0220802d
  .word 0x8e63000c
  .word 0x8e22000c
  .word 0x00621021
  .word 0xae62000c
  .word 0x8e620018
  .word 0x24420001
  .word 0xae620018
  .word 0x0220202d
  .word 0x0c0ec210
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e240024
  .word 0x10800004
  .word 0x00000000
  .word 0x8c83000c
  .word 0x00621823
  .word 0xac83000c
  .word 0x8e63000c
  .word 0x00621023
  .word 0xae62000c
  .word 0x26520001
  .word 0x0255102b
  .word 0x1440ffc8
  .word 0x00000000
  .word 0x12200006
  .word 0x00000000
  .word 0xae710020
  .word 0x92220018
  .word 0xa6620010
  .word 0x92220019
  .word 0xa6620012
  .word 0x0260102d
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
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
#define FUN_003b0970(...) ((long (*)(...))FUN_003b0970)(__VA_ARGS__)
#pragma opt_lifetimes reset
#pragma opt_common_subs reset
#undef FUN_003b0bb0
// FUN_003B0BB0


void FUN_003b0bb0(int param_1,u8 param_2)



{

  if (param_1 == 0) {
    FUN_0019d3f0(DAT_006a2730,0x818);

  }

  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x24)) {

    *(u8 *)(param_1 + 2) = param_2;

  }

  return;

}
#define FUN_003b0bb0(...) ((void (*)(...))FUN_003b0bb0)(__VA_ARGS__)
#undef FUN_003b0c20
// FUN_003B0C20


void FUN_003b0c20(u32 param_1,u16 param_2)



{

  if (param_1 == 0) {

    FUN_0019d3f0("frFont.c",0x82c);

  }

  *(u16 *)param_1 = param_2;

  return;

}
#define FUN_003b0c20(...) ((void (*)(...))FUN_003b0c20)(__VA_ARGS__)
#undef FUN_003b0c70
// FUN_003B0C70

void FUN_003b0c70(FrFontNode *node)
{
  FrFontNode *iter;

  node->enabled = 1;
  iter = node;
  if (node == NULL) {
    FUN_0019d3f0(DAT_006a2730, 0x818);
  }
  for (; iter != NULL; iter = iter->next) {
    iter->unknown_00[2] = 0xff;
  }
}
#define FUN_003b0c70(...) ((void (*)(...))FUN_003b0c70)(__VA_ARGS__)
#undef FUN_003b0ce0
// FUN_003B0CE0


void FUN_003b0ce0(int param_1,u8 param_2)



{

  int iVar1;

  

  if (param_1 == 0) {
    FUN_0019d3f0(DAT_006a2730,0x877);

  }

  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x24)) {

    for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {

      *(u8 *)(iVar1 + 0x15) = param_2;

    }

  }

  return;

}
#define FUN_003b0ce0(...) ((void (*)(...))FUN_003b0ce0)(__VA_ARGS__)
#undef FUN_003b0d70
// FUN_003B0D70


void FUN_003b0d70(int param_1,u32 param_2,u32 param_3)



{

  if (param_1 == 0) {

    FUN_0019d3f0(DAT_006a2730,0x88c);

  }

  *(u32 *)((int)param_1 + 4) = param_2;

  *(u32 *)((int)param_1 + 8) = param_3;

  return;

}





#undef FUN_003b0e04
#pragma optimization_level 3
// FUN_003B0DD0 thunk_FUN_003b0e04
void thunk_FUN_003b0e04(int param_1, u8 param_2)
{
  FUN_003b0e04(param_1, param_2);
}
#pragma optimization_level 2
/* Falls through into FUN_003b0e04 (no jr $ra of its own); FUN_003b0e04
 * branches back to this function's entry. Together they implement:
 *   do {
 *     for (v1 = *(int*)(param_1+0x1c); v1 != 0; v1 = *(int*)(v1+0x28))
 *       *(u8*)(v1+0x14) = param_2;
 *     param_1 = *(int*)(param_1+0x24);
 *   } while (param_1 != 0);
 * split across two retail symbols, which a single portable-C function
 * cannot reproduce byte-for-byte (the loop-back branch must land at this
 * function's exact address). Kept as readable mnemonic asm. */
// FUN_003B0DD8
asm void FUN_003b0dd8(int param_1, u8 param_2)
{
  .set noreorder
  lw $v1, 0x1c($a0)
  b FUN_003b0dd8_check
  nop
FUN_003b0dd8_store:
  sb $a1, 0x14($v1)
  lw $v1, 0x28($v1)
FUN_003b0dd8_check:
  nop
  nop
  nop
  bnez $v1, FUN_003b0dd8_store
  nop
  lw $a0, 0x24($a0)
}

#define FUN_003b0d70(...) ((void (*)(...))FUN_003b0d70)(__VA_ARGS__)
#undef FUN_003b0e04
/* Continuation of FUN_003b0dd8 (see comment there); branches back to its
 * start when param_1 != 0, otherwise returns. */
// FUN_003B0E04
asm void FUN_003b0e04(int param_1, u8 param_2)
{
  .set noreorder
  .word 0x1480fff4  /* bnez $a0, FUN_003b0dd8 (label unavailable across function boundary) */
  nop
  jr $ra
  nop
}





#undef FUN_003b0e54
#pragma optimization_level 3
// FUN_003B0E20 thunk_FUN_003b0e54
void thunk_FUN_003b0e54(int param_1, u32 param_2)
{
  FUN_003b0e54(param_1, param_2);
}
#pragma optimization_level 2
/* Falls through into FUN_003b0e54 (no jr $ra of its own); FUN_003b0e54
 * branches back to this function's entry. Same structure as
 * FUN_003b0dd8/FUN_003b0e04 above but stores a u32 at offset 0x10 instead
 * of a u8 at offset 0x14; see that pair's comment for the full loop shape
 * and why the cross-function branch cannot be portable C. */
// FUN_003B0E28
asm void FUN_003b0e28(int param_1, u32 param_2)
{
  .set noreorder
  lw $v1, 0x1c($a0)
  b FUN_003b0e28_check
  nop
FUN_003b0e28_store:
  sw $a1, 0x10($v1)
  lw $v1, 0x28($v1)
FUN_003b0e28_check:
  nop
  nop
  nop
  bnez $v1, FUN_003b0e28_store
  nop
  lw $a0, 0x24($a0)
}

#define FUN_003b0e04(...) ((void (*)(...))FUN_003b0e04)(__VA_ARGS__)
#undef FUN_003b0e54
/* Continuation of FUN_003b0e28 (see comment there); branches back to its
 * start when param_1 != 0, otherwise returns. */
// FUN_003B0E54
asm void FUN_003b0e54(int param_1, u32 param_2)
{
  .set noreorder
  .word 0x1480fff4  /* bnez $a0, FUN_003b0e28 (label unavailable across function boundary) */
  nop
  jr $ra
  nop
}
#define FUN_003b0e54(...) ((void (*)(...))FUN_003b0e54)(__VA_ARGS__)
#undef FUN_003b0e70
// FUN_003B0E70


u16 FUN_003b0e70(s16 param_1)



{

  u16 uVar1;

  

  uVar1 = uGpffffa810;

  uGpffffa810 = uGpffffa810 | param_1;

  return uVar1;

}
#define FUN_003b0e70(...) ((u16 (*)(...))FUN_003b0e70)(__VA_ARGS__)
#undef FUN_003b0e90
// FUN_003B0E90

u16 FUN_003b0e90(u16 param_1)
{
  u16 uVar1;
  long mask;

  uVar1 = uGpffffa810;
  mask = (s16)~param_1;
  uGpffffa810 = uGpffffa810 & mask;
  return uVar1;
}
#define FUN_003b0e90(...) ((u16 (*)(...))FUN_003b0e90)(__VA_ARGS__)
#undef FUN_003b0ec0
// Retail hoists the loop-invariant mask/type constants here; without
// opt_loop_invariants this function measures nd102 at 136B instead of nd1 at 140B.
// FUN_003B0EC0
#pragma push
#pragma opt_loop_invariants on

u32 FUN_003b0ec0(int list)
{
  u32 result = 0;
  u32 mask = ~0xff;
  u32 changed = 1;
  u32 type = 2;

  while (list != 0) {
    int node = *(int *)(list + 0x1c);

    while (node != 0) {
      if (*(u8 *)(node + 0x16) == type) {
        u32 word = *(u32 *)(node + 0x10);
        u32 fade = word & 0xff;
        u32 merged;

        if (fade != 0) {
          fade -= 8;
          if ((s32)fade < 0) {
            fade = 0;
          }
          merged = word & mask;
          merged |= fade;
          *(u32 *)(node + 0x10) = merged;
          *(u32 *)(node + 8) += 0x10;
          result = changed;
        }
      }
      node = *(int *)(node + 0x28);
    }
    list = *(int *)(list + 0x24);
  }
  return result;
}
#pragma opt_loop_invariants off
#pragma pop
#define FUN_003b0ec0(...) ((u32 (*)(...))FUN_003b0ec0)(__VA_ARGS__)
#undef FUN_003b0f50
// FUN_003B0F50


asm int FUN_003b0f50(u8 *param_1,u16 *param_2,u8 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00e0802d
  .word 0x0000b02d
  .word 0x0000a82d
  .word 0x640400ff
  .word 0x0000182d
  .word 0x24140001
  .word 0x8ca20024
  .word 0x1440000b
  .word 0x00000000
  .word 0x8e420024
  .word 0x10400009
  .word 0x00000000
  .word 0x8c420020
  .word 0x10400006
  .word 0x00000000
  .word 0x90440010
  .word 0x90430016
  .word 0x10000002
  .word 0x00000000
  .word 0x90440010
  .word 0x30c200ff
  .word 0x18400007
  .word 0x00000000
  .word 0x96220000
  .word 0x28410080
  .word 0x10200003
  .word 0x00000000
  .word 0x24c20014
  .word 0x304600ff
  .word 0x26330010
  .word 0x306300ff
  .word 0x10600004
  .word 0x00000000
  .word 0x92220016
  .word 0x14620009
  .word 0x00000000
  .word 0x308500ff
  .word 0x30c200ff
  .word 0x00a2102a
  .word 0x14400009
  .word 0x00000000
  .word 0x64150001
  .word 0x10000006
  .word 0x00000000
  .word 0x308500ff
  .word 0x240200ff
  .word 0x14a20002
  .word 0x00000000
  .word 0x64150001
  .word 0x8e440024
  .word 0x10800042
  .word 0x00000000
  .word 0x8e42001c
  .word 0x1451003f
  .word 0x00000000
  .word 0x8e420040
  .word 0x1440003c
  .word 0x00000000
  .word 0x8c830030
  .word 0x3402f247
  .word 0x10620027
  .word 0x00000000
  .word 0x3402f215
  .word 0x10620011
  .word 0x00000000
  .word 0x3402f214
  .word 0x10620003
  .word 0x00000000
  .word 0x10000030
  .word 0x00000000
  .word 0x8c83003c
  .word 0x1860002d
  .word 0x00000000
  .word 0x0000a82d
  .word 0x240200ff
  .word 0x14a20029
  .word 0x00000000
  .word 0x2462ffff
  .word 0xac82003c
  .word 0x10000025
  .word 0x00000000
  .word 0x8c83003c
  .word 0x2402ffff
  .word 0x10620008
  .word 0x00000000
  .word 0x1860001f
  .word 0x00000000
  .word 0x0000a82d
  .word 0x2462ffff
  .word 0xac82003c
  .word 0x1000001a
  .word 0x00000000
  .word 0x24040002
  .word 0x0c042940
  .word 0x00000000
  .word 0x10400015
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000012
  .word 0x00000000
  .word 0x8c83003c
  .word 0x2402ffff
  .word 0x10620008
  .word 0x00000000
  .word 0x1860000c
  .word 0x00000000
  .word 0x0000a82d
  .word 0x2462ffff
  .word 0xac82003c
  .word 0x10000007
  .word 0x00000000
  .word 0x24040002
  .word 0x0c042940
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x0000a82d
  .word 0x8e430034
  .word 0x3402f117
  .word 0x1462001a
  .word 0x00000000
  .word 0x8e420020
  .word 0x90430010
  .word 0x240200ff
  .word 0x14620015
  .word 0x00000000
  .word 0x8e420038
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e43003c
  .word 0x1860000c
  .word 0x00000000
  .word 0x3402ffff
  .word 0x14620008
  .word 0x00000000
  .word 0x0c0d6ba4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000a02d
  .word 0x12800002
  .word 0x00000000
  .word 0xae400034
  .word 0x12a0002d
  .word 0x00000000
  .word 0x320400ff
  .word 0x288100ff
  .word 0x10200011
  .word 0x00000000
  .word 0x82430003
  .word 0x8e22000c
  .word 0x00431021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x00041140
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0x00000000
  .word 0x46000024
  .word 0x44020000
  .word 0x10000002
  .word 0x00000000
  .word 0x240200ff
  .word 0x28410100
  .word 0x14200004
  .word 0x00000000
  .word 0x240200ff
  .word 0x10000002
  .word 0x00000000
  .word 0x304200ff
  .word 0x304500ff
  .word 0x8e640000
  .word 0x240300ff
  .word 0x308200ff
  .word 0x00621023
  .word 0x0045102b
  .word 0x14400005
  .word 0x00000000
  .word 0x00851021
  .word 0xae620000
  .word 0x10000005
  .word 0x00000000
  .word 0x2402ff00
  .word 0x00821024
  .word 0x344200ff
  .word 0xae620000
  .word 0x96240002
  .word 0x92620000
  .word 0x284100ff
  .word 0x1020000e
  .word 0x00000000
  .word 0x92230016
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x00041840
  .word 0x24020005
  .word 0x0062001a
  .word 0x00001010
  .word 0x2442fffe
  .word 0x00021100
  .word 0x0002b023
  .word 0x02c0102d
  .word 0xdfbf0070
  .word 0x7bb60060
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
#undef FUN_003b1300
#undef FUN_003b1330
#undef FUN_003b1360
// FUN_003B1300


void FUN_003b1300(void *param_1)



{

  FUN_003b1330(param_1,0);

  return;

}
// FUN_003B1330


void FUN_003b1330(void *param_1,u32 param_2)



{

  FUN_003b1360(param_1,param_2,uGpffffb940);

  return;

}
#define FUN_003b1300(...) ((void (*)(...))FUN_003b1300)(__VA_ARGS__)
#define FUN_003b1330(...) ((void (*)(...))FUN_003b1330)(__VA_ARGS__)
#undef FUN_003b1360
/* W340 loop probe: opt_common_subs off; without nd=378/object=936, with nd=375/object=944; window=944. */
#pragma opt_common_subs off
/* W389 pragma: opt_loop_invariants on; without nd=375/object=944, with nd=364/object=936; window=944. */
#pragma push
#pragma opt_loop_invariants on
/* W415 typed and pointer-typed probes for FUN_003b0f50 both regressed nd 364 -> 470; old-style direct alias retained at nd 364 -> 467, object 928/944. */
// W417 rejected census closure: adding 0x003b0f50 before 0x003b38f0 closed 5 -> 6 calls,
// but baseline nd 364/object 936/window 944 (38.9%) -> direct-alias closure nd 467/object 928/window 944 (50.3%).
// The 8-byte shrink shows the alias replaced the compiler-inlined body with an out-of-line call;
// reverted to the old-style call until the frame or shape is fixed.
/* W417 switch probe: ascending cases 0xf214, 0xf215, 0xf246, 0xf247 matched retail body layout and improved nd=364/object=936 to nd=310/object=944; swapping bVar5/iVar9 declarations reached nd=305/object=944. Other declaration orders stayed at or above nd=305; parameter-width probes were unchanged or regressed (u8/char param_2 exceeded the 944-byte window). */
// FUN_003B1360


asm int FUN_003b1360(void *param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x0000902d
  .word 0x24100001
  .word 0x8782a810
  .word 0x30420040
  .word 0x14400034
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040006
  .word 0x0200282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x0200282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050004
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020005
  .word 0x3445100d
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x16800004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000097
  .word 0x00000000
  .word 0x8e94002c
  .word 0x0013ae3c
  .word 0x0015ae3f
  .word 0x10000082
  .word 0x00000000
  .word 0x8e910004
  .word 0x8e960008
  .word 0x82970003
  .word 0x8e93001c
  .word 0x10000029
  .word 0x00000000
  .word 0x16a00009
  .word 0x00000000
  .word 0x92860000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x92870002
  .word 0x0c0ec3d4
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x8e630004
  .word 0x02231821
  .word 0x00432021
  .word 0x8e620008
  .word 0x02c22821
  .word 0x92670014
  .word 0x92680018
  .word 0x92690019
  .word 0xc68c0014
  .word 0x0260302d
  .word 0x8e6a0010
  .word 0x0c0ece3c
  .word 0x00000000
  .word 0x92620010
  .word 0x10400004
  .word 0x00000000
  .word 0x96620002
  .word 0x24420001
  .word 0xa6620002
  .word 0x92620010
  .word 0x2c4100ff
  .word 0x10200002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e62000c
  .word 0x00571021
  .word 0x00021100
  .word 0x02228821
  .word 0x8e730028
  .word 0x1660ffd7
  .word 0x00000000
  .word 0x8e820028
  .word 0x1440004c
  .word 0x00000000
  .word 0x8e820040
  .word 0x14400049
  .word 0x00000000
  .word 0x8e830030
  .word 0x3402f247
  .word 0x10620034
  .word 0x00000000
  .word 0x3402f246
  .word 0x10620026
  .word 0x00000000
  .word 0x3402f215
  .word 0x10620010
  .word 0x00000000
  .word 0x3402f214
  .word 0x10620003
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x12000038
  .word 0x00000000
  .word 0x8e82003c
  .word 0x18400035
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae82003c
  .word 0x0000802d
  .word 0x10000030
  .word 0x00000000
  .word 0x24040002
  .word 0x0c042940
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000028
  .word 0x00000000
  .word 0x8e83003c
  .word 0x2402ffff
  .word 0x10620024
  .word 0x00000000
  .word 0x18600022
  .word 0x00000000
  .word 0x2462ffff
  .word 0xae82003c
  .word 0x0000802d
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e83003c
  .word 0x2402ffff
  .word 0x10620019
  .word 0x00000000
  .word 0x18600017
  .word 0x00000000
  .word 0x2462ffff
  .word 0xae82003c
  .word 0x0000802d
  .word 0x10000012
  .word 0x00000000
  .word 0x24040002
  .word 0x0c042940
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e83003c
  .word 0x2402ffff
  .word 0x10620006
  .word 0x00000000
  .word 0x18600004
  .word 0x00000000
  .word 0x2462ffff
  .word 0xae82003c
  .word 0x0000802d
  .word 0x8e820018
  .word 0x02429021
  .word 0x8e940028
  .word 0x1680ff7e
  .word 0x00000000
  .word 0x8f82b944
  .word 0x18400006
  .word 0x00000000
  .word 0x2442ffff
  .word 0xaf82b944
  .word 0x0000102d
  .word 0x10000007
  .word 0x00000000
  .word 0x0010163c
  .word 0x0002163f
  .word 0x14400002
  .word 0x00000000
  .word 0x0000902d
  .word 0x0240102d
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
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
#pragma pop
#pragma opt_loop_invariants reset
#define FUN_003b1360(...) ((int (*)(...))FUN_003b1360)(__VA_ARGS__)
#pragma opt_common_subs reset
#undef FUN_003b1710
// FUN_003B1710


asm int FUN_003b1710(long param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x24110001
  .word 0x0000802d
  .word 0x16400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000057
  .word 0x00000000
  .word 0x8e52002c
  .word 0x1000004c
  .word 0x00000000
  .word 0x8e420028
  .word 0x14400046
  .word 0x00000000
  .word 0x8e420040
  .word 0x14400043
  .word 0x00000000
  .word 0x8e430030
  .word 0x3402f247
  .word 0x10620030
  .word 0x00000000
  .word 0x3402f246
  .word 0x10620022
  .word 0x00000000
  .word 0x3402f215
  .word 0x1062000e
  .word 0x00000000
  .word 0x3402f214
  .word 0x10620003
  .word 0x00000000
  .word 0x10000034
  .word 0x00000000
  .word 0x12200032
  .word 0x00000000
  .word 0x8e42003c
  .word 0x1840002f
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000002c
  .word 0x00000000
  .word 0x24040002
  .word 0x0c042940
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000024
  .word 0x00000000
  .word 0x8e43003c
  .word 0x2402ffff
  .word 0x10620020
  .word 0x00000000
  .word 0x1860001e
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000001b
  .word 0x00000000
  .word 0x8e43003c
  .word 0x2402ffff
  .word 0x10620017
  .word 0x00000000
  .word 0x18600015
  .word 0x00000000
  .word 0x2462ffff
  .word 0xae42003c
  .word 0x0000882d
  .word 0x10000010
  .word 0x00000000
  .word 0x24040002
  .word 0x0c042940
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000008
  .word 0x00000000
  .word 0x8e43003c
  .word 0x2402ffff
  .word 0x10620004
  .word 0x00000000
  .word 0x18600002
  .word 0x00000000
  .word 0x0000882d
  .word 0x8e420018
  .word 0x02028021
  .word 0x8e520028
  .word 0x1640ffb4
  .word 0x00000000
  .word 0x0011163c
  .word 0x0002163f
  .word 0x14400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0200102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003b1710(...) ((int (*)(...))FUN_003b1710)(__VA_ARGS__)
#undef FUN_003b18c0
// FUN_003B18C0


u64 FUN_003b18c0(void)
{
    u32 index;
    u32 *entry;

    index = FUN_0035aea0() & 0xff;
    entry = (u32*)DAT_0095ae60_abs + index;
    *entry = FUN_003b0030_direct(*entry);
    FUN_003b3770();
    return 0;
}

#define FUN_003b18c0(...) ((u64 (*)(...))FUN_003b18c0)(__VA_ARGS__)
#undef FUN_003b1920
// FUN_003B1920

int FUN_003b1920(int param_1, int param_2, int param_3)
{
    if (param_1 != 0)
    {
        goto checkParam2;
    }
    return param_2;

checkParam2:
    if (param_2 != 0)
    {
        goto body;
    }
    return param_1;

body:
    *(u32*)(param_1 + 0x28) = *(u32*)(param_2 + 0x2c);
    *(int*)(*(int*)(param_2 + 0x2c) + 0x24) = param_1;
    *(u32*)(param_2 + 0x2c) = *(u32*)(param_1 + 0x2c);

    if (param_3 == 1)
    {
        *(int*)(param_2 + 4) = *(int*)(param_1 + 4) + *(int*)(param_1 + 0xc) * 0x10;
        *(u32*)(param_2 + 8) = *(u32*)(param_1 + 8);
    }

    return param_2;
}
#define FUN_003b1920(...) ((long (*)(...))FUN_003b1920)(__VA_ARGS__)
#undef FUN_003b19a0
// FUN_003B19A0


void FUN_003b19a0(u64 param_1)



{

  FUN_003afad0_typed(8,param_1,0);

  return;

}
#define FUN_003b19a0(...) ((void (*)(...))FUN_003b19a0)(__VA_ARGS__)
#undef FUN_003b19d0
// FUN_003B19D0

int FUN_003b19d0(FrFontNode *node)
{
  int total = 0;
  FrFontGlyph *glyph;

  for (glyph = node->glyphs; glyph != NULL; glyph = glyph->next) {
    total += glyph->advance;
    total += node->line_height;
  }
  return total;
}
#define FUN_003b19d0(...) ((int (*)(...))FUN_003b19d0)(__VA_ARGS__)
#undef FUN_003b1a10
// FUN_003B1A10


u16 FUN_003b1a10(u32 param_1)



{
  u32 **base = (u32 **)DAT_0095acf4_abs;
  u32 *entry = base[(param_1 & 0xff) * 8];
  return *(u16 *)((u8 *)entry + 0x10);

}
#define FUN_003b1a10(...) ((u16 (*)(...))FUN_003b1a10)(__VA_ARGS__)
#undef FUN_003b1a40
// FUN_003B1A40


u16 FUN_003b1a40(u32 param_1)



{
  u32 **base = (u32 **)DAT_0095acf4_abs;
  u32 *entry = base[(param_1 & 0xff) * 8];
  return *(u16 *)((u8 *)entry + 0x12);

}
#define FUN_003b1a40(...) ((u16 (*)(...))FUN_003b1a40)(__VA_ARGS__)
#undef FUN_003b1a70
// FUN_003B1A70


void FUN_003b1a70(void)



{

  uGpffffa800 = 0x19;

  return;

}
#define FUN_003b1a70(...) ((void (*)(...))FUN_003b1a70)(__VA_ARGS__)
#undef FUN_003b1a80
// FUN_003B1A80


void FUN_003b1a80(u32 param_1)



{

  uGpffffa800 = param_1;

  return;

}
#define FUN_003b1a80(...) ((void (*)(...))FUN_003b1a80)(__VA_ARGS__)
#undef FUN_003b1a90
/* Removing this loses FUN_003b1a90 (MATCH nd0 -> MISMATCH nd45) - measured W161. */
#pragma opt_loop_invariants on
// FUN_003B1A90


int FUN_003b1a90(int param_1)
{
  int iVar2;
  int iVar3;
  iVar2 = 0;
  if (param_1 == 0) {
    return iVar2;
  }
  param_1 = *(int *)(param_1 + 0x2c);
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x28)) {
    int iVar1;
    iVar3 = param_1;
    iVar1 = *(int *)(param_1 + 8);
    iVar1 = iVar1 + 100;
    while (iVar3 != 0) {
      if (*(int *)(iVar3 + 8) >= iVar1) {
        break;
      }
      iVar3 = *(int *)(iVar3 + 0x28);
    }
    iVar2 = iVar2 + 1;
  }

  return iVar2;

}
#define FUN_003b1a90(...) ((int (*)(...))FUN_003b1a90)(__VA_ARGS__)
#pragma opt_loop_invariants reset
#undef FUN_003b1b00
// FUN_003B1B00


int FUN_003b1b00(int param_1,int param_2)



{

  int iVar3;

  int iVar6;

  int iVar2;

  int iVar5;

  int iVar4;

  int iVar7;
  

  iVar2 = 0;
  iVar5 = 0;
  if (param_2 == 0) {
    return 0;
  }
  else {
    for (param_2 = *(int *)(param_2 + 0x2c); param_2 != 0;
         param_2 = *(int *)(param_2 + 0x28)) {
      iVar2 = 0;
      iVar6 = param_2;
      iVar7 = *(int *)(param_2 + 8) + 100;
      while (iVar6 != 0) {
        if (*(int *)(iVar6 + 8) >= iVar7) {
          break;
        }
        iVar3 = 0;
        iVar4 = *(int *)(iVar6 + 0x1c);
        goto frFont_b1b00_child_check;
frFont_b1b00_child_body:
        iVar3 = iVar3 + *(int *)(iVar4 + 0xc);
        iVar3 = iVar3 + (int)*(char *)(iVar6 + 3);
        iVar4 = *(int *)(iVar4 + 0x28);
frFont_b1b00_child_check:
        if (iVar4 != 0) goto frFont_b1b00_child_body;
        iVar2 = iVar2 + iVar3;
        iVar6 = *(int *)(iVar6 + 0x28);
      }
      iVar7 = iVar5;
      iVar5 = iVar5 + 1;
      if (iVar7 == param_1) break;
    }
    iVar2 = iVar2 << 4;
  }
  return iVar2;

}
#define FUN_003b1b00(...) ((int (*)(...))FUN_003b1b00)(__VA_ARGS__)
#undef FUN_003b1bc0
/* Removing this loses FUN_003b1bc0 (MATCH nd0 -> MISMATCH nd57) - measured W161. */
#pragma opt_loop_invariants on
// FUN_003B1BC0


void FUN_003b1bc0(u32 *param_1,int param_2,int param_3)



{


  int iVar3;
  int iVar2;


  

  iVar2 = 0;
  if (param_3 == 0) {
    return;
  }
  param_3 = *(int *)(param_3 + 0x2c);
  for (; param_3 != 0;
       param_3 = *(int *)(param_3 + 0x28)) {
    int iVar1;
    iVar3 = param_3;
    *param_1 = *(u32 *)(param_3 + 4);
    param_1[1] = *(u32 *)(param_3 + 8);
    iVar1 = *(int *)(param_3 + 8);
    iVar1 = iVar1 + 100;
    while (iVar3 != 0) {
      if (*(int *)(iVar3 + 8) >= iVar1) {
        break;
      }
      iVar3 = *(int *)(iVar3 + 0x28);
    }
    {
      int iVar4;
      iVar4 = iVar2;
      iVar2 = iVar2 + 1;
      if (iVar4 == param_2) {
        return;
      }
    }
  }

  return;

}
#define FUN_003b1bc0(...) ((void (*)(...))FUN_003b1bc0)(__VA_ARGS__)
#pragma opt_loop_invariants reset
#undef FUN_003b1c40
// FUN_003B1C40


void FUN_003b1c40(int param_1,int param_2,int param_3)



{


  int iVar1;

  int iVar2;

  

  if (param_3 == 0) {
    return;
  }
  param_3 = *(int *)((int)param_3 + 0x2c);
  iVar1 = param_1 - *(int *)(param_3 + 4);
  iVar2 = param_2 - *(int *)(param_3 + 8);
  for (; param_3 != 0; param_3 = *(int *)(param_3 + 0x28)) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + iVar1;
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + iVar2;
  }

  return;

}
#define FUN_003b1c40(...) ((void (*)(...))FUN_003b1c40)(__VA_ARGS__)
#undef FUN_003b1c90
// FUN_003B1C90


void FUN_003b1c90(int x, int y, FrFontLineLayout *line)
{
  int yDelta;
  int scan;
  int totalWidth;
  FrFontGlyphLayout *glyph;
  int firstY;
  int limit;
  int secondLimit;
  int lineWidth;
  int xDelta;
  int halfWidth;
  int scaledHalfWidth;

  if (line == NULL) {
    return;
  }

  line = line->line;
  yDelta = y - line->y;
  while (line != NULL) {
    totalWidth = 0;
    scan = (int)line;
    firstY = line->y;
    limit = firstY + 100;

    while (scan != 0) {
      if (*(int *)(scan + 8) >= limit) {
        break;
      }
      lineWidth = 0;
      glyph = *(FrFontGlyphLayout **)(scan + 0x1c);
      while (glyph != NULL) {
        lineWidth += glyph->width;
        lineWidth += *(s8 *)(scan + 3);
        glyph = glyph->next;
      }
      totalWidth += lineWidth;
      scan = *(int *)(scan + 0x28);
    }

    xDelta = x - line->x;
    halfWidth = totalWidth / 2;
    scaledHalfWidth = halfWidth * 0x10;
    secondLimit = firstY + 100;
    while (line != NULL) {
      if (line->y >= secondLimit) {
        break;
      }
      line->x += xDelta;
      line->x -= scaledHalfWidth;
      line->y += yDelta;
      line = line->next;
    }
  }
}
#define FUN_003b1c90(...) ((void (*)(...))FUN_003b1c90)(__VA_ARGS__)
#undef FUN_003b1d90
/* W340 loop probe: opt_common_subs off; without nd=377/object=656, with nd=376/object=656; window=656. */
#pragma opt_common_subs off
/* W340 loop probe: opt_lifetimes on; without nd=377/object=656, with nd=376/object=656; window=656. */
#pragma opt_lifetimes on
// FUN_003B1D90


asm void FUN_003b1d90(u32 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0a02d
  .word 0x308300ff
  .word 0x00032080
  .word 0x3c030096
  .word 0x2463ac70
  .word 0x00641821
  .word 0x8c730000
  .word 0x27a4008c
  .word 0x24030003
  .word 0x10800008
  .word 0x00000000
  .word 0xa0800000
  .word 0x24840001
  .word 0x2463ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x1260007c
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c1490e2
  .word 0x00000000
  .word 0x0040b02d
  .word 0x8290000c
  .word 0x0000902d
  .word 0x10000071
  .word 0x00000000
  .word 0x02721021
  .word 0x80420000
  .word 0xa3a2008c
  .word 0xa3a0008d
  .word 0x304200ff
  .word 0x28420080
  .word 0x14400005
  .word 0x00000000
  .word 0x26520001
  .word 0x02721021
  .word 0x80420000
  .word 0xa3a2008d
  .word 0x8291000c
  .word 0x0010163c
  .word 0x0002163f
  .word 0x12220041
  .word 0x00000000
  .word 0x8e900014
  .word 0x12000018
  .word 0x00000000
  .word 0x8e02001c
  .word 0x10400027
  .word 0x00000000
  .word 0x8286000d
  .word 0x8287000e
  .word 0x2784a838
  .word 0x0000282d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x24060001
  .word 0x0c0ec648
  .word 0x00000000
  .word 0x0040802d
  .word 0xae900014
  .word 0x10000013
  .word 0x00000000
  .word 0x8286000d
  .word 0x8287000e
  .word 0x2784a838
  .word 0x0000282d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x24060001
  .word 0x0c0ec648
  .word 0x00000000
  .word 0x0040802d
  .word 0xae900014
  .word 0x9295000f
  .word 0x8e900014
  .word 0x1600000a
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x24050818
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0xa2150002
  .word 0x8e100024
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1600fffa
  .word 0x00000000
  .word 0x0011863c
  .word 0x0010863f
  .word 0x8286000d
  .word 0x8287000e
  .word 0x27a4008c
  .word 0x0220282d
  .word 0x8e880014
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0xae820014
  .word 0x8395a7fc
  .word 0x0040882d
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x24050848
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xa2350003
  .word 0x0000202d
  .word 0x8e25001c
  .word 0x10000006
  .word 0x00000000
  .word 0x8ca3000c
  .word 0x00832021
  .word 0x82230003
  .word 0x00832021
  .word 0x8ca50028
  .word 0x14a0fffa
  .word 0x00000000
  .word 0xae24000c
  .word 0x26520001
  .word 0x0256182a
  .word 0x1460ff8e
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
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
#define FUN_003b1d90(...) ((void (*)(...))FUN_003b1d90)(__VA_ARGS__)
#pragma opt_lifetimes reset
#pragma opt_common_subs reset
#undef FUN_003b2020
/* W340 loop probe: opt_lifetimes on; without nd=363/object=636, with nd=362/object=636; window=640. */
#pragma opt_lifetimes on
// FUN_003B2020


asm void FUN_003b2020(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x27a4008c
  .word 0x24030003
  .word 0x10800008
  .word 0x00000000
  .word 0xa0800000
  .word 0x24840001
  .word 0x2463ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x1280007c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c1490e2
  .word 0x00000000
  .word 0x0040b02d
  .word 0x8270000c
  .word 0x0000902d
  .word 0x10000071
  .word 0x00000000
  .word 0x02921021
  .word 0x80420000
  .word 0xa3a2008c
  .word 0xa3a0008d
  .word 0x304200ff
  .word 0x28420080
  .word 0x14400005
  .word 0x00000000
  .word 0x26520001
  .word 0x02921021
  .word 0x80420000
  .word 0xa3a2008d
  .word 0x8271000c
  .word 0x0010163c
  .word 0x0002163f
  .word 0x12220041
  .word 0x00000000
  .word 0x8e700014
  .word 0x12000018
  .word 0x00000000
  .word 0x8e02001c
  .word 0x10400027
  .word 0x00000000
  .word 0x8266000d
  .word 0x8267000e
  .word 0x2784a838
  .word 0x0000282d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x24060001
  .word 0x0c0ec648
  .word 0x00000000
  .word 0x0040802d
  .word 0xae700014
  .word 0x10000013
  .word 0x00000000
  .word 0x8266000d
  .word 0x8267000e
  .word 0x2784a838
  .word 0x0000282d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x24060001
  .word 0x0c0ec648
  .word 0x00000000
  .word 0x0040802d
  .word 0xae700014
  .word 0x9275000f
  .word 0x8e700014
  .word 0x1600000a
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x24050818
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0xa2150002
  .word 0x8e100024
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1600fffa
  .word 0x00000000
  .word 0x0011863c
  .word 0x0010863f
  .word 0x8266000d
  .word 0x8267000e
  .word 0x27a4008c
  .word 0x0220282d
  .word 0x8e680014
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0xae620014
  .word 0x8395a7fc
  .word 0x0040882d
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x24050848
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xa2350003
  .word 0x0000202d
  .word 0x8e25001c
  .word 0x10000006
  .word 0x00000000
  .word 0x8ca3000c
  .word 0x00832021
  .word 0x82230003
  .word 0x00832021
  .word 0x8ca50028
  .word 0x14a0fffa
  .word 0x00000000
  .word 0xae24000c
  .word 0x26520001
  .word 0x0256182a
  .word 0x1460ff8e
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003b2020(...) ((void (*)(...))FUN_003b2020)(__VA_ARGS__)
#pragma opt_lifetimes reset
#undef FUN_003b22a0
/* W340 loop probe: opt_common_subs off; without nd=113/object=352, with nd=52/object=352; window=352. */
#pragma opt_common_subs off
/* W419 declaration sweep negative: all 21 pair swaps stayed nd51/object352/window352/rate0.144886. */
// FUN_003B22A0


asm void FUN_003b22a0(u32 *param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c830014
  .word 0x10600005
  .word 0x00000000
  .word 0x8c63001c
  .word 0x14600002
  .word 0x00000000
  .word 0xa200001c
  .word 0x8203001c
  .word 0x10600030
  .word 0x00000000
  .word 0x8e120014
  .word 0x8206000d
  .word 0x8207000e
  .word 0x2784a838
  .word 0x0000282d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040282d
  .word 0x14a00003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24060001
  .word 0x0c0ec648
  .word 0x00000000
  .word 0x0040902d
  .word 0xae120014
  .word 0x9211000f
  .word 0x1640000a
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x24050818
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0xa2510002
  .word 0x8e520024
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1640fffa
  .word 0x00000000
  .word 0x8612001e
  .word 0x8e110014
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x2405082c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xa6320000
  .word 0xa200001c
  .word 0x8203001d
  .word 0x1060000e
  .word 0x00000000
  .word 0x8e130004
  .word 0x8e120000
  .word 0x8e110014
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x2405088c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xae320004
  .word 0xae330008
  .word 0xa200001d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#define FUN_003b22a0(...) ((void (*)(...))FUN_003b22a0)(__VA_ARGS__)
#pragma opt_common_subs reset
#undef FUN_003b2400
// FUN_003B2400

void FUN_003b2400(FrFontState *state)
{
  state->text_position += iGpffffa800 * 8;
  state->layout_dirty = 1;
  state->position_dirty = 1;
}
#define FUN_003b2400(...) ((void (*)(...))FUN_003b2400)(__VA_ARGS__)
#undef FUN_003b2430
/* W340 loop probe: opt_common_subs off; without nd=853/object=1168, with nd=841/object=1192; window=1232. */
#pragma opt_common_subs off
// FUN_003B2430


asm u32 FUN_003b2430(void *param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c840010
  .word 0x90820000
  .word 0x304300f0
  .word 0x240200f0
  .word 0x10620008
  .word 0x00000000
  .word 0x90830001
  .word 0x24020008
  .word 0x14620004
  .word 0x00000000
  .word 0x8e220018
  .word 0x24420004
  .word 0xae220018
  .word 0x8f83a7f8
  .word 0x2402ff00
  .word 0x00621024
  .word 0xaf82a7f8
  .word 0x8782a810
  .word 0x34420001
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x2402fffd
  .word 0x00621024
  .word 0xa782a810
  .word 0x100000f9
  .word 0x00000000
  .word 0x320300f0
  .word 0x240200f0
  .word 0x14620039
  .word 0x00000000
  .word 0x8e230018
  .word 0x24620001
  .word 0xae220018
  .word 0x8e220010
  .word 0x00431021
  .word 0x90430000
  .word 0x00101200
  .word 0x00438025
  .word 0x321200ff
  .word 0x2e41004d
  .word 0x14200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x24050df9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2a410002
  .word 0x10200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x24050dfa
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0220282d
  .word 0x00121880
  .word 0x3c02006a
  .word 0x24422370
  .word 0x00431021
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x32030f00
  .word 0x00031a03
  .word 0x2463ffff
  .word 0x00032040
  .word 0x8e230018
  .word 0x00641821
  .word 0xae230018
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000007
  .word 0x00000000
  .word 0x8222001c
  .word 0x14400003
  .word 0x00000000
  .word 0x24020001
  .word 0xa222001c
  .word 0x0000102d
  .word 0x104000bf
  .word 0x00000000
  .word 0x100000c5
  .word 0x00000000
  .word 0x2402000a
  .word 0x1602000f
  .word 0x00000000
  .word 0x8782a810
  .word 0x30420004
  .word 0x104000b6
  .word 0x00000000
  .word 0x8f82a800
  .word 0x000218c0
  .word 0x8e220004
  .word 0x00431021
  .word 0xae220004
  .word 0x24020001
  .word 0xa222001c
  .word 0xa222001d
  .word 0x100000ac
  .word 0x00000000
  .word 0x8e220014
  .word 0x10400005
  .word 0x00000000
  .word 0x8c42001c
  .word 0x14400002
  .word 0x00000000
  .word 0xa220001c
  .word 0x8222001c
  .word 0x10400023
  .word 0x00000000
  .word 0x8e320014
  .word 0x8226000d
  .word 0x8227000e
  .word 0x2784a838
  .word 0x0000282d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x24060001
  .word 0x0c0ec648
  .word 0x00000000
  .word 0x0040902d
  .word 0xae320014
  .word 0x0240202d
  .word 0x9225000f
  .word 0x0c0ec2ec
  .word 0x00000000
  .word 0x8633001e
  .word 0x8e320014
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x2405082c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xa6530000
  .word 0xa220001c
  .word 0x8222001d
  .word 0x1040000e
  .word 0x00000000
  .word 0x8e340004
  .word 0x8e330000
  .word 0x8e320014
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x2405088c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xae530004
  .word 0xae540008
  .word 0xa220001d
  .word 0x2a010080
  .word 0x10200017
  .word 0x00000000
  .word 0x24020020
  .word 0x16020008
  .word 0x00000000
  .word 0x2402ff83
  .word 0xa3a2006c
  .word 0x2402fff7
  .word 0xa3a2006d
  .word 0xa3a0006e
  .word 0x10000003
  .word 0x00000000
  .word 0xa3b0006c
  .word 0xa3a0006d
  .word 0x8225000c
  .word 0x8226000d
  .word 0x8227000e
  .word 0x27a4006c
  .word 0x8e280014
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0xae220014
  .word 0x1000002a
  .word 0x00000000
  .word 0x8e230018
  .word 0x24620001
  .word 0xae220018
  .word 0x8e220010
  .word 0x00431021
  .word 0x90430000
  .word 0x00101200
  .word 0x00431825
  .word 0x3401c080
  .word 0x0061082a
  .word 0x10200010
  .word 0x00000000
  .word 0x3062ff00
  .word 0x00021203
  .word 0xa3a2006c
  .word 0xa3a3006d
  .word 0xa3a0006e
  .word 0x8225000c
  .word 0x8226000d
  .word 0x8227000e
  .word 0x27a4006c
  .word 0x8e280014
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0xae220014
  .word 0x1000000f
  .word 0x00000000
  .word 0x2463c000
  .word 0x3062ff00
  .word 0x00021203
  .word 0xa3a2006c
  .word 0xa3a3006d
  .word 0xa3a0006e
  .word 0x8226000d
  .word 0x8227000e
  .word 0x27a4006c
  .word 0x24050008
  .word 0x8e280014
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0xae220014
  .word 0x9223000c
  .word 0x2782a808
  .word 0x00431021
  .word 0x80420000
  .word 0x00021023
  .word 0x00021840
  .word 0x00031143
  .word 0x04610003
  .word 0x00000000
  .word 0x2462001f
  .word 0x00021143
  .word 0x0002963c
  .word 0x0012963f
  .word 0x8e300014
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x24050848
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xa2120003
  .word 0x0000182d
  .word 0x8e04001c
  .word 0x10000006
  .word 0x00000000
  .word 0x8c82000c
  .word 0x00621821
  .word 0x82020003
  .word 0x00621821
  .word 0x8c840028
  .word 0x1480fffa
  .word 0x00000000
  .word 0xae03000c
  .word 0x8e320008
  .word 0x8e300014
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842730
  .word 0x240508a5
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00121102
  .word 0xae020014
  .word 0x8e230018
  .word 0x24620001
  .word 0xae220018
  .word 0x8e220010
  .word 0x00431021
  .word 0x90500000
  .word 0x1600ff01
  .word 0x00000000
  .word 0x8783a810
  .word 0x2402fffe
  .word 0x00621024
  .word 0x0002143c
  .word 0x0002143f
  .word 0x34420002
  .word 0xa782a810
  .word 0x8e220014
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003b2430(...) ((u32 (*)(...))FUN_003b2430)(__VA_ARGS__)
#pragma opt_common_subs reset
#undef FUN_003b2900
// FUN_003B2900


void FUN_003b2900(u32 param_1,u32 param_2,u32 param_3,u32 param_4)
{
  FUN_003b2990_typed(param_1,param_2,0,0,0,0,0xff,param_3,param_4);
}

#define FUN_003b2900(...) ((void (*)(...))FUN_003b2900)(__VA_ARGS__)
#undef FUN_003b2940
// FUN_003B2940


void FUN_003b2940(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
                  u32 param_5,u32 param_6,u32 param_7,u32 param_8)
{
  FUN_003b2990_typed(param_1,param_2,0,param_3,param_4,param_5,param_6,param_7,param_8);
}

#define FUN_003b2940(...) ((void (*)(...))FUN_003b2940)(__VA_ARGS__)
#undef FUN_003b2990
#undef FUN_003b2430
#pragma alias FUN_003b2430_typed FUN_003b2430
void FUN_003b2430_typed(void *param_1);
// FUN_003B2990


void FUN_003b2990(u32 param_1,u32 param_2,int param_3,u8 param_4,

                 u8 param_5,u8 param_6,u8 param_7,u32 param_8,

                 u32 param_9)



{
  struct {
    u32 f00;
    u32 f04;
    int f08;
    u8 f0c;
    u8 f0d;
    u8 f0e;
    u8 f0f;
    u32 f10;
    u32 f14;
    u32 f18;
    u8 f1c;
    u8 f1d;
    u16 f1e;
  } data;

  data.f00 = param_1;
  data.f04 = param_2;
  data.f08 = param_3 << 4;
  data.f0c = param_4;
  data.f0d = param_5;
  data.f0e = param_6;
  data.f0f = param_7;
  data.f10 = param_8;
  data.f14 = param_9;
  data.f18 = 0;
  data.f1c = 1;
  data.f1d = 1;
  data.f1e = 0x20;
  FUN_003b2430_typed(&data);
  return;
}
#define FUN_003b2430(...) ((u32 (*)(...))FUN_003b2430)(__VA_ARGS__)
#define FUN_003b2990(...) ((void (*)(...))FUN_003b2990)(__VA_ARGS__)
#undef FUN_003b2a00
// FUN_003B2A00


u32 FUN_003b2a00(u32 param_1)



{

  return uGpffffa7f8 & param_1;

}
#define FUN_003b2a00(...) ((u32 (*)(...))FUN_003b2a00)(__VA_ARGS__)
#undef FUN_003b2a10
// FUN_003B2A10


void FUN_003b2a10(int param_1,u32 param_2)



{
  u32 *base = DAT_0095ac70_abs;
  u32 *entry = base + param_1;
  *entry = param_2;

  return;

}
#define FUN_003b2a10(...) ((void (*)(...))FUN_003b2a10)(__VA_ARGS__)
#undef FUN_003b2a30
// FUN_003B2A30


asm u64 FUN_003b2a30(void *param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x8c840010
  .word 0x90820000
  .word 0x304300f0
  .word 0x240200f0
  .word 0x10620008
  .word 0x00000000
  .word 0x90830001
  .word 0x24020008
  .word 0x14620004
  .word 0x00000000
  .word 0x8e420018
  .word 0x24420004
  .word 0xae420018
  .word 0x8f83a7f8
  .word 0x2402ffc0
  .word 0x00621024
  .word 0xaf82a7f8
  .word 0x10000044
  .word 0x00000000
  .word 0x306400f0
  .word 0x240200f0
  .word 0x14820037
  .word 0x00000000
  .word 0x0000102d
  .word 0x8e450018
  .word 0x24a40001
  .word 0xae440018
  .word 0x8e440010
  .word 0x00852021
  .word 0x90840000
  .word 0x00031a00
  .word 0x00648025
  .word 0x1220000d
  .word 0x00000000
  .word 0x1611000b
  .word 0x00000000
  .word 0x0200202d
  .word 0x0240282d
  .word 0x320200ff
  .word 0x00021880
  .word 0x3c02006a
  .word 0x24422370
  .word 0x00431021
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x32030f00
  .word 0x00031a03
  .word 0x2463ffff
  .word 0x00032040
  .word 0x8e430018
  .word 0x00641821
  .word 0xae430018
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000010
  .word 0x00000000
  .word 0x3402f131
  .word 0x12020009
  .word 0x00000000
  .word 0x3402f110
  .word 0x12020006
  .word 0x00000000
  .word 0x3402f104
  .word 0x12020003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x1040000c
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x2402000a
  .word 0x10620007
  .word 0x00000000
  .word 0x28620080
  .word 0x14400004
  .word 0x00000000
  .word 0x8e420018
  .word 0x24420001
  .word 0xae420018
  .word 0x8e430018
  .word 0x24620001
  .word 0xae420018
  .word 0x8e420010
  .word 0x00431021
  .word 0x90430000
  .word 0x1460ffb6
  .word 0x00000000
  .word 0x0000102d
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
#define FUN_003b2a30(...) ((u64 (*)(...))FUN_003b2a30)(__VA_ARGS__)
#undef FUN_003b2bf0
#pragma alias FUN_003b2a30_typed FUN_003b2a30
u64 FUN_003b2a30_typed(void *param_1, u32 param_2);
// FUN_003B2BF0


s8 FUN_003b2bf0(u32 param_1,u32 param_2,u32 param_3)
{
  struct {
    u32 f00;
    u32 f04;
    u32 f08;
    u8 f0c;
    u8 f0d;
    u8 f0e;
    u8 f0f;
    u32 f10;
    u32 f14;
    u32 f18;
    u8 f1c;
    u8 f1d;
    u16 f1e;
  } data;

  data.f00 = 0;
  data.f04 = 0;
  data.f08 = 0;
  data.f0c = 0;
  data.f0d = 0;
  data.f0e = 0;
  data.f0f = 0;
  data.f10 = param_1;
  data.f14 = param_2;
  data.f18 = 0;
  data.f1c = 1;
  data.f1d = 1;
  data.f1e = 0x20;
  return FUN_003b2a30_typed(&data, param_3);
}
#define FUN_003b2bf0(...) ((u8 (*)(...))FUN_003b2bf0)(__VA_ARGS__)
