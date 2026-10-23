#include "Utils.h"
#include "Kosaka/k_assert.h"
#include "Battle/battle.h"
#include "Main/Battle/Cmd/bpp_main.h"
#include "rw/rwplcore.h"

#pragma alias D_00960090_y2 D_00960090
#pragma alias D_0096009C_y2 D_0096009C
#pragma alias func_003b1360_y2 func_003b1360
#pragma alias func_003b0e20_y2 func_003b0e20
#pragma alias func_001775a0_y2 func_001775a0

extern const char D_0068E880[];
#pragma alias DAT_007cc468_sda DAT_007cc468
extern const char DAT_007cc468_sda[] __attribute__((section(".sdata")));
extern const char DAT_007cc468[];

typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned int ulong;
extern f32 sinf(f32 angle);
extern f32 cosf(f32 angle);

/* BPC state rooted at DAT_007CE320 / GP-0x49D0. */
extern u32* DAT_007ce320;
#define sBpcWork DAT_007ce320
#pragma alias bppMain0020f8b0_u16 bppMain0020f8b0
extern void bppMain0020f8b0_u16(u16 pcId);
#pragma alias bppMain0020fb60_u16 bppMain0020fb60
extern void bppMain0020fb60_u16(u16 pcId);
#pragma alias bppMain0020f7d0_u16 bppMain0020f7d0
extern void bppMain0020f7d0_u16(u16 pcId);
#pragma alias bppMain0020fa80_u16 bppMain0020fa80
extern void bppMain0020fa80_u16(u16 pcId);
#pragma alias func_001775a0_s16 func_001775a0
extern u32 func_001775a0_s16(s16 id);

typedef void (*BpcRenderState)(s32 property, u32 value);
typedef void (*BpcRenderQuad)(void* quad, s32 count, s32 group, s32 pass, s32 blend);
extern BpcRenderState D_00960090;
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
#pragma alias D_0096009C_abs D_0096009C
extern u8 D_0096009C_abs[];
extern BpcRenderQuad D_0096009C;
extern f32 DAT_007caf38;
extern u32 DAT_007ce4e8;
extern u8* DAT_007ce410;
static inline u32 bpcAddBaseFirst(u32 base, u32 offset)
{
  return base + offset;
}

extern int func_001ff430(u32 id);
extern u32 func_0021c3f0(s32 texture);
extern u32 func_0021cca0(u32 texture, s32 frame);
extern u32 func_0021cce0(u32 frame);
extern void func_0021d3b0(void* destination, u32 frame);
extern void func_0021d890(void* destination, const f32* layout);
extern void func_0021d8e0(void* destination, const f32* layout);
extern void func_0021d950(void* destination, const u8* color);
extern void func_0021e380(void* destination, u32 frame, s32 mode);
extern void func_0021eb80(void* destination, const f32* layout);
extern void func_0021cd00(u32 frame, f32* rect);
extern void func_00280580(int unit, void* projected);
extern u32 func_002d20a0(const void* projected, void* screen);
// Typed aliases preserve the established ABI of unrelated callers.
#pragma alias func_00280580_vec func_00280580
extern void func_00280580_vec(int unit, RwV3d* projected);
#pragma alias func_002d20a0_vec func_002d20a0
extern u32 func_002d20a0_vec(const RwV3d* projected, RwV2d* screen);
extern int func_0029a1d0(int unit);
extern int func_00301ca0(u32 calc, u32 skill);
extern int func_00300e90();
extern u32 func_00306e80(u32 calc, s16 mode);
extern s16 func_003082f0();
extern void func_003b0170(u32 resource);
extern u32 func_003b0970(u32 resource, s32 mode, s32 group, s32 a, s32 b);
extern void func_003b0d70(u32 resource, s32 x, s32 y);
extern void func_003b0e20(u32 resource, u32 value);
extern void func_003b0e70(s32 mode);
extern void func_003b0e90(s32 mode);
extern void func_003b1360(u32 resource, s32 mode, s32 value);
extern s32 func_003b19d0(u32 resource);
extern void func_004d7f60(s32 state, u32 value);
extern u32 func_00173370(u32 persona);
extern u32 func_00174800(s32 id);
extern s32 func_00176a30(u32 persona);
extern u32 func_001775a0(u16 id);
extern u32 func_0017b260(u16 id);
extern u32 func_001ff630(s32 index);
extern u32 func_0010a4e0(s32 a, s32 b, s32 c, s32 d);
extern u32 datPersonaGetByPcId(s32 id);
extern u32 datPersonaGetSkills(u32 persona);
extern s32 datPersonaCountValidSkills(u32 persona);
extern int printf(const char* format, ...);




/* High-gap entry points; declarations keep cross-calls typed under MWCC. */
void FUN_00242c40(u32*);
void FUN_00242c60(void);
void FUN_00242cc0(void);
void FUN_00243150(void);
void FUN_00244120(u32);
void FUN_002441b0(u32);
void FUN_00244770(void);
void FUN_002449d0(void);
void FUN_00244a00(void);
void FUN_00244a40(u32);
u32 FUN_00244e10(void);
void FUN_00244e80(void);
void FUN_002453d0(u16);
void FUN_00245420(uint*,u32);
void FUN_00245910(uint*);
void FUN_00245970(uint*);
void FUN_002459d0(uint*);
void FUN_00245a00(void);
uint *FUN_00245bf0(int);
void FUN_00245cd0(void);
void FUN_00245e00(void);
void FUN_00245e50(void);
void FUN_00245ea0(void);




// FUN_00242C60
void FUN_00242c60(void)

{
  if (sBpcWork == (uint *)0x0) {
    K_Assert(D_0068E880, 0x97);
  }
  if ((*sBpcWork & 2) != 0) {
    func_003b0170(sBpcWork[0x1b30]);
  }
  sBpcWork = (uint *)0x0;
  return;
}



// FUN_00242CC0
void FUN_00242cc0(void)

{
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar1;
  uint uVar2;
  u32 uVar3;
  u32 uVar9;
  u32 uVar10;
  u32 lVar4;
  uint *puVar6;
  uint *puVar7;
  u8 auStack_10 [16];
  
  if (sBpcWork == (uint *)0x0) {
    K_Assert(D_0068E880, 0x97);
  }
  puVar1 = sBpcWork;
  func_0021c3f0(2);
  func_0021c3f0(1);
  func_0021c3f0(5);
  func_0021c3f0(3);
  if (((~*puVar1 & 1) == 0) || ((~*puVar1 & 0x20) == 0)) {
    if ((int)puVar1[0x1cb5] < 0x3b) {
      puVar1[0x1cb5] = puVar1[0x1cb5] + 1;
    }
    else {
      puVar1[0x1cb5] = 0;
    }
    for (iVar7 = 0; uVar2 = puVar1[3], iVar7 < (int)uVar2; iVar7 = iVar7 + 1) {
      puVar6 = puVar1 + iVar7 * 0x290 + 0x10;
      uVar2 = puVar1[1];
      switch (uVar2) {
      case 0:
      case 1:
        iVar8 = 0;
        uVar10 = puVar1[2];
        while (iVar8 < (int)uVar10) {
          puVar7 = puVar1 + iVar8 + 4;
          if (*puVar7 == puVar6[2]) break;
          iVar8 = iVar8 + 1;
        }
        if (((~*puVar6 & 0x20) != 0) && (iVar8 == uVar10)) goto LAB_0024307c;
        break;
      case 2:
        uVar2 = ~*puVar6;
        if ((uVar2 & 0x400) == 0) goto LAB_00242e4c;
        if ((uVar2 & 0x20) == 0) goto LAB_00242e4c;
        if ((uVar2 & 0x80) != 0) goto LAB_0024307c;
        break;
      }
LAB_00242e4c:
      uVar9 = *puVar6;
      if ((uVar9 & 0x10) != 0) {
        if ((int)puVar6[0x1c4] < 10) {
          puVar6[0x1c4] = puVar6[0x1c4] + 1;
        }
        else {
          *puVar6 = uVar9 & 0xffffffef;
        }
      }
      else if ((uVar9 & 0x20) != 0) {
        if ((int)puVar6[0x1c4] < 10) {
          puVar6[0x1c4] = puVar6[0x1c4] + 1;
        }
        else {
          *puVar6 = uVar9 & 0xffffffdf;
        }
      }
      else if ((uVar9 & 0x200) != 0) {
        if ((int)puVar6[0x1c4] < 4) {
          puVar6[0x1c4] = puVar6[0x1c4] + 1;
        }
        else {
          *puVar6 = uVar9 & 0xfffffdff;
        }
      }
      switch (puVar1[1]) {
      case 2:
        if ((*puVar6 & 0x80) != 0) {
          for (uVar2 = 0; (int)uVar2 < 3; uVar2 = uVar2 + 1) {
            if ((int)puVar6[0x288] < 0) {
              K_Assert(D_0068E880, 0xff);
            }
            if ((int)puVar6[0x288] >= 3) {
              K_Assert(D_0068E880, 0x100);
            }
            if (uVar2 == puVar6[0x288]) {
              puVar7 = puVar6 + 0x289 + uVar2;
              if ((int)*puVar7 < 10) {
                *puVar7 = *puVar7 + 1;
              }
            }
            else if (0 < (int)(puVar7 = puVar6 + 0x289 + uVar2, *puVar7)) {
              *puVar7 = *puVar7 - 1;
            }
          }
        }
        break;
      }
      uVar3 = func_001ff430(puVar6[2]);
      uVar2 = datCalcGetHp(*(u32 *)(uVar3 + 0xa2c));
      puVar6[0x28c] = uVar2 & 0xffff;
      uVar2 = datCalcGetMaxHp(*(u32 *)(uVar3 + 0xa2c));
      puVar6[0x28d] = uVar2 & 0xffff;
      func_00280580(uVar3,auStack_10);
      *puVar6 = *puVar6 & 0xffffffbf;
      lVar4 = func_002d20a0(auStack_10,puVar6 + 0x28e);
      if (lVar4 == 0) {
        *puVar6 = *puVar6 | 0x40;
      }
      *(f32 *)(puVar6 + 0x28f) = *(f32 *)(puVar6 + 0x28f) + 20.0f;
LAB_0024307c:
    ;
    }
    if ((*puVar1 & 0x20) != 0) {
      iVar9 = 0;
      while ((int)iVar9 < (int)uVar2) {
        puVar7 = puVar1 + iVar9 * 0x290 + 0x10;
        if ((*puVar7 & 0x20) != 0) break;
        iVar9 = iVar9 + 1;
      }
      if (iVar9 == uVar2) {
        *puVar1 = *puVar1 & 0xffffffdf;
      }
    }
    if (((~*puVar1 & 1) == 0) || ((~*puVar1 & 0x20) == 0)) {
      FUN_00245ea0();
    }
  }
  return;
}



