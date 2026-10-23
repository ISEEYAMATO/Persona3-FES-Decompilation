#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"

typedef int (*code)(...);
void FUN_0025b4f0(void);
void FUN_0025b690(void);
void FUN_0025bbf0(void);
extern u8 DAT_00960090_abs_y2[];
extern u8 DAT_0096009c_abs_y2[];
extern f32 fGpffff83c4;
extern void* FUN_0020e610(s32 index);
extern void FUN_0010a4e0(s32, s32, s32, s32);
extern void FUN_0021d890(void* work, const f32* values);
extern void FUN_0021d8e0_y2(void* work, const f32* values);
extern void FUN_0021d950_y2(void* work, const u8* color);
typedef struct {
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    u8 padA0[0xc];
    u8 spAC;
    u8 spAD;
    u8 spAE;
    u8 spAF;
} SflCountStack;
static u32* sSflCount; // puGpffffb674


#pragma alias DAT_00960090_abs_y2 DAT_00960090_abs
#pragma alias DAT_0096009c_abs_y2 DAT_0096009c_abs
#pragma alias FUN_0021d8e0_y2 FUN_0021d8e0
#pragma alias FUN_0021d950_y2 FUN_0021d950

#ifndef SQRT
#define SQRT(x) sqrtf(x)
#endif
float sqrtf(float x);


/* Recovered battle-misc support prelude */
typedef int (*code)(...);
void FUN_0025a120(void);
void FUN_0025a130(void);
void FUN_0025a440(void);
void FUN_0025a7d0(void);
void FUN_0025aad0(void);
void FUN_0025b440(void);
extern code DAT_00960090;
extern code DAT_0096009c;
#pragma alias DAT_00960090_abs DAT_00960090
#pragma alias DAT_0096009c_abs DAT_0096009c
extern code DAT_00960090_abs[];
extern code DAT_0096009c_abs[];
#define DAT_00960090 DAT_00960090_abs
#define DAT_0096009c DAT_0096009c_abs
extern f32 fGpffff8088;
extern f32 fGpffff8248;
extern f32 fGpffff82ac;
extern f32 fGpffff83b8;
extern f32 fGpffff83bc;
extern f32 fGpffff82fc;
extern f32 FUN_0052e878(f32 angle);
extern u32 uGpffffb670;

typedef struct { f32 a; f32 b; f32 c; } SflVec3;
typedef struct {
  u32 flags;
  f32 from[3];
  f32 to[3];
  f32 position[3];
  u32 frame;
  u32 previous;
  u32 active;
  u32 timer;
  u8 padding[0xc68];
  u32 state;
} SflCursorWork;


static u32* sSflCursor; // puGpffffb670

void FUN_00258540(u32 param_1, void* param_2);
extern u32 FUN_0020e510(s32 index);
extern void FUN_0021eb80(void* work, const f32* values);
extern void FUN_00250f80(f32* output, const void* input);
extern u32* FUN_00256110(u32 id);
extern void FUN_002561e0(f32 amount, void* node);


#pragma opt_loop_invariants on
// FUN_0025A130