/* W418 width negatives: FUN_00243150 iVar10 s16 nd2467/3996B -> 2559/4036B; iVar11 s16 -> 2574/4012B. FUN_002441B0 iVar10 s16 nd872/1464B -> 917/1512B (over 1472B), iVar4 s16 -> 965/1556B (over), iVar6 s16 -> 931/1500B (over). */
/* W420 verified: swapping uVar3/uVar4 declarations reduced FUN_00243150 nd2467/3996B to nd2466/3996B, window4048B; rate61.74% to61.71%. */
// FUN_00243150
#ifndef PC_BUILD
asm void FUN_00243150(void)
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
  .word 0x8f82b630
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e880
  .word 0x24050097
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b630
  .word 0x24040002
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040b82d
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24040005
  .word 0x0c0870fc
  .word 0x00000000
  .word 0xafa200ac
  .word 0x24040003
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040f02d
  .word 0x8e430000
  .word 0x00602027
  .word 0x30830001
  .word 0x10600004
  .word 0x00000000
  .word 0x30830020
  .word 0x146003bc
  .word 0x00000000
  .word 0x30820100
  .word 0x10400003
  .word 0x00000000
  .word 0x0c0917a8
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040009
  .word 0x24050002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040014
  .word 0x24050002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000a02d
  .word 0x100001ea
  .word 0x00000000
  .word 0x00141880
  .word 0x00741821
  .word 0x000318c0
  .word 0x00741821
  .word 0x00031980
  .word 0x02431821
  .word 0x24700040
  .word 0x8e440004
  .word 0x24030002
  .word 0x1083001f
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x0000302d
  .word 0x8e450008
  .word 0x10000008
  .word 0x00000000
  .word 0x00061880
  .word 0x02431821
  .word 0x8c640010
  .word 0x8e030008
  .word 0x10830005
  .word 0x00000000
  .word 0x24c60001
  .word 0x00c5182a
  .word 0x1460fff7
  .word 0x00000000
  .word 0x8e030000
  .word 0x00601827
  .word 0x30630020
  .word 0x10600010
  .word 0x00000000
  .word 0x14c5000e
  .word 0x00000000
  .word 0x100001c0
  .word 0x00000000
  .word 0x8e030000
  .word 0x00602027
  .word 0x30830400
  .word 0x10600007
  .word 0x00000000
  .word 0x30830020
  .word 0x10600004
  .word 0x00000000
  .word 0x30830080
  .word 0x146001b5
  .word 0x00000000
  .word 0x8e040000
  .word 0x30830040
  .word 0x146001b1
  .word 0x00000000
  .word 0x30820001
  .word 0x10400028
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405002c
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
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26040510
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040510
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050002
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040982d
  .word 0x0260202d
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
  .word 0x3c160096
  .word 0x26d6009c
  .word 0x26040210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e430004
  .word 0x24020002
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040982d
  .word 0x10000006
  .word 0x00000000
  .word 0x02e0202d
  .word 0x24050037
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040982d
  .word 0x0260202d
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
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26040110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e430004
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050008
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
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x26040920
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040920
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050003
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
  .word 0x8e030000
  .word 0x30630002
  .word 0x10600026
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050045
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
  .word 0x26040610
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040610
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e440004
  .word 0x24030002
  .word 0x10830058
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050001
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
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26040410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8fa400ac
  .word 0x24050004
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
  .word 0x26040310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x1000004f
  .word 0x00000000
  .word 0x02e0202d
  .word 0x2405003d
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
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26040820
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040820
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02e0202d
  .word 0x24050039
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
  .word 0x26040720
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040720
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26940001
  .word 0x8e43000c
  .word 0x0283182a
  .word 0x1460fe14
  .word 0x00000000
  .word 0x8e440000
  .word 0x30830002
  .word 0x106001ad
  .word 0x00000000
  .word 0x00801827
  .word 0x30630080
  .word 0x106001a9
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c140096
  .word 0x26940090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
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
  .word 0x264469c0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264469c0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050043
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
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
  .word 0x264466c0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264466c0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264467c0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264467c0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264468c0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264468c0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e446cc0
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050042
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
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
  .word 0x26446ac0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26446ac0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26446bc0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26446bc0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e430000
  .word 0x30630004
  .word 0x106000fc
  .word 0x00000000
  .word 0x8e436cc4
  .word 0x10600010
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405003b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000006
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405003c
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200202d
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
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26446cd0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26446cd0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e436cc8
  .word 0x10600010
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405003d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000006
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405003e
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200202d
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
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26446dd0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26446dd0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e436ccc
  .word 0x10600010
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405003f
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000006
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050040
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200202d
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
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26446ed0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26446ed0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000048
  .word 0x00000000
  .word 0x00131080
  .word 0x02421021
  .word 0x8c436cc4
  .word 0x10600017
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000d
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x03c0202d
  .word 0x24050011
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x1000000d
  .word 0x00000000
  .word 0x03c0202d
  .word 0x24050012
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000006
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050041
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200202d
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
  .word 0x00131200
  .word 0x02421021
  .word 0x24546fd0
  .word 0x3c160096
  .word 0x26d6009c
  .word 0x0280202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a630003
  .word 0x1460ffb7
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



// FUN_00244120
void FUN_00244120(u32 param_1)
{
  uint *puVar1;

  if (sBpcWork == 0) {
    K_Assert(D_0068E880, 0x97);
  }
  puVar1 = sBpcWork;
  if ((int)puVar1[2] >= 10) {
    K_Assert(D_0068E880, 0x251);
  }
  puVar1[puVar1[2] + 4] = param_1;
  puVar1[2] = puVar1[2] + 1;
  return;
}



/* W419 negative probes: DAT_007ce4e8 .sdata alias and DAT_007ce320 pointer .sdata alias left FUN_002441B0 at nd700/1460B, window1472B, rate47.95%; reverted. */
// FUN_002441B0
#ifndef PC_BUILD
asm void FUN_002441b0(u32 param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8f82b630
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e880
  .word 0x24050097
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b630
  .word 0x24040002
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040005
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x8e420000
  .word 0x00401027
  .word 0x30420002
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e880
  .word 0x24050269
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e420008
  .word 0x1c400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e880
  .word 0x2405026a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x27849778
  .word 0x0200282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e430000
  .word 0x2402fffb
  .word 0x00621824
  .word 0xae430000
  .word 0x2402fff7
  .word 0x00621824
  .word 0xae430000
  .word 0x2402ffef
  .word 0x00621824
  .word 0xae430000
  .word 0x2402ffdf
  .word 0x00621824
  .word 0xae430000
  .word 0x2402fffd
  .word 0x00621824
  .word 0xae430000
  .word 0x2402feff
  .word 0x00621024
  .word 0xae420000
  .word 0x8e430008
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x8e420000
  .word 0x34420002
  .word 0xae420000
  .word 0x964372d0
  .word 0x2402014f
  .word 0x10620004
  .word 0x00000000
  .word 0x24020144
  .word 0x14620005
  .word 0x00000000
  .word 0x24020002
  .word 0xae420004
  .word 0x10000002
  .word 0x00000000
  .word 0xae500004
  .word 0x0c07fdd0
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x24040006
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0c05ccdc
  .word 0x00000000
  .word 0x0040802d
  .word 0x0280202d
  .word 0x0c05da8c
  .word 0x00000000
  .word 0x0000282d
  .word 0x2404014f
  .word 0x10000007
  .word 0x00000000
  .word 0x00051840
  .word 0x02031821
  .word 0x94630000
  .word 0x10640005
  .word 0x00000000
  .word 0x24a50001
  .word 0x00a2182a
  .word 0x1460fff8
  .word 0x00000000
  .word 0x00a2082a
  .word 0x10200004
  .word 0x00000000
  .word 0x8e430000
  .word 0x34630004
  .word 0xae430000
  .word 0x0000282d
  .word 0x24040150
  .word 0x10000007
  .word 0x00000000
  .word 0x00051840
  .word 0x02031821
  .word 0x94630000
  .word 0x10640005
  .word 0x00000000
  .word 0x24a50001
  .word 0x00a2182a
  .word 0x1460fff8
  .word 0x00000000
  .word 0x00a2082a
  .word 0x10200004
  .word 0x00000000
  .word 0x8e420000
  .word 0x34420008
  .word 0xae420000
  .word 0x8e420000
  .word 0x30420002
  .word 0x10400061
  .word 0x00000000
  .word 0x8e440010
  .word 0x0c07fd0c
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e420000
  .word 0x30420004
  .word 0x10400003
  .word 0x00000000
  .word 0x0c0913a0
  .word 0x00000000
  .word 0x920300a2
  .word 0x24020001
  .word 0x1062000c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e020a2c
  .word 0x84440002
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000009
  .word 0x00000000
  .word 0x8e020a2c
  .word 0x94430002
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431821
  .word 0x8f82b7f8
  .word 0x00438821
  .word 0x24040001
  .word 0x0c0ec39c
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0ec3a4
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x24060006
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0xae426cc0
  .word 0x24040001
  .word 0x0c0ec3a4
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0ec39c
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050043
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x264466c0
  .word 0x0200282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x264467c0
  .word 0x0200282d
  .word 0x24060001
  .word 0x0c0878e0
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050044
  .word 0x0c087328
  .word 0x00000000
  .word 0x264468c0
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x264469c0
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050042
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x26446ac0
  .word 0x0200282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x26446bc0
  .word 0x0200282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000010
  .word 0x00000000
  .word 0x00101080
  .word 0x02421021
  .word 0x8c440010
  .word 0x0c07fd0c
  .word 0x00000000
  .word 0x904300a2
  .word 0x10600003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8c420a2c
  .word 0x94440002
  .word 0x0c083df4
  .word 0x00000000
  .word 0x26100001
  .word 0x8e420008
  .word 0x0202102a
  .word 0x1440ffee
  .word 0x00000000
  .word 0x8e420000
  .word 0x30420002
  .word 0x1040001e
  .word 0x00000000
  .word 0x8e440010
  .word 0x0c07fd0c
  .word 0x00000000
  .word 0x0040882d
  .word 0x904200a2
  .word 0x10400003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x0c07fd6c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0000982d
  .word 0x1000000c
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c07fd8c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x8e220a2c
  .word 0x94420002
  .word 0x10820003
  .word 0x00000000
  .word 0x0c083ea0
  .word 0x00000000
  .word 0x26730001
  .word 0x0270102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0x0c091680
  .word 0x00000000
  .word 0x8e440004
  .word 0x24030002
  .word 0x1083001a
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00101080
  .word 0x02421021
  .word 0x8c440010
  .word 0x0c0916fc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c091644
  .word 0x00000000
  .word 0x26100001
  .word 0x8e430008
  .word 0x0203182a
  .word 0x1460fff4
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000013
  .word 0x00000000
  .word 0x00101880
  .word 0x00701821
  .word 0x000318c0
  .word 0x00701821
  .word 0x00031980
  .word 0x02431821
  .word 0x24640040
  .word 0x8c650048
  .word 0x8e430010
  .word 0x10a30005
  .word 0x00000000
  .word 0x8c830000
  .word 0x30630080
  .word 0x10600003
  .word 0x00000000
  .word 0x0c091644
  .word 0x00000000
  .word 0x26100001
  .word 0x8e43000c
  .word 0x0203182a
  .word 0x1460ffeb
  .word 0x00000000
  .word 0x8e430000
  .word 0x34630001
  .word 0xae430000
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
}
#endif /* PC_BUILD: asm function omitted */



// FUN_00244770
void FUN_00244770(void)
{
  uint uVar1;
  uint *puVar2;
  u16 sVar3;
  s32 iVar4;
  int action;
  int count;
  s32 iVar7;

  if (sBpcWork == (uint *)0x0) {
    K_Assert(D_0068E880, 0x97);
  }
  puVar2 = sBpcWork;
  if ((*sBpcWork & 2) != 0) {
    func_003b0170(sBpcWork[0x1b30]);
  }
  for (iVar4 = 0; (int)iVar4 < (int)puVar2[2]; iVar4 = iVar4 + 1) {
    action = func_001ff430(*(uint *)((u32)puVar2 + iVar4 * 4 + 0x10));
    switch (*(u8 *)(action + 0xa2)) {
    case 0:
      bppMain0020f8b0_u16(*(u16 *)(*(int *)(action + 0xa2c) + 2));
      break;
    }
  }
  if ((*puVar2 & 2) != 0) {
    action = func_001ff430(puVar2[4]);
    switch (*(u8 *)(action + 0xa2)) {
    case 0:
      count = bpMisc001ff5b0();
      for (iVar7 = 0; (int)iVar7 < count; iVar7 = iVar7 + 1) {
        sVar3 = (u16)func_001ff630(iVar7);
        if (sVar3 != *(u16 *)(*(int *)(action + 0xa2c) + 2)) {
          bppMain0020fb60_u16(sVar3);
        }
      }
      break;
    }
  }
  uVar1 = puVar2[1];
  switch (uVar1) {
  case 0:
  case 1:
    for (iVar4 = 0; iVar4 < (int)puVar2[2]; iVar4 = iVar4 + 1) {
      FUN_00245970(FUN_00245bf0(*(uint *)((u32)puVar2 + iVar4 * 4 + 0x10)));
    }
    break;
  case 2:
    for (iVar4 = 0; iVar4 < (int)puVar2[3]; iVar4 = iVar4 + 1) {
      action = (int)(puVar2 + iVar4 * 0x290);
      FUN_00245970((uint *)(action + 0x40));
      if ((*(uint *)(action + 0x40) & 0x480) == 0) {
        *(uint *)(action + 0x40) &= 0xffffffdf;
      }
    }
    break;
  }
  *puVar2 &= 0xfffffffe;
  *puVar2 &= 0xfffffffd;
  puVar2[2] = 0;
  *puVar2 = *puVar2 | 0x20;
  return;
}



// FUN_002449D0
void FUN_002449d0(void)
{
    printf("");
    FUN_00244770();
}



// FUN_00244A00
void FUN_00244a00(void)

{
  func_0010a4e0(0,0,0,2);
  FUN_00244770();
  return;
}



// FUN_00244A40
void FUN_00244a40(u32 param_1)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar5;
  u32 uVar6;
  u32 lVar7;
  int unaff_s2_lo;
  RwV3d projected;
  RwV2d screen;
  
  if (sBpcWork == (uint *)0x0) {
    K_Assert(D_0068E880, 0x97);
  }
  puVar2 = sBpcWork;
  if ((*sBpcWork & 2) == 0) {
    K_Assert(D_0068E880, 0x371);
  }
  iVar3 = func_001ff430(puVar2[4]);
  switch (*(u8 *)(iVar3 + 0xa2)) {
  case 0:
    bppMain0020f8b0_u16(*(u16 *)(*(int *)(iVar3 + 0xa2c) + 2));
    bppMain0020fa80_u16(*(u16 *)(*(int *)(iVar3 + 0xa2c) + 2));
    iVar3 = func_001ff430(param_1);
    if (*(u8 *)(iVar3 + 0xa2) != 0) {
      K_Assert(D_0068E880, 0x37b);
    }
    bppMain0020fb60_u16(*(u16 *)(*(int *)(iVar3 + 0xa2c) + 2));
    bppMain0020f7d0_u16(*(u16 *)(*(int *)(iVar3 + 0xa2c) + 2));
    break;
  case 1:
    break;
  }
  uVar5 = puVar2[1];
  switch (uVar5) {
  case 0:
  case 1:
    puVar5 = FUN_00245bf0(puVar2[4]);
    FUN_00245970(puVar5);
    break;
  case 2:
    puVar5 = FUN_00245bf0(puVar2[4]);
    if ((~*puVar5 & 0x80) != 0) {
      FUN_00245970(puVar5);
    }
    break;
  }
  uVar6 = func_001ff430(puVar2[4]);
  func_00280580_vec(uVar6, &projected);
  lVar7 = func_002d20a0_vec(&projected, &screen);
  if (lVar7 != 0) {
    *(RwV2d*)&((f32*)puVar2)[0x1cb7] = screen;
    *puVar2 = *puVar2 | 0x10;
  }
  if ((*puVar2 & 2) != 0) {
    puVar4 = (uint *)FUN_00245bf0(puVar2[4]);
    *puVar4 = *puVar4 & 0xfffffbff;
  }
  puVar2[4] = (uint)param_1;
  if ((*puVar2 & 2) != 0) {
    puVar4 = (uint *)FUN_00245bf0(puVar2[4]);
    *puVar4 = *puVar4 | 0x400;
  }
  uVar5 = puVar2[1];
  switch (uVar5) {
  case 0:
  case 1:
    puVar5 = FUN_00245bf0(puVar2[4]);
    FUN_00245910(puVar5);
    break;
  case 2:
    FUN_00245cd0();
    puVar5 = FUN_00245bf0(puVar2[4]);
    if ((*puVar5 & 0x80) != 0) {
      FUN_002459d0(puVar5);
    }
    else {
      FUN_00245910(puVar5);
    }
    break;
  }
  if ((*puVar2 & 4) != 0) {
    FUN_00244e80();
  }
  func_003b0170(puVar2[0x1b30]);
  iVar3 = func_001ff430(puVar2[4]);
  switch (*(u8 *)(iVar3 + 0xa2)) {
  case 0:
    unaff_s2_lo = func_001775a0_s16(*(s16 *)(*(int *)(iVar3 + 0xa2c) + 2));
    break;
  case 1:
    uVar1 = *(ushort *)(*(int *)(iVar3 + 0xa2c) + 2);
    unaff_s2_lo = DAT_007ce4e8 + (uint)uVar1 * 0x13;
    break;
  }
  func_003b0e70(1);
  func_003b0e90(2);
  uVar5 = func_003b0970(unaff_s2_lo,2,6,0,0);
  puVar2[0x1b30] = uVar5;
  func_003b0e90(1);
  func_003b0e70(2);
  func_0010a4e0(0,0,0,0);
  return;
}