#ifndef PC_BUILD
asm void FUN_0025a130(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0000
  .word 0x8f83b670
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ebb8
  .word 0x24050047
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f83b670
  .word 0x8c640000
  .word 0x00802027
  .word 0x30840001
  .word 0x148000b0
  .word 0x00000000
  .word 0x8c620034
  .word 0x24440001
  .word 0xac640034
  .word 0x2402003c
  .word 0x0082001a
  .word 0x00001010
  .word 0xac620034
  .word 0x8c620000
  .word 0x30420002
  .word 0x10400064
  .word 0x00000000
  .word 0x8c640ca0
  .word 0x24020002
  .word 0x10820056
  .word 0x00000000
  .word 0x24020003
  .word 0x10820044
  .word 0x00000000
  .word 0x24020001
  .word 0x10820035
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000056
  .word 0x00000000
  .word 0x8c620028
  .word 0x24440001
  .word 0xac640028
  .word 0x24020004
  .word 0x14820005
  .word 0x00000000
  .word 0x8c640000
  .word 0x2402fffd
  .word 0x00821024
  .word 0xac620000
  .word 0xc4600028
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x460009c3
  .word 0xc4660004
  .word 0xc4600010
  .word 0x46060141
  .word 0xe7a50010
  .word 0xc4640008
  .word 0xc4600014
  .word 0x46040081
  .word 0xe7a20014
  .word 0xc463000c
  .word 0xc4600018
  .word 0x46030041
  .word 0xe7a10018
  .word 0x46072802
  .word 0xe7a00010
  .word 0x46071082
  .word 0xe7a20014
  .word 0x46070842
  .word 0xe7a10018
  .word 0x46060000
  .word 0xe7a00010
  .word 0x46041000
  .word 0xe7a00014
  .word 0x46030800
  .word 0xe7a00018
  .word 0xc7a20010
  .word 0xc7a10014
  .word 0xc7a00018
  .word 0xe462001c
  .word 0xe4610020
  .word 0xe4600024
  .word 0x10000026
  .word 0x00000000
  .word 0x8c620028
  .word 0x24440001
  .word 0xac640028
  .word 0x24020004
  .word 0x14820020
  .word 0x00000000
  .word 0x8c640000
  .word 0x2402fffd
  .word 0x00821024
  .word 0xac620000
  .word 0x1000001a
  .word 0x00000000
  .word 0x8c620028
  .word 0x24440001
  .word 0xac640028
  .word 0x24020010
  .word 0x14820014
  .word 0x00000000
  .word 0x8c640000
  .word 0x2402fffd
  .word 0x00822024
  .word 0xac640000
  .word 0x2402fffe
  .word 0x00821024
  .word 0xac620000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8c620028
  .word 0x24440001
  .word 0xac640028
  .word 0x24020010
  .word 0x14820005
  .word 0x00000000
  .word 0x8c640000
  .word 0x2402fffd
  .word 0x00821024
  .word 0xac620000
  .word 0x0000302d
  .word 0x24040100
  .word 0x10000039
  .word 0x00000000
  .word 0x00061140
  .word 0x00461021
  .word 0x00021100
  .word 0x00621021
  .word 0x24450040
  .word 0x8c620030
  .word 0x14c2000e
  .word 0x00000000
  .word 0x8ca20000
  .word 0x28410100
  .word 0x10200003
  .word 0x00000000
  .word 0x24420019
  .word 0xaca20000
  .word 0x8ca20000
  .word 0x28410101
  .word 0x1420000d
  .word 0x00000000
  .word 0xaca40000
  .word 0x1000000a
  .word 0x00000000
  .word 0x8ca20000
  .word 0x10400003
  .word 0x00000000
  .word 0x2442fff8
  .word 0xaca20000
  .word 0x8ca20000
  .word 0x04410002
  .word 0x00000000
  .word 0xaca00000
  .word 0x8c620030
  .word 0x14c2000e
  .word 0x00000000
  .word 0x8ca20004
  .word 0x28410100
  .word 0x10200003
  .word 0x00000000
  .word 0x24420040
  .word 0xaca20004
  .word 0x8ca20004
  .word 0x28410101
  .word 0x1420000d
  .word 0x00000000
  .word 0xaca40004
  .word 0x1000000a
  .word 0x00000000
  .word 0x8ca20004
  .word 0x10400003
  .word 0x00000000
  .word 0x2442fff4
  .word 0xaca20004
  .word 0x8ca20004
  .word 0x04410002
  .word 0x00000000
  .word 0xaca00004
  .word 0x24c60001
  .word 0x28c20006
  .word 0x1440ffc6
  .word 0x00000000
  .word 0x0c096ab4
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0025A440


void FUN_0025a440(void)
{
  volatile /* Removing this function's qualifier batch loses FUN_0025a440 (MATCH nd0 -> MISMATCH nd618, size 908 -> 940) - measured W170. */ code *pRender;
  volatile /* Removing this function's qualifier batch loses FUN_0025a440 (MATCH nd0 -> MISMATCH nd618, size 908 -> 940) - measured W170. */ code *pTex;
  u32 *puVar1;
  u32 *puVar2;
  u32 uVar2;
  s32 bVar3;
  s32 uVar4;

  K_ASSERT(sSflCursor != NULL, 0x47);
  puVar1 = sSflCursor;
  if ((~*puVar1 & 1) == 0) {
    pRender = DAT_00960090_abs;
    (*pRender)(9,2);
    (*pRender)(0x14,2);
    (*pRender)(8,0);
    (*pRender)(6,0);
    FUN_004d7f60(3,0x717fb);
    FUN_004d7f60(2,0x44);
    uVar2 = FUN_0020e510(4);
    (*pRender)(1,uVar2);
    pTex = DAT_0096009c_abs;
    (*pTex)(puVar1 + 0x32c,4,0,1,2);
    (*pTex)(puVar1 + 0x32c,4,0,2,3);
    (*pTex)(puVar1 + 0x36c,4,0,1,2);
    (*pTex)(puVar1 + 0x36c,4,0,2,3);
    uVar2 = FUN_0020e590(2);
    (*pRender)(1,uVar2);
    (*pTex)(puVar1 + 0x3ac,4,0,1,2);
    (*pTex)(puVar1 + 0x3ac,4,0,2,3);
    FUN_004d7f60(3,0x71801);
    FUN_004d7f60(2,0x48);
    for (uVar4 = 0; uVar4 < 6; uVar4 = uVar4 + 1) {
      puVar2 = puVar1 + uVar4 * 0x84 + 0x10;
      bVar3 = 0;
      if (((*puVar1 & 2) != 0) && (puVar1[0x328] == 1)) {
        if ((uVar4 == (s32)puVar1[0xc]) ||
            (uVar4 == (s32)puVar1[0xb])) {
          bVar3 = 1;
        }
      } else if (uVar4 == (s32)puVar1[0xc]) {
        bVar3 = 1;
      }
      if (bVar3) {
        volatile /* Removing this function's qualifier batch loses FUN_0025a440 (MATCH nd0 -> MISMATCH nd618, size 908 -> 940) - measured W170. */ code *pTexInner;

        uVar2 = FUN_0020e510(2);
        (*pRender)(1,uVar2);
        pTexInner = DAT_0096009c_abs;
        (*pTexInner)(puVar2 + 4,4,0,1,2);
        (*pTexInner)(puVar2 + 4,4,0,2,3);
      }
      if (*puVar2 != 0) {
        volatile /* Removing this function's qualifier batch loses FUN_0025a440 (MATCH nd0 -> MISMATCH nd618, size 908 -> 940) - measured W170. */ code *pTexInner;

        uVar2 = FUN_0020e510(1);
        (*pRender)(1,uVar2);
        pTexInner = DAT_0096009c_abs;
        (*pTexInner)(puVar2 + 0x44,4,0,1,2);
        (*pTexInner)(puVar2 + 0x44,4,0,2,3);
      }
    }
  }
  return;
}

// FUN_0025A7D0
void FUN_0025a7d0(void)
{
    u32* puVar2;
    s32 iVar3;
    s32 iVar4;
    f32 fVar7;
    f32 fVar5;
    f32 fVar6;
    f32 width;
    f32 height;
    f32 rect[4];

    K_ASSERT(sSflCursor != NULL, 0x47);
    puVar2 = sSflCursor;
    *sSflCursor = 0;

    iVar3 = FUN_0020e510(4);
    width = (f32)*(s32*)(iVar3 + 0xc);
    height = (f32)*(s32*)(iVar3 + 0x10);
    fVar7 = 1.0f / width;
    rect[0] = fVar7;
    rect[1] = 0.0f / height;
    fVar6 = 117.0f / width;
    rect[2] = fVar6;
    fVar5 = 32.0f / height;
    rect[3] = fVar5;
    FUN_0021eb80(puVar2 + 0x32c, rect);

    rect[0] = fVar7;
    rect[1] = fVar5;
    rect[2] = fVar6;
    rect[3] = fVar5;
    FUN_0021eb80(puVar2 + 0x36c, rect);

    iVar3 = FUN_0020e590(2);
    width = (f32)*(s32*)(iVar3 + 0xc);
    height = (f32)*(s32*)(iVar3 + 0x10);
    rect[0] = 0.0f / width;
    rect[1] = 84.0f / height;
    rect[2] = 63.0f / width;
    rect[3] = 20.0f / height;
    FUN_0021eb80(puVar2 + 0x3ac, rect);

    FUN_00258540(0, puVar2 + 7);
    for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
        u8* entry;

        entry = (u8*)puVar2 + iVar3 * 0x210 + 0x40;
        *(u32*)entry = 0;
        *(u32*)(entry + 4) = 0;

        iVar4 = FUN_0020e510(2);
        width = (f32)*(s32*)(iVar4 + 0xc);
        height = (f32)*(s32*)(iVar4 + 0x10);
        rect[0] = 0.0f / width;
        rect[1] = 0.0f / height;
        rect[2] = width / width;
        rect[3] = height / height;
        FUN_0021eb80(entry + 0x10, rect);

        iVar4 = FUN_0020e510(1);
        width = (f32)*(s32*)(iVar4 + 0xc);
        height = (f32)*(s32*)(iVar4 + 0x10);
        rect[0] = 0.0f / width;
        rect[1] = 0.0f / height;
        rect[2] = width / width;
        rect[3] = height / height;
        FUN_0021eb80(entry + 0x110, rect);
    }
    FUN_0025aad0();

    puVar2[0xc] = 0;
    puVar2[10] = 0;
    puVar2[0x328] = 2;
    *puVar2 |= 2;
    *puVar2 |= 1;
}