// FUN_00244E10
uint FUN_00244e10(void)

{
  uint *puVar1;
  
  if (sBpcWork == (uint *)0x0) {
    K_Assert(D_0068E880, 0x97);
  }
  puVar1 = sBpcWork;
  if ((*sBpcWork & 2) == 0) {
    K_Assert(D_0068E880, 0x3e1);
  }
  return puVar1[4];
}



// FUN_00244E80
void FUN_00244e80(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  int lVar6;
  u32 uVar7;
  
  if (sBpcWork == (uint *)0x0) {
    K_Assert(D_0068E880, 0x97);
  }
  puVar2 = sBpcWork;
  uVar4 = func_0021c3f0(1);
  uVar5 = func_0021c3f0(3);
  iVar3 = func_001ff430(puVar2[4]);
  if ((*puVar2 & 2) == 0) {
    K_Assert(D_0068E880, 0x3f0);
  }
  if (puVar2[2] != 1) {
    K_Assert(D_0068E880, 0x3f1);
  }
  lVar6 = func_00301ca0(*(u32 *)(iVar3 + 0xa2c),5);
  if (lVar6 != 0) {
    lVar6 = func_00301ca0(*(u32 *)(iVar3 + 0xa2c),10);
    if (lVar6 != 0) {
      K_Assert(D_0068E880, 0x3f6);
    }
    puVar2[0x1b31] = 1;
  }
  else {
    lVar6 = func_00301ca0(*(u32 *)(iVar3 + 0xa2c),10);
    if (lVar6 != 0) {
      puVar2[0x1b31] = 2;
    }
    else {
      puVar2[0x1b31] = 0;
    }
  }
  lVar6 = func_00301ca0(*(u32 *)(iVar3 + 0xa2c),0x40);
  if (lVar6 != 0) {
    lVar6 = func_00301ca0(*(u32 *)(iVar3 + 0xa2c),0x80);
    if (lVar6 != 0) {
      K_Assert(D_0068E880, 0x405);
    }
    puVar2[0x1b32] = 1;
  }
  else {
    lVar6 = func_00301ca0(*(u32 *)(iVar3 + 0xa2c),0x80);
    if (lVar6 != 0) {
      puVar2[0x1b32] = 2;
    }
    else {
      puVar2[0x1b32] = 0;
    }
  }
  lVar6 = func_00301ca0(*(u32 *)(iVar3 + 0xa2c),0x210);
  if (lVar6 != 0) {
    lVar6 = func_00301ca0(*(u32 *)(iVar3 + 0xa2c),0x120);
    if (lVar6 != 0) {
      K_Assert(D_0068E880, 0x414);
    }
    puVar2[0x1b33] = 1;
  }
  else {
    lVar6 = func_00301ca0(*(u32 *)(iVar3 + 0xa2c),0x120);
    if (lVar6 != 0) {
      puVar2[0x1b33] = 2;
    }
    else {
      puVar2[0x1b33] = 0;
    }
  }
  uVar1 = puVar2[0x1b31];
  switch (uVar1) {
  case 1:
    func_0021d3b0(puVar2 + 0x1b34,func_0021cca0(uVar4,0x3b));
    func_0021d3b0(puVar2 + 0x1bf4,func_0021cca0(uVar5,0x11));
    break;
  case 2:
    func_0021d3b0(puVar2 + 0x1b34,func_0021cca0(uVar4,0x3b));
    func_0021d3b0(puVar2 + 0x1bf4,func_0021cca0(uVar5,0x12));
    break;
  case 0:
    func_0021d3b0(puVar2 + 0x1b34,func_0021cca0(uVar4,0x3c));
    func_0021d3b0(puVar2 + 0x1bf4,func_0021cca0(uVar4,0x41));
    break;
  }
  uVar1 = puVar2[0x1b32];
  switch (uVar1) {
  case 1:
    func_0021d3b0(puVar2 + 0x1b74,func_0021cca0(uVar4,0x3d));
    func_0021d3b0(puVar2 + 0x1c34,func_0021cca0(uVar5,0x11));
    break;
  case 2:
    func_0021d3b0(puVar2 + 0x1b74,func_0021cca0(uVar4,0x3d));
    func_0021d3b0(puVar2 + 0x1c34,func_0021cca0(uVar5,0x12));
    break;
  case 0:
    func_0021d3b0(puVar2 + 0x1b74,func_0021cca0(uVar4,0x3e));
    func_0021d3b0(puVar2 + 0x1c34,func_0021cca0(uVar4,0x41));
    break;
  }
  uVar1 = puVar2[0x1b33];
  switch (uVar1) {
  case 1:
    func_0021d3b0(puVar2 + 0x1bb4,func_0021cca0(uVar4,0x3f));
    func_0021d3b0(puVar2 + 0x1c74,func_0021cca0(uVar5,0x11));
    break;
  case 2:
    func_0021d3b0(puVar2 + 0x1bb4,func_0021cca0(uVar4,0x3f));
    func_0021d3b0(puVar2 + 0x1c74,func_0021cca0(uVar5,0x12));
    break;
  case 0:
    func_0021d3b0(puVar2 + 0x1bb4,func_0021cca0(uVar4,0x40));
    func_0021d3b0(puVar2 + 0x1c74,func_0021cca0(uVar4,0x41));
    break;
  }
  return;
}



// FUN_002453D0
void FUN_002453d0(u16 param_1)
{
  if (sBpcWork == 0) {
    K_Assert(D_0068E880, 0x97);
  }
  *(u16 *)((u8 *)sBpcWork + 0x72d0) = param_1;
  return;
}



/* W389 measured opt_dead_assignments off: nd16/1264B -> nd8/1264B (window 1264B). */
/* W389 volatile staging of calc/skill and mode/skill loads was neutral at nd8/1264B; reverted. */
#pragma push
#pragma opt_dead_assignments off
/* W414 argument-order probes: literal-first call stayed nd8/1264B (window1264B, rate0.63%); typed prototype regressed nd601/1268B (over window); schedule-on regressed nd736/1076B (over window). Reverted; residual is the two-argument evaluation-order floor. */
// FUN_00245420
#ifndef PC_BUILD
asm void FUN_00245420(uint *param_1,uint param_2)
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
  .word 0x8f82b630
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e880
  .word 0x24050097
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b630
  .word 0x24040002
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040902d
  .word 0x24040005
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040b02d
  .word 0xae800000
  .word 0xae800004
  .word 0xae930008
  .word 0x0260202d
  .word 0x0c07fd0c
  .word 0x00000000
  .word 0x0040882d
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3042ffff
  .word 0xae820a30
  .word 0x8e240a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3042ffff
  .word 0xae820a34
  .word 0x0220202d
  .word 0x27a50080
  .word 0x0c0a0160
  .word 0x00000000
  .word 0x27a40080
  .word 0x26850a38
  .word 0x0c0b4828
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x8e820000
  .word 0x34420040
  .word 0xae820000
  .word 0xc6810a3c
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6800a3c
  .word 0x8e020000
  .word 0x30420002
  .word 0x10400008
  .word 0x00000000
  .word 0x8e830008
  .word 0x8e020010
  .word 0x14620004
  .word 0x00000000
  .word 0x8e820000
  .word 0x34420400
  .word 0xae820000
  .word 0x8e030004
  .word 0x24020002
  .word 0x10620045
  .word 0x00000000
  .word 0x24020001
  .word 0x10620073
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000006f
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x960572d0
  .word 0x0c0c03a4
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e820000
  .word 0x34420001
  .word 0xae820000
  .word 0x8e020000
  .word 0x30420008
  .word 0x10400062
  .word 0x00000000
  .word 0x8e230a2c
  .word 0x94620000
  .word 0x30420004
  .word 0x1040000b
  .word 0x00000000
  .word 0x94630002
  .word 0x00031140
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b720
  .word 0x00621021
  .word 0x9442001e
  .word 0x30420020
  .word 0x14400053
  .word 0x00000000
  .word 0x0000202d
  .word 0x960572d0
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x8e240a2c
  .word 0x0c0c1ba0
  .word 0x00000000
  .word 0x0040982d
  .word 0x8e220a2c
  .word 0x94440002
  .word 0x0c05ec98
  .word 0x00000000
  .word 0x10400043
  .word 0x00000000
  .word 0x3c020100
  .word 0x02621024
  .word 0x14400009
  .word 0x00000000
  .word 0x3c020200
  .word 0x02621024
  .word 0x14400005
  .word 0x00000000
  .word 0x3c020400
  .word 0x02621024
  .word 0x10400037
  .word 0x00000000
  .word 0x8e820000
  .word 0x34420002
  .word 0xae820000
  .word 0x10000032
  .word 0x00000000
  .word 0x8e220a2c
  .word 0x94440002
  .word 0x0c05ec98
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x8e820000
  .word 0x34420080
  .word 0xae820000
  .word 0x0000182d
  .word 0x10000005
  .word 0x00000000
  .word 0x00031080
  .word 0x02821021
  .word 0xac400a24
  .word 0x24630001
  .word 0x28620003
  .word 0x1440fffa
  .word 0x00000000
  .word 0x8e820000
  .word 0x30420080
  .word 0x1040001b
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c07fd0c
  .word 0x00000000
  .word 0x8c4300a8
  .word 0x16630004
  .word 0x00000000
  .word 0xae800a20
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e230a2c
  .word 0x94630002
  .word 0x8c420a2c
  .word 0x94420002
  .word 0x14620005
  .word 0x00000000
  .word 0x24020001
  .word 0xae820a20
  .word 0x10000003
  .word 0x00000000
  .word 0x24020002
  .word 0xae820a20
  .word 0x2403000a
  .word 0x8e820a20
  .word 0x00021080
  .word 0x00541021
  .word 0xac430a24
  .word 0x0240202d
  .word 0x24050003
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840010
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050002
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840210
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405002c
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840510
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050045
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840610
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840410
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x02c0202d
  .word 0x24050004
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840310
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x8e040004
  .word 0x24030002
  .word 0x10830012
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000002f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840110
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050037
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840110
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x8e820000
  .word 0x30420080
  .word 0x10400009
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050039
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840720
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050008
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840920
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405003d
  .word 0x0c087328
  .word 0x00000000
  .word 0x26840820
  .word 0x0040282d
  .word 0x0c0874ec
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
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_dead_assignments reset



// FUN_00245910
void FUN_00245910(uint *param_1)
{
  if ((*param_1 & 0x20) != 0) {
    param_1[0x1c4] = 10 - param_1[0x1c4];
    *param_1 = *param_1 & 0xffffffdf;
    *param_1 = *param_1 & 0xfffffdff;
  }
  else {
    param_1[0x1c4] = 0;
  }
  *param_1 = *param_1 | 0x10;
  return;
}


// FUN_00245970
void FUN_00245970(uint *param_1)
{
  if ((*param_1 & 0x10) != 0) {
    param_1[0x1c4] = 10 - param_1[0x1c4];
    *param_1 = *param_1 & 0xffffffef;
    *param_1 = *param_1 & 0xfffffdff;
  }
  else {
    param_1[0x1c4] = 0;
  }
  *param_1 = *param_1 | 0x20;
  return;
}


// FUN_002459D0
void FUN_002459d0(uint *param_1)
{
  param_1[0x1c4] = 0;
  *param_1 = *param_1 & 0xffffffef;
  *param_1 = *param_1 & 0xffffffdf;
  *param_1 = *param_1 | 0x200;
  return;
}



// FUN_00245A00
void FUN_00245a00(void)
{
  u32 *work;
  Battle *battle;
  u8 *unit;
  u8 *unit2;
  u8 *found;
  int count;
  int mode;

  if (sBpcWork == 0) {
    K_Assert(D_0068E880, 0x97);
  }
  work = sBpcWork;
  battle = gBtl;
  if (battle == 0) {
    K_Assert(D_0068E880, 0x519);
  }
  count = 0;
  mode = (int)work[1];
  switch (mode) {
  case 0:
  case 1:
    for (unit = (u8 *)battle->unitLists[0].head; unit != 0;
         unit = *(u8 **)(unit + 0xa34)) {
      if ((~*(uint *)(unit + 0x9c) & 8) == 0) {
        FUN_00245420((uint *)((u8 *)work + count * 0xa40 + 0x40),
                     *(u32 *)(unit + 0xa8));
        count = count + 1;
      }
    }
    for (unit2 = (u8 *)battle->unitLists[1].head; unit2 != 0;
         unit2 = *(u8 **)(unit2 + 0xa34)) {
      if ((~*(uint *)(unit2 + 0x9c) & 8) == 0) {
        FUN_00245420((uint *)((u8 *)work + count * 0xa40 + 0x40),
                     *(u32 *)(unit2 + 0xa8));
        count = count + 1;
      }
    }
    break;
  case 2:
    for (unit2 = (u8 *)battle->unitLists[1].head; unit2 != 0;
         unit2 = *(u8 **)(unit2 + 0xa34)) {
      if (((~*(uint *)(unit2 + 0x9c) & 8) == 0) &&
          (found = (u8 *)func_0029a1d0((int)unit2), found != 0) &&
          ((*(ushort *)(found + 0x1a) & 8) != 0)) {
        FUN_00245420((uint *)((u8 *)work + count * 0xa40 + 0x40),
                     *(u32 *)(unit2 + 0xa8));
        count = count + 1;
      }
    }
    break;
  }
  work[3] = count;
  return;
}



// FUN_00245BF0
uint *FUN_00245bf0(int param_1)
{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  if (sBpcWork == 0) {
    K_Assert(D_0068E880, 0x97);
  }
  puVar1 = sBpcWork;
  iVar2 = 0;
  iVar3 = (int)puVar1[3];
  for (; iVar2 < iVar3; iVar2 = iVar2 + 1) {
    iVar4 = *(int *)((u8 *)puVar1 + iVar2 * 0xa40 + 0x48);
    if (iVar4 == param_1) {
      break;
    }
  }
  if (iVar2 >= (int)puVar1[3]) {
    K_Assert(D_0068E880, 0x55f);
  }
  return (uint *)((u8 *)puVar1 + iVar2 * 0xa40 + 0x40);
}



// FUN_00245CD0
void FUN_00245cd0(void)

{
  uint sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  u32 *puVar5;
  
  if (sBpcWork == 0) {
    K_Assert(D_0068E880, 0x97);
  }
  iVar2 = (int)sBpcWork;
  func_0021c3f0(2);
  func_0021c3f0(1);
  iVar3 = func_001ff430(*(u32 *)(iVar2 + 0x10));
  sVar1 = *(ushort *)(*(int *)(iVar3 + 0xa2c) + 2);
  for (iVar3 = 0; iVar3 < *(int *)(iVar2 + 0xc); iVar3 = iVar3 + 1) {
    puVar5 = (u32 *)((u8 *)iVar2 + iVar3 * 0xa40 + 0x40);
    if ((~*puVar5 & 0x80) == 0) {
      iVar4 = func_001ff430(puVar5[2]);
      if (*(int *)(iVar4 + 0xa8) == *(int *)(iVar2 + 0x10)) {
        puVar5[0x288] = 0;
      }
      else if (*(ushort *)(*(int *)(iVar4 + 0xa2c) + 2) == sVar1) {
        puVar5[0x288] = 1;
      }
      else {
        puVar5[0x288] = 2;
      }
    }
  }
  return;
}



// FUN_00245E00
void FUN_00245e00(void)

{
  if (sBpcWork == (uint *)0x0) {
    K_Assert(D_0068E880, 0x97);
  }
  *sBpcWork = *sBpcWork | 0x80;
  return;
}



// FUN_00245E50
void FUN_00245e50(void)

{
  if (sBpcWork == (uint *)0x0) {
    K_Assert(D_0068E880, 0x97);
  }
  *sBpcWork = *sBpcWork & 0xffffff7f;
  return;
}