/* Recovered battle-misc harvest: 0x0025A120-0x0025B440 */

/* Reconstructed the state dispatch, interpolation, and six-slot alpha update.
 * The remaining differences are MWCC register allocation and floating-point
 * spill placement; object size now exactly matches the retail function window.
 */
/* Removing this worsens FUN_0025a130 (nd185 -> nd295) - measured W161. */
// FUN_0025aa70
void sflCursor0025aa70(void)
{
    u32* puVar1;

    K_ASSERT(sSflCursor != NULL, 0x47);
    puVar1 = sSflCursor;
    puVar1[10] = 0;
    puVar1[0x328] = 3;
    *puVar1 |= 2;
}

#pragma opt_loop_invariants reset
// FUN_0025AAD0


#ifndef PC_BUILD
asm void FUN_0025aad0(void)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b670
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ebb8
  .word 0x24050047
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b670
  .word 0x24040004
  .word 0x0c083944
  .word 0x00000000
  .word 0x3c024228
  .word 0xafa20050
  .word 0x3c024220
  .word 0xafa20054
  .word 0x3c0242ea
  .word 0xafa20058
  .word 0x3c024200
  .word 0xafa2005c
  .word 0x26240cb0
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x3c0242f8
  .word 0xafa20050
  .word 0x3c024220
  .word 0xafa20054
  .word 0x3c0242ea
  .word 0xafa20058
  .word 0x3c024200
  .word 0xafa2005c
  .word 0x26240db0
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420002
  .word 0x10400025
  .word 0x00000000
  .word 0x8e230ca0
  .word 0x24020003
  .word 0x10620011
  .word 0x00000000
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0xc6200028
  .word 0x46800060
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0xc6200028
  .word 0x46800060
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010501
  .word 0x10000007
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140542
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46150036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3008f
  .word 0x26240cb0
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26240db0
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x24040002
  .word 0x0c083964
  .word 0x00000000
  .word 0x24020223
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00050
  .word 0x3c0243cb
  .word 0xafa20054
  .word 0x3c02427c
  .word 0xafa20058
  .word 0x3c0241a0
  .word 0xafa2005c
  .word 0x26240eb0
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46150036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3008f
  .word 0x26240eb0
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000156
  .word 0x00000000
  .word 0x00121940
  .word 0x00721821
  .word 0x00031900
  .word 0x02231821
  .word 0x24700040
  .word 0x0000282d
  .word 0x8e230000
  .word 0x30630002
  .word 0x1060000e
  .word 0x00000000
  .word 0x8e240ca0
  .word 0x24030001
  .word 0x1483000a
  .word 0x00000000
  .word 0x8e230030
  .word 0x12430004
  .word 0x00000000
  .word 0x8e23002c
  .word 0x16430008
  .word 0x00000000
  .word 0x24050001
  .word 0x10000005
  .word 0x00000000
  .word 0x8e230030
  .word 0x16430002
  .word 0x00000000
  .word 0x24050001
  .word 0x10a000d3
  .word 0x00000000
  .word 0x24040002
  .word 0x0c083944
  .word 0x00000000
  .word 0xc440000c
  .word 0x468005a0
  .word 0xc4400010
  .word 0x46800560
  .word 0x8e220000
  .word 0x30420002
  .word 0x10400011
  .word 0x00000000
  .word 0x8e230ca0
  .word 0x24020001
  .word 0x1462000d
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50070
  .word 0x0c096150
  .word 0x00000000
  .word 0x27a40080
  .word 0x27a50070
  .word 0x0c0943e0
  .word 0x00000000
  .word 0xc7a70080
  .word 0xc7a60084
  .word 0x10000007
  .word 0x00000000
  .word 0x27a40080
  .word 0x2625001c
  .word 0x0c0943e0
  .word 0x00000000
  .word 0xc7a70080
  .word 0xc7a60084
  .word 0x3c023f80
  .word 0x44822800
  .word 0x8e220000
  .word 0x30420002
  .word 0x10400019
  .word 0x00000000
  .word 0x8e220ca0
  .word 0x10400003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0xc6200028
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0xc78083b8
  .word 0x46000104
  .word 0xc78282ac
  .word 0xc78183bc
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603105c
  .word 0x46050018
  .word 0x4601081d
  .word 0x46000004
  .word 0x46040001
  .word 0x46002941
  .word 0x3c0243e1
  .word 0x44821000
  .word 0x00000000
  .word 0x46161002
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x460500c2
  .word 0x46151002
  .word 0x46010003
  .word 0x46050082
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46011803
  .word 0x46003801
  .word 0xe7a00050
  .word 0x46011003
  .word 0x46003001
  .word 0xe7a00054
  .word 0xe7a30058
  .word 0xe7a2005c
  .word 0x26040010
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6200034
  .word 0x46800060
  .word 0x3c024270
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
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46000840
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0xc7828088
  .word 0xc78182fc
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603109c
  .word 0x240200c8
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0x240200fa
  .word 0xa3a2008e
  .word 0x8e220000
  .word 0x30420002
  .word 0x10400038
  .word 0x00000000
  .word 0x8e230ca0
  .word 0x24020001
  .word 0x14620034
  .word 0x00000000
  .word 0x8e220030
  .word 0x1642000c
  .word 0x00000000
  .word 0xc6200028
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e230028
  .word 0x24020004
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46020002
  .word 0x4600a042
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
  .word 0x10000019
  .word 0x00000000
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46020002
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
  .word 0xa3a3008f
  .word 0x26040010
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030000
  .word 0x10600052
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50070
  .word 0x0c096150
  .word 0x00000000
  .word 0x27a40080
  .word 0x27a50070
  .word 0x0c0943e0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c083944
  .word 0x00000000
  .word 0xc440000c
  .word 0x468000a0
  .word 0xc4400010
  .word 0x468001a0
  .word 0xc7a10080
  .word 0x3c0242b8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000941
  .word 0xc7a10084
  .word 0x3c0242d2
  .word 0x44820000
  .word 0x00000000
  .word 0x46000901
  .word 0x3c024382
  .word 0x44821800
  .word 0x00000000
  .word 0x46021802
  .word 0x3c0242c8
  .word 0x44821000
  .word 0x00000000
  .word 0x46020043
  .word 0x46061802
  .word 0x46020003
  .word 0xe7a50050
  .word 0xe7a40054
  .word 0xe7a10058
  .word 0xe7a0005c
  .word 0x26040110
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0xc6000000
  .word 0x46800060
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c024380
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
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
  .word 0xa3a3008f
  .word 0x26040110
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x1060000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c095844
  .word 0x00000000
  .word 0xc6000004
  .word 0x46800060
  .word 0x3c034380
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x46140302
  .word 0x0040202d
  .word 0x0c095878
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430006
  .word 0x1460fea9
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0025b300
void sflCursor0025b300(u32 param_1)
{
    u32* work;

    K_ASSERT(sSflCursor != NULL, 0x47);
    work = sSflCursor;
    FUN_00258540(work[0xc], work + 1);
    FUN_00258540(param_1, work + 4);
    *(SflVec3*)(work + 7) = *(SflVec3*)(work + 1);
    work[0xb] = work[0xc];
    work[0xc] = param_1;
    work[10] = 0;
    work[0x328] = 0;
    *work |= 2;
    FUN_0025aad0();
}

// FUN_0025b3b0
void sflCursor0025b3b0(u32 param_1)
{
    u32* work;

    K_ASSERT(sSflCursor != NULL, 0x47);
    work = sSflCursor;
    FUN_00258540(param_1, work + 7);
    work[0xb] = work[0xc];
    work[0xc] = param_1;
    work[10] = 0;
    work[0x328] = 1;
    *work |= 2;
    FUN_0025aad0();
}

/* Recovered battle-misc harvest: 0x0025AAD0-0x0025AAD0 */
// FUN_0025B440


void FUN_0025b440(void)
{
  u32 uVar1;

  uVar1 = 0x18;
  uVar1 += (u32)FUN_00488f30() % 5;
  FUN_0016f3e0(0x39,0);
  FUN_0016f3e0(0x38,uVar1);
}




/* Recovered battle-misc support prelude */


// FUN_0025b4a0
void sflCount0025b4a0(u32* param_1)
{
    *param_1 = 0;
    sSflCount = param_1;
}




/* Recovered battle-misc harvest: 0x0025B4F0-0x0025BBF0 */

/* Removing this worsens FUN_0025b690 (nd14 -> nd133) - measured W161. */

#pragma opt_loop_invariants reset