/* W389 measured opt_propagation off: nd7126/9636B -> nd6938/9468B (window 9712B). */
/* W418 width negatives: FUN_00245EA0 iVar5 s16 nd6938/9468B -> 7152/9636B; iVar12 s16 -> 7325/9876B (over 9712B). */
#pragma push
#pragma opt_propagation off
/* W419 negative probe: DAT_007caf38 float-array .sdata alias left FUN_00245EA0 at nd6938/9468B, window9712B, rate73.28%; reverted. */
/* Retail decodes three status-icon switches plus four flag-conditioned coordinate switches; all 9708/9712 bytes of the draw tail are represented, with only scheduler residuals remaining. */
// FUN_00245EA0
#ifndef PC_BUILD
asm void FUN_00245ea0(void)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf00c0
  .word 0x7fbe00b0
  .word 0x7fb700a0
  .word 0x7fb60090
  .word 0x7fb50080
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
  .word 0x8f82b630
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e880
  .word 0x24050097
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b630
  .word 0x24040002
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040f02d
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24040005
  .word 0x0c0870fc
  .word 0x00000000
  .word 0xafa200dc
  .word 0x24040003
  .word 0x0c0870fc
  .word 0x00000000
  .word 0xafa200d8
  .word 0x8e240000
  .word 0x00801827
  .word 0x30630100
  .word 0x10600003
  .word 0x00000000
  .word 0x34830100
  .word 0xae230000
  .word 0x0000902d
  .word 0x1000070a
  .word 0x00000000
  .word 0x00121880
  .word 0x00721821
  .word 0x000318c0
  .word 0x00721821
  .word 0x00031980
  .word 0x02231821
  .word 0x24700040
  .word 0xc4770a78
  .word 0xc4760a7c
  .word 0x8e240004
  .word 0x24030002
  .word 0x1083001f
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x0000302d
  .word 0x8e250008
  .word 0x10000008
  .word 0x00000000
  .word 0x00061880
  .word 0x02231821
  .word 0x8c640010
  .word 0x8e030008
  .word 0x10830005
  .word 0x00000000
  .word 0x24c60001
  .word 0x00c5182a
  .word 0x1460fff7
  .word 0x00000000
  .word 0x8e030000
  .word 0x00601827
  .word 0x30630020
  .word 0x10600010
  .word 0x00000000
  .word 0x14c5000e
  .word 0x00000000
  .word 0x100006de
  .word 0x00000000
  .word 0x8e030000
  .word 0x00602027
  .word 0x30830400
  .word 0x10600007
  .word 0x00000000
  .word 0x30830020
  .word 0x10600004
  .word 0x00000000
  .word 0x30830080
  .word 0x146006d3
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050003
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040982d
  .word 0x8c43000c
  .word 0x00031043
  .word 0x04610003
  .word 0x00000000
  .word 0x24620001
  .word 0x00021043
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b881
  .word 0x8e630010
  .word 0x00031043
  .word 0x04610003
  .word 0x00000000
  .word 0x24620001
  .word 0x00021043
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b041
  .word 0xe7a20100
  .word 0xe7a10104
  .word 0xc660000c
  .word 0x46800020
  .word 0x46001000
  .word 0xe7a00108
  .word 0xe7a1010c
  .word 0xe7a00110
  .word 0xc6600010
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00114
  .word 0xe7a20118
  .word 0xe7a0011c
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
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
  .word 0x4480c800
  .word 0x00000000
  .word 0x4600cfc6
  .word 0x8e230004
  .word 0x24020002
  .word 0x1062003a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000088
  .word 0x00000000
  .word 0x8e030000
  .word 0x30620010
  .word 0x1040000c
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x4600c7c6
  .word 0x10000012
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000d
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461807c1
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461f0002
  .word 0x3c024000
  .word 0x44821000
  .word 0x00000000
  .word 0x461f101a
  .word 0x4600f85d
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46001042
  .word 0xc7808248
  .word 0x46010642
  .word 0x10000056
  .word 0x00000000
  .word 0x8e030000
  .word 0x30620080
  .word 0x10400023
  .word 0x00000000
  .word 0xc6000a24
  .word 0x46800020
  .word 0x3c024120
  .word 0x44820800
  .word 0x00000000
  .word 0x460107c3
  .word 0x00000000
  .word 0x00000000
  .word 0x30620010
  .word 0x10400009
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800020
  .word 0x46010603
  .word 0x00000000
  .word 0x00000000
  .word 0x461fc7c2
  .word 0x1000002f
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000b
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800020
  .word 0x46010603
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46180001
  .word 0x461f07c2
  .word 0x10000022
  .word 0x00000000
  .word 0x10000020
  .word 0x00000000
  .word 0x30620010
  .word 0x1040000c
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x4600c7c6
  .word 0x10000012
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000d
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461807c1
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461f0002
  .word 0x3c024000
  .word 0x44821000
  .word 0x00000000
  .word 0x461f101a
  .word 0x4600f85d
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46001042
  .word 0xc7808248
  .word 0x46010642
  .word 0x0000a82d
  .word 0x1000001e
  .word 0x00000000
  .word 0x001510c0
  .word 0x005d1021
  .word 0x24560100
  .word 0x26d70004
  .word 0x4600cb06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460006c6
  .word 0xc6fa0000
  .word 0x4600cb06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6c10000
  .word 0x4600081a
  .word 0x461bd71d
  .word 0x4600cb06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460006c6
  .word 0xc6da0000
  .word 0x4600cb06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6e10000
  .word 0x4600081a
  .word 0x461bd01c
  .word 0xe6dc0000
  .word 0xe6e00000
  .word 0x26b50001
  .word 0x2aa20004
  .word 0x1440ffe1
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
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
  .word 0x26040010
  .word 0x27a50100
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461f0042
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
  .word 0xa3a3012f
  .word 0x26040010
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e230004
  .word 0x24050002
  .word 0x1065007e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000015b
  .word 0x00000000
  .word 0x8e230000
  .word 0x30640010
  .word 0x10800037
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420010
  .word 0x1040001c
  .word 0x00000000
  .word 0x30620020
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44821800
  .word 0x10000017
  .word 0x00000000
  .word 0x8e020710
  .word 0x28410004
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44821800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44821800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46030042
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4603001a
  .word 0x44801000
  .word 0x00000000
  .word 0x460118dd
  .word 0xc62172dc
  .word 0x4601b801
  .word 0x46011018
  .word 0x46001d5c
  .word 0xc62172e0
  .word 0x4601b001
  .word 0x46011018
  .word 0x46001d1c
  .word 0x10000003
  .word 0x00000000
  .word 0x4600bd46
  .word 0x4600b506
  .word 0x8e030000
  .word 0x30620010
  .word 0x1040001b
  .word 0x00000000
  .word 0x10800005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x1000002f
  .word 0x00000000
  .word 0x8e020710
  .word 0x28410004
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000fc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x1000001b
  .word 0x00000000
  .word 0x30620020
  .word 0x10400016
  .word 0x00000000
  .word 0x30620400
  .word 0x10400010
  .word 0x00000000
  .word 0x8e030710
  .word 0x2402000a
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000fc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x4480f800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x100000e5
  .word 0x00000000
  .word 0x8e020000
  .word 0x30430080
  .word 0x1060006f
  .word 0x00000000
  .word 0x8e040a20
  .word 0x10850060
  .word 0x00000000
  .word 0x24030001
  .word 0x1083005d
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000005e
  .word 0x00000000
  .word 0x8e230000
  .word 0x30630010
  .word 0x10600026
  .word 0x00000000
  .word 0x30430200
  .word 0x1060000c
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c034080
  .word 0x44830000
  .word 0x00000000
  .word 0x460008c3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46030042
  .word 0x3c034000
  .word 0x44830000
  .word 0x00000000
  .word 0x4603001a
  .word 0x44801000
  .word 0x00000000
  .word 0x460118dd
  .word 0xc62172dc
  .word 0x4601b801
  .word 0x46011018
  .word 0x46001d5c
  .word 0xc62172e0
  .word 0x4601b001
  .word 0x46011018
  .word 0x46001d1c
  .word 0x10000003
  .word 0x00000000
  .word 0x4600bd46
  .word 0x4600b506
  .word 0x30430010
  .word 0x10600015
  .word 0x00000000
  .word 0x8e020710
  .word 0x28410004
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000fc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x10000015
  .word 0x00000000
  .word 0x30420020
  .word 0x10400010
  .word 0x00000000
  .word 0x8e030710
  .word 0x2402000a
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000fc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x1000007f
  .word 0x00000000
  .word 0x4600bd46
  .word 0x4600b506
  .word 0x4480f800
  .word 0x1000007a
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e880
  .word 0x240506d8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000073
  .word 0x00000000
  .word 0x8e250000
  .word 0x30a40010
  .word 0x10800036
  .word 0x00000000
  .word 0x30430010
  .word 0x1060001c
  .word 0x00000000
  .word 0x30a30020
  .word 0x10600005
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0x10000017
  .word 0x00000000
  .word 0x8e030710
  .word 0x28610004
  .word 0x1020000d
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c034080
  .word 0x44830000
  .word 0x00000000
  .word 0x460008c3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46030042
  .word 0x3c034000
  .word 0x44830000
  .word 0x00000000
  .word 0x4603001a
  .word 0x44801000
  .word 0x00000000
  .word 0x460118dd
  .word 0xc62172dc
  .word 0x4601b801
  .word 0x46011018
  .word 0x46001d5c
  .word 0xc62172e0
  .word 0x4601b001
  .word 0x46011018
  .word 0x46001d1c
  .word 0x10000003
  .word 0x00000000
  .word 0x4600bd46
  .word 0x4600b506
  .word 0x30430010
  .word 0x1060001b
  .word 0x00000000
  .word 0x10800005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x1000002f
  .word 0x00000000
  .word 0x8e020710
  .word 0x28410004
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000fc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x1000001b
  .word 0x00000000
  .word 0x30430020
  .word 0x10600016
  .word 0x00000000
  .word 0x30420400
  .word 0x10400010
  .word 0x00000000
  .word 0x8e030710
  .word 0x2402000a
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000fc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x4480f800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x8e230004
  .word 0x24020002
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050004
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040982d
  .word 0x10000006
  .word 0x00000000
  .word 0x03c0202d
  .word 0x24050037
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040982d
  .word 0x8e63000c
  .word 0x00031043
  .word 0x04610003
  .word 0x00000000
  .word 0x24620001
  .word 0x00021043
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a801
  .word 0xe7a00100
  .word 0x8e630010
  .word 0x00031043
  .word 0x04610003
  .word 0x00000000
  .word 0x24620001
  .word 0x00021043
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a001
  .word 0xe7a00104
  .word 0xc660000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc6600010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040110
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461f0042
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
  .word 0xa3a3012f
  .word 0x26040110
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050002
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
  .word 0x4600b801
  .word 0xe7a00100
  .word 0x8c440010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b001
  .word 0xe7a00104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040210
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e230004
  .word 0x24020002
  .word 0x1062002a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000065
  .word 0x00000000
  .word 0x8e030000
  .word 0x30620010
  .word 0x1040000c
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x4600c7c6
  .word 0x10000012
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000d
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461807c1
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x10000043
  .word 0x00000000
  .word 0x8e030000
  .word 0x30620080
  .word 0x10400020
  .word 0x00000000
  .word 0xc6000a24
  .word 0x46800020
  .word 0x3c024120
  .word 0x44820800
  .word 0x00000000
  .word 0x460107c3
  .word 0x00000000
  .word 0x00000000
  .word 0x30620010
  .word 0x10400009
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800020
  .word 0x46010603
  .word 0x00000000
  .word 0x00000000
  .word 0x461fc7c2
  .word 0x1000002c
  .word 0x00000000
  .word 0x30620020
  .word 0x10400008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46180001
  .word 0x461f07c2
  .word 0x10000022
  .word 0x00000000
  .word 0x10000020
  .word 0x00000000
  .word 0x30620010
  .word 0x1040000c
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x4600c7c6
  .word 0x10000012
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000d
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461807c1
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461f0042
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
  .word 0xa3a3012f
  .word 0x26040210
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405002c
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034234
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b8c1
  .word 0x3c034230
  .word 0x44831000
  .word 0x00000000
  .word 0x4602b041
  .word 0xe7a30100
  .word 0xe7a10104
  .word 0xc440000c
  .word 0x46800020
  .word 0x46001800
  .word 0xe7a00108
  .word 0xe7a1010c
  .word 0xe7a00110
  .word 0xc4400010
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00114
  .word 0xe7a30118
  .word 0xe7a0011c
  .word 0x0000182d
  .word 0x46031780
  .word 0x46011740
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x461e0001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x461d0001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x8e2272d4
  .word 0x00021040
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024270
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f03
  .word 0x00000000
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000001e
  .word 0x00000000
  .word 0x001310c0
  .word 0x005d1021
  .word 0x24550100
  .word 0x26b60004
  .word 0x4600e306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000686
  .word 0xc6d90000
  .word 0x4600e306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6a10000
  .word 0x4600081a
  .word 0x461acedd
  .word 0x4600e306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000686
  .word 0xc6b90000
  .word 0x4600e306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6c10000
  .word 0x4600081a
  .word 0x461ac81c
  .word 0xe6bb0000
  .word 0xe6c00000
  .word 0x26730001
  .word 0x2a620004
  .word 0x1440ffe1
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x461e0000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x461d0000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26040510
  .word 0x27a50100
  .word 0x0c087624
  .word 0x00000000
  .word 0x8e230004
  .word 0x24020002
  .word 0x1062002a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x8e030000
  .word 0x30620010
  .word 0x1040000c
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x4600c7c6
  .word 0x10000012
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000d
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461807c1
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x10000002
  .word 0x00000000
  .word 0x4480f800
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461f0042
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
  .word 0xa3a3012f
  .word 0x26040510
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e230004
  .word 0x24020002
  .word 0x1062002a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x8e030000
  .word 0x30620010
  .word 0x1040000c
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x4600c7c6
  .word 0x10000012
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000d
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461807c1
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482f800
  .word 0x10000002
  .word 0x00000000
  .word 0x4480f800
  .word 0x0280202d
  .word 0x24050045
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
  .word 0x4600b801
  .word 0xe7a00100
  .word 0x8c440010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b001
  .word 0xe7a00104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040610
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461f0042
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
  .word 0xa3a3012f
  .word 0x26040610
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e240004
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100000c6
  .word 0x00000000
  .word 0x8e030000
  .word 0x30620010
  .word 0x1040001e
  .word 0x00000000
  .word 0x8e020710
  .word 0x28410004
  .word 0x10200006
  .word 0x00000000
  .word 0x3c02c1f0
  .word 0x4482c800
  .word 0x4480d000
  .word 0x1000003b
  .word 0x00000000
  .word 0x2442fffc
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e83
  .word 0x3c0241f0
  .word 0x44821000
  .word 0x00000000
  .word 0x461a1042
  .word 0x3c024270
  .word 0x44820000
  .word 0x00000000
  .word 0x461a001a
  .word 0x4601d01d
  .word 0x46020641
  .word 0x10000027
  .word 0x00000000
  .word 0x30620020
  .word 0x10400021
  .word 0x00000000
  .word 0x8e020710
  .word 0x28410006
  .word 0x10200018
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010681
  .word 0x3c0241f0
  .word 0x44821000
  .word 0x00000000
  .word 0x461a1042
  .word 0x3c024270
  .word 0x44820000
  .word 0x00000000
  .word 0x461a001a
  .word 0x4601d01d
  .word 0x46020641
  .word 0x10000009
  .word 0x00000000
  .word 0x3c02c1f0
  .word 0x4482c800
  .word 0x4480d000
  .word 0x10000004
  .word 0x00000000
  .word 0x4480c800
  .word 0x3c023f80
  .word 0x4482d000
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c087328
  .word 0x00000000
  .word 0x4619b800
  .word 0xe7a00100
  .word 0xe7b60104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040410
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461a0682
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461a0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600d024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600d001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040410
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8fa400dc
  .word 0x24050004
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040982d
  .word 0x0260202d
  .word 0x27a500e0
  .word 0x0c087340
  .word 0x00000000
  .word 0xc6000a30
  .word 0x46800060
  .word 0xc6000a34
  .word 0x46800020
  .word 0x46000ec3
  .word 0xc7a100e0
  .word 0xc7a000e8
  .word 0x46010001
  .word 0x461b0002
  .word 0xe7a10100
  .word 0xc7a100e4
  .word 0xe7a10104
  .word 0xe7a00108
  .word 0xc7a000ec
  .word 0x46010001
  .word 0xe7a0010c
  .word 0x26040310
  .word 0x27a50100
  .word 0x0c087ae0
  .word 0x00000000
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46170000
  .word 0x46190000
  .word 0xe7a00100
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46160000
  .word 0xe7a00104
  .word 0xc660000c
  .word 0x46800020
  .word 0x461b0002
  .word 0xe7a00108
  .word 0xc6600010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040310
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461a0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600d024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600d001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040310
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e240004
  .word 0x24030002
  .word 0x10830003
  .word 0x00000000
  .word 0x10000143
  .word 0x00000000
  .word 0x8e040000
  .word 0x30820080
  .word 0x10400027
  .word 0x00000000
  .word 0x8e030a2c
  .word 0x2402000a
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x3c024120
  .word 0x44820800
  .word 0x00000000
  .word 0x46010643
  .word 0x00000000
  .word 0x00000000
  .word 0x30820010
  .word 0x10400009
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800020
  .word 0x46010603
  .word 0x00000000
  .word 0x00000000
  .word 0x4619c642
  .word 0x10000011
  .word 0x00000000
  .word 0x30820020
  .word 0x1040000b
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800020
  .word 0x46010603
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46180001
  .word 0x46190642
  .word 0x10000004
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480c800
  .word 0x03c0202d
  .word 0x24050039
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
  .word 0x4600b801
  .word 0xe7a00100
  .word 0x8c440010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b001
  .word 0xe7a00104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040720
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
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
  .word 0xa3a3012f
  .word 0x26040720
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030000
  .word 0x30620080
  .word 0x10400023
  .word 0x00000000
  .word 0xc6000a2c
  .word 0x46800020
  .word 0x3c024120
  .word 0x44820800
  .word 0x00000000
  .word 0x46010643
  .word 0x00000000
  .word 0x00000000
  .word 0x30620010
  .word 0x10400009
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800020
  .word 0x46010603
  .word 0x00000000
  .word 0x00000000
  .word 0x4619c642
  .word 0x10000011
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000b
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800020
  .word 0x46010603
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46180001
  .word 0x46190642
  .word 0x10000004
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480c800
  .word 0x03c0202d
  .word 0x2405003d
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
  .word 0x4600b801
  .word 0xe7a00100
  .word 0x8c440010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b001
  .word 0xe7a00104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040820
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
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
  .word 0xa3a3012f
  .word 0x26040820
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030000
  .word 0x30620080
  .word 0x10400023
  .word 0x00000000
  .word 0xc6000a28
  .word 0x46800020
  .word 0x3c024120
  .word 0x44820800
  .word 0x00000000
  .word 0x46010643
  .word 0x00000000
  .word 0x00000000
  .word 0x30620010
  .word 0x10400009
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800020
  .word 0x46010603
  .word 0x00000000
  .word 0x00000000
  .word 0x4619c642
  .word 0x10000011
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000b
  .word 0x00000000
  .word 0xc6000710
  .word 0x46800020
  .word 0x46010603
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46180001
  .word 0x46190642
  .word 0x10000004
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480c800
  .word 0x0280202d
  .word 0x24050008
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
  .word 0x4600b801
  .word 0xe7a00100
  .word 0x8c440010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b001
  .word 0xe7a00104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040920
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
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
  .word 0xa3a3012f
  .word 0x26040920
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x8e23000c
  .word 0x0243182a
  .word 0x1460f8f4
  .word 0x00000000
  .word 0x8e240000
  .word 0x30830002
  .word 0x10600219
  .word 0x00000000
  .word 0x30820004
  .word 0x10400007
  .word 0x00000000
  .word 0x24020113
  .word 0x44820000
  .word 0x00000000
  .word 0x46800560
  .word 0x10000005
  .word 0x00000000
  .word 0x24020135
  .word 0x44820000
  .word 0x00000000
  .word 0x46800560
  .word 0x8e246cc0
  .word 0x0c0ec674
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800520
  .word 0x8e220000
  .word 0x30420004
  .word 0x10400005
  .word 0x00000000
  .word 0x3c024311
  .word 0x4482b000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a003
  .word 0x4600a841
  .word 0x3c024264
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d81
  .word 0x0280202d
  .word 0x24050043
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0xe7b60100
  .word 0x3c0342c8
  .word 0xafa30104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x262466c0
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x262466c0
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420004
  .word 0x1040000b
  .word 0x00000000
  .word 0xc600000c
  .word 0x46800060
  .word 0x3c024311
  .word 0x44820000
  .word 0x00000000
  .word 0x46010080
  .word 0x3c02438f
  .word 0x44820000
  .word 0x10000014
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a0c3
  .word 0xc600000c
  .word 0x468000a0
  .word 0x4603a801
  .word 0x3c024264
  .word 0x44820800
  .word 0x00000000
  .word 0x46010001
  .word 0x46001080
  .word 0x4603a800
  .word 0x46000840
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0x46020001
  .word 0xe7a20100
  .word 0x3c0242c8
  .word 0xafa20104
  .word 0xe7a00108
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x262467c0
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x262467c0
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420004
  .word 0x10400007
  .word 0x00000000
  .word 0x240201c3
  .word 0x44820000
  .word 0x00000000
  .word 0x468005a0
  .word 0x1000000e
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a003
  .word 0x4600a840
  .word 0x3c024264
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d81
  .word 0x0280202d
  .word 0x24050044
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b60100
  .word 0x3c0342c8
  .word 0xafa30104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x262468c0
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x262468c0
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x8e230000
  .word 0x30630004
  .word 0x10600011
  .word 0x00000000
  .word 0x3c0342e8
  .word 0x44831800
  .word 0x8c44000c
  .word 0x000419c0
  .word 0x00642023
  .word 0x00041880
  .word 0x00831821
  .word 0x00032040
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c034000
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a083
  .word 0x4602a801
  .word 0x3c0342ac
  .word 0x44830800
  .word 0x00000000
  .word 0x460100c1
  .word 0x4602a800
  .word 0x46000800
  .word 0x46030001
  .word 0xe7a30100
  .word 0x3c034258
  .word 0xafa30104
  .word 0xe7a00108
  .word 0x8c430010
  .word 0x00031180
  .word 0x00431821
  .word 0x00031080
  .word 0x00431023
  .word 0x00021840
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x262469c0
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x262469c0
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a503
  .word 0x4614ad81
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46160002
  .word 0x46000024
  .word 0x44050000
  .word 0x3c024426
  .word 0x44820000
  .word 0x00000000
  .word 0x46000024
  .word 0x44060000
  .word 0x8e246cc0
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e246cc0
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050042
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c0341e0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b001
  .word 0xe7a00100
  .word 0x3c0342b6
  .word 0xafa30104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26246ac0
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x26246ac0
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x4614a840
  .word 0x3c0241e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00100
  .word 0x3c0242b6
  .word 0xafa20104
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26246bc0
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x26246bc0
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e230000
  .word 0x30630004
  .word 0x106000d9
  .word 0x00000000
  .word 0x8e236cc4
  .word 0x10600010
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405003b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000006
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405003c
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c02438b
  .word 0xafa20100
  .word 0x3c0242e2
  .word 0xafa20104
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26246cd0
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x26246cd0
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e236cc8
  .word 0x10600010
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405003d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000006
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405003e
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x24020151
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00100
  .word 0x3c0242e2
  .word 0xafa20104
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26246dd0
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x26246dd0
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e236ccc
  .word 0x10600010
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405003f
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000006
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050040
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c0243c6
  .word 0xafa20100
  .word 0x3c0242e2
  .word 0xafa20104
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26246ed0
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x26246ed0
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000046
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x8c436cc4
  .word 0x10600017
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000d
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x8fa400d8
  .word 0x24050011
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x1000000d
  .word 0x00000000
  .word 0x8fa400d8
  .word 0x24050012
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000006
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050041
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c02426c
  .word 0x44821800
  .word 0x44920000
  .word 0x00000000
  .word 0x468000a0
  .word 0x3c024398
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0xe7a00100
  .word 0x3c0242e2
  .word 0xafa20104
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x00121200
  .word 0x02221021
  .word 0x24536fd0
  .word 0x0260202d
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x0260202d
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430003
  .word 0x1460ffb9
  .word 0x00000000
  .word 0xdfbf00c0
  .word 0x7bbe00b0
  .word 0x7bb700a0
  .word 0x7bb60090
  .word 0x7bb50080
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
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_propagation reset





#include "Kernel/Kwln/kwlnTask.h"

#pragma alias FUN_002491f0_y2 FUN_002491f0


#pragma alias bpcInit FUN_00248490
#pragma alias bpmUpdate FUN_00249180


static u32* sBpmWork; // puGpffffb634
extern u32* sBpc324; // 007ce324 / GP -0x49CC

// FUN_00248490
void bpcInit(u32* param_1)
{
    *param_1 = 0;
    sBpc324 = param_1;
}

void FUN_002491f0_y2();




/* BPC panel subtask state at DAT_007CE324 / GP -0x49CC. */
extern u32* sBpc324; // 007CE324 / GP -0x49CC
/* BPC command subtask state at DAT_007CE328 / GP -0x49C8. */
u32* sBpc328;

typedef void (*BpcRenderState)(s32 property, u32 value);
typedef void (*BpcRenderQuad)(void* quad, s32 count, s32 group, s32 pass, s32 blend);
extern BpcRenderState gBpcRenderState;
extern BpcRenderQuad gBpcRenderQuad;
extern u32 D_00960090_y2[];
extern u32 D_0096009C_y2[];
extern void RpSkyRenderStateSet(s32 state, u32 value);
extern void* func_0021c550(s32 index);
extern void* func_003a52c0(f32 angle, s32 width, s32 height, s32 first,
                            s32 mode, s32 count, void* left, void* right);
extern void func_003b1360_y2(u32 resource, s32 mode, s32 group);
extern void func_003b0e20_y2(u32 resource, u32 color);
extern void frFontSetTextScale(u32 resource, f32 angle);
extern void func_003c72d0(void* resource);
extern void func_003c7430(s32 mode);
extern void func_003c7650(s32 mode);
extern u32 func_003c7850(void);
extern void func_003c7990(s32 mode);
extern void func_003c7bc0(s32 mode, u32 value);
extern void func_003c7c20(s32 mode, u32 value, s32 count);
extern void func_003c77a0(void);
extern u32 func_00173220(u16 value);
extern u32 func_001775a0_y2(u16 value);
extern void func_003c94e0(void* resource);
extern void func_003c9790(s32 mode);
extern s32 datGetFlag(s32 flag);
extern void datSetFlag(s32 flag, u8 value);
extern void* func_0030c0c0(void);

static void bpc324RenderState(u32 state, u32 value)
{
    gBpcRenderState(state, value);
}

static void bpc324Draw(void* quad, s32 pass, s32 blend)
{
    gBpcRenderQuad(quad, 4, 0, pass, blend);
}

static u32 bpc324Flags(void)
{
    K_ASSERT(sBpc324 != NULL, 0x3d);
    return *sBpc324;
}

void* FUN_00248f40(void*);
void FUN_002491f0(void);
void FUN_00248fc0(void*);
