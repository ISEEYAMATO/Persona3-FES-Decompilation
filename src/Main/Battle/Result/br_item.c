#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "rw/rwplcore.h"

#include "Main/Battle/Data/datPersona.h"
#include "Main/Social/sfl_psel.h"
#include "Main/Social/sfl_res.h"
u32 brItem0025f4a0(void);
void brItem0025f510(int param_1);
static u32* sSflPsel; // puGpffffb688
u32 FUN_0021cca0();
void FUN_0021d3b0();
void FUN_00260c20();
void FUN_00261480();
extern void FUN_0021d8e0_y2(void*, const void*);
extern void FUN_0021d950_y2(void*, const void*);
extern void (*D_00960090)(u32, u32);
extern void (*D_0096009C)(u32*, u32, u32, u32, u32);
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
#pragma alias D_0096009C_abs D_0096009C
extern u8 D_0096009C_abs[];
extern void RpSkyRenderStateSet(u32, void*);
extern void func_004d7f60(s32 state, u32 value);
extern float fGpffff8300;
extern char D_00960088[];
extern u32 uGpffffb948;
extern u16 DAT_007e0952;
#pragma alias DAT_007e0952_a DAT_007e0952
extern u16 DAT_007e0952_a[8];
extern u32 func_00173220(u16 id);
extern u32 func_00173280(u16 id);
extern u8* DAT_007ce420;
extern u32 func_00175410(void);
extern u32 func_001756f0(void);
extern void* func_001749a0(u16 id);
extern DatPersonaWork* datPersonaGetHeroPersona(s16 index);
extern DatPersonaWork* datPersonaGetByPcId(u16 pcId);
extern u32 func_0010a4e0(s32 bank, s32 cue, s32 variant, s32 pan);
extern u32 func_0021cca0(u32 texture, s32 frame);
extern u32 func_0021cce0(u32 frame);
extern void func_0021d3b0(void* destination, u32 frame);
extern void func_0021d8e0(void* destination, const f32* rect);
extern void func_0021d950(void* destination, const u8* color);
extern void func_0021e380(void* destination, u32 frame, s32 mode);
extern f32 func_0021ea00(s32 duration);
extern void func_0021eac0(void* animation, f32 value);
extern void func_00238980(void* destination, s32 count, u32 value, s32 mode);
extern void* func_00238dc0(void* destination, s32 count, u32 value, s32 mode, const f32* origin);
extern u32 func_00239140(s32 font);
extern void func_0024a260(u32* state);
extern u32 func_003b0970(u32 resource, s32 mode, s8 group, s32 a, s32 b);
extern void func_003b0d70(u32 resource, s32 x, s32 y);
extern void func_003b0e20(u32 resource, u32 color);
extern void func_003b0e70(s32 mode);
extern void func_003b0e90(s32 mode);
extern void func_003b1360(u32 resource, s32 mode, s32 value);
extern void func_003b0170(u32 resource);
extern void frFontSetTextScale(u32 resource, f32 value);
extern u32 func_003c7610(void);
extern void func_003c7650(s32 mode);
extern u32 func_003c7850(void);
extern u32 func_003c78d0(void);
extern void func_003c7990(s32 mode);
extern void func_003c7bc0(s32 mode, u32 value);
extern void func_003c7430(u32 value);
extern void sflPersonaLoad(u16 id);
extern void sflPersonaSetPersona(u16 id);
extern void sflPersonaDestroy(void);
extern u32 sflPersonaIsLoading(void);
extern void sflPersonaStartExitTransition(void);
extern u32 sflPersonaIsTransitioning(void);
extern void func_00523ac8(char* destination, const char* format, ...);
extern s32 func_00524388(const char* text);
extern void func_0019d3f0(const char* file, s32 line);
extern char D_0068e228[];
extern void func_003c74e0(u32 value);
typedef void (*SflPselStateCallback)(u32 state, u32 value);
typedef void (*SflPselDrawCallback)(void* quad, u32 layer, u32 group, u32 pass, u32 blend);
extern u32 FUN_0021cce0(u32 frame);
extern void FUN_0021d890_y2(void*, const void*);


#pragma alias FUN_0021d8e0_y2 FUN_0021d8e0_y2
#pragma alias FUN_0021d950_y2 FUN_0021d950_y2
#pragma alias FUN_0021d890_y2 FUN_0021d890_y2



/* Recovered battle-misc support prelude */
typedef int (*code)(...);
void FUN_0025da30(void);
void FUN_0025ed40(void);
KwlnTask* FUN_0025f370(KwlnTask* parent, void* battle_data);
void FUN_0025f5d0(int param_1, int param_2, int param_3);
void FUN_0025fb60(int param_1,int param_2,float *uv);
void FUN_0025fc50(int param_1,void* param_2,int param_3,int param_4);
extern f32 DAT_007caff0;
extern f32 DAT_00960088;
#pragma alias DAT_00960088_abs DAT_00960088
extern u8 DAT_00960088_abs[];
extern code DAT_00960090;
#pragma alias DAT_00960090_abs DAT_00960090
#pragma alias DAT_0096009c_abs DAT_0096009c
extern code DAT_00960090_abs[];
extern code DAT_0096009c_abs[];
extern code DAT_00960178;
extern char D_0068EC08[];

static u32* sBrItem; // DAT_007ce370
static u32 sBrItem374; // DAT_007ce374
float FUN_0021ea00();
void FUN_0021eac0(void*, float);
void FUN_0025d9e0();


// FUN_0025d8a0
void brItem0025d8a0(void* param_1)
{
    u32* puVar1;
    float fVar2;
    float fVar3;

    K_ASSERT(sBrItem != NULL, 0x75);
    puVar1 = sBrItem;
    sBrItem[2] = (u32)param_1;
    FUN_0025f5d0((int)(puVar1 + 0x104), (u32)param_1, 0x34);
    fVar2 = FUN_0021ea00(0x1e);
    FUN_0021eac0(puVar1 + 0x104, fVar2);
    FUN_0025f5d0((int)(puVar1 + 0x144), puVar1[2], 0x35);
    fVar2 = FUN_0021ea00(0x1e);
    FUN_0021eac0(puVar1 + 0x144, fVar2);
    FUN_0025f5d0((int)(puVar1 + 0x184), puVar1[2], 0x36);
    fVar2 = FUN_0021ea00(0x1e);
    FUN_0021eac0(puVar1 + 0x184, fVar2);
    FUN_0025f5d0((int)(puVar1 + 0x1c4), puVar1[2], 0x3a);
    fVar2 = FUN_0021ea00(0x32);
    FUN_0021eac0(puVar1 + 0x1c4, fVar2);
    fVar3 = FUN_0021ea00(0x32);
    ((float*)puVar1)[0x206] = fVar3;
    ((float*)puVar1)[0x216] = fVar3;
    ((float*)puVar1)[0x226] = fVar3;
    FUN_0025d9e0();
    *puVar1 |= 1;
}

// FUN_0025d9e0
void brItem0025d9e0(void)
{
    u32* work;

    K_ASSERT(sBrItem != NULL, 0x75);
    work = sBrItem;
    work[3] = 0;
    work[1] = 0;
    *work |= 2;
}

#pragma opt_propagation off
/* W422 sqrtf(2.0f) replacement at quad[7]: nd3352/4856B -> nd3363/4868B
 * (window4880B), rate worsened from 0.690699 to 0.690748; reverted. */
// FUN_0025DA30
asm void FUN_0025da30(void)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b680
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ebf8
  .word 0x24050075
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b680
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620013
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x8e02000c
  .word 0x2841000a
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae02000c
  .word 0x10000016
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae020000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e02000c
  .word 0x2841000a
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae02000c
  .word 0x10000008
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffd
  .word 0x00621824
  .word 0xae030000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020000
  .word 0x8e040008
  .word 0x24050034
  .word 0x0c098240
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e040008
  .word 0x24050034
  .word 0x0c098248
  .word 0x00000000
  .word 0x8e040004
  .word 0x24030001
  .word 0x1083002b
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000046
  .word 0x00000000
  .word 0x3c033f80
  .word 0x4483a800
  .word 0x8e03000c
  .word 0x28610005
  .word 0x1020001c
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0340a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000943
  .word 0x3c0340c0
  .word 0x44832000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46002000
  .word 0x460020c0
  .word 0x46002081
  .word 0x46032001
  .word 0x44800800
  .word 0x00000000
  .word 0x46030818
  .word 0x4600281c
  .word 0xe7a00050
  .word 0x46022001
  .word 0x46020818
  .word 0x4600281c
  .word 0xe7a00054
  .word 0x10000025
  .word 0x00000000
  .word 0x3c0340c0
  .word 0xafa30050
  .word 0xafa30054
  .word 0x10000020
  .word 0x00000000
  .word 0x8e03000c
  .word 0x28610003
  .word 0x10200018
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c034316
  .word 0x44830000
  .word 0x00000000
  .word 0x46001042
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00050
  .word 0xe7a00054
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46020541
  .word 0x10000005
  .word 0x00000000
  .word 0x3c03431c
  .word 0xafa30050
  .word 0xafa30054
  .word 0x4480a800
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00058
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26040410
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
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
  .word 0xa3a3007f
  .word 0x26040410
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050035
  .word 0x0c098240
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e040008
  .word 0x24050035
  .word 0x0c098248
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620034
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000057
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x8e02000c
  .word 0x28410006
  .word 0x10200024
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050035
  .word 0x0c098248
  .word 0x00000000
  .word 0x3c0342da
  .word 0x44832000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46002040
  .word 0x3c0241b8
  .word 0x44820000
  .word 0x00000000
  .word 0x460100c0
  .word 0x46012081
  .word 0x46030001
  .word 0x44800800
  .word 0x00000000
  .word 0x46030818
  .word 0x4600a01c
  .word 0xe7a00050
  .word 0x46022001
  .word 0x46020818
  .word 0x4600a01c
  .word 0xe7a00054
  .word 0x1000002e
  .word 0x00000000
  .word 0x3c0241b8
  .word 0xafa20050
  .word 0x3c0242da
  .word 0xafa20054
  .word 0x10000028
  .word 0x00000000
  .word 0x8e02000c
  .word 0x28410003
  .word 0x1020001c
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024316
  .word 0x44820000
  .word 0x00000000
  .word 0x46001042
  .word 0x3c0241b8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00050
  .word 0x3c0242da
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00054
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020541
  .word 0x10000009
  .word 0x00000000
  .word 0x3c02432d
  .word 0xafa20050
  .word 0x24020103
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00054
  .word 0x4480a800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00058
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26040510
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
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
  .word 0xa3a3007f
  .word 0x26040510
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050036
  .word 0x0c098240
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e040008
  .word 0x24050036
  .word 0x0c098248
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620037
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000057
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x8e02000c
  .word 0x28410006
  .word 0x10200027
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050035
  .word 0x0c098248
  .word 0x00000000
  .word 0x3c0342da
  .word 0x44830800
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c0242e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010100
  .word 0x3c0241b0
  .word 0x44821800
  .word 0x00000000
  .word 0x46011881
  .word 0x46040001
  .word 0x44800800
  .word 0x00000000
  .word 0x46040818
  .word 0x4600a01c
  .word 0xe7a00050
  .word 0x46021801
  .word 0x46020818
  .word 0x4600a01c
  .word 0xe7a00054
  .word 0x1000002b
  .word 0x00000000
  .word 0x3c0242e8
  .word 0xafa20050
  .word 0x3c0241b0
  .word 0xafa20054
  .word 0x10000025
  .word 0x00000000
  .word 0x8e02000c
  .word 0x28410003
  .word 0x1020001c
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024316
  .word 0x44820000
  .word 0x00000000
  .word 0x46001042
  .word 0x3c0242e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00050
  .word 0x3c0241b0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00054
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020541
  .word 0x10000006
  .word 0x00000000
  .word 0x3c024385
  .word 0xafa20050
  .word 0x3c02432c
  .word 0xafa20054
  .word 0x4480a800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00058
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26040610
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
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
  .word 0xa3a3007f
  .word 0x26040610
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620059
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000ae
  .word 0x00000000
  .word 0x8e03000c
  .word 0x28610008
  .word 0x1020002f
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000184
  .word 0x3c0243a0
  .word 0x44822800
  .word 0xafa20050
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46060003
  .word 0x46000007
  .word 0x46060103
  .word 0xe7a40054
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46060003
  .word 0x46000007
  .word 0x460600c3
  .word 0xe7a30058
  .word 0x3c024360
  .word 0x44821000
  .word 0xafa2005c
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024488
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46060043
  .word 0x46011800
  .word 0xe7a00060
  .word 0x46011000
  .word 0xe7a00064
  .word 0x46012800
  .word 0xe7a00068
  .word 0x46012000
  .word 0xe7a0006c
  .word 0x1000007c
  .word 0x00000000
  .word 0x3c0243a0
  .word 0x44822800
  .word 0xafa20050
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46160003
  .word 0x46000007
  .word 0x46160103
  .word 0xe7a40054
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46160003
  .word 0x46000007
  .word 0x461600c3
  .word 0xe7a30058
  .word 0x3c024360
  .word 0x44821000
  .word 0xafa2005c
  .word 0x3c024488
  .word 0x44820000
  .word 0x00000000
  .word 0x46160043
  .word 0x46011800
  .word 0xe7a00060
  .word 0x46011000
  .word 0xe7a00064
  .word 0x46012800
  .word 0xe7a00068
  .word 0x46012000
  .word 0xe7a0006c
  .word 0x1000005a
  .word 0x00000000
  .word 0x8e02000c
  .word 0x2841000a
  .word 0x10200033
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x460009c3
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000204
  .word 0x3c024458
  .word 0x44823000
  .word 0xafa20060
  .word 0x3c024360
  .word 0x44822800
  .word 0xafa20064
  .word 0x3c0243a0
  .word 0x44822000
  .word 0xafa20068
  .word 0x3c024440
  .word 0x44821800
  .word 0xafa2006c
  .word 0xc7828300
  .word 0x3c024380
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4608101d
  .word 0x46080043
  .word 0x3c024408
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46070001
  .word 0x46010042
  .word 0x46012001
  .word 0xe7a00050
  .word 0x46011801
  .word 0xe7a00054
  .word 0x46013001
  .word 0xe7a00058
  .word 0x46012801
  .word 0xe7a0005c
  .word 0x10000024
  .word 0x00000000
  .word 0x3c024488
  .word 0x44820000
  .word 0x00000000
  .word 0x46160003
  .word 0x46160103
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x460400c0
  .word 0xe7a30060
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46160003
  .word 0x46000007
  .word 0x46160003
  .word 0x46002080
  .word 0xe7a20064
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46160003
  .word 0x46000007
  .word 0x46160003
  .word 0x46002040
  .word 0xe7a10068
  .word 0x3c024360
  .word 0x44820000
  .word 0x00000000
  .word 0x46040000
  .word 0xe7a0006c
  .word 0xe7a10050
  .word 0xe7a00054
  .word 0xe7a30058
  .word 0xe7a2005c
  .word 0x26040010
  .word 0x27a50050
  .word 0x0c087624
  .word 0x00000000
  .word 0x24040032
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26040010
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0xa3a0007c
  .word 0xa3a0007d
  .word 0xa3a0007e
  .word 0xa3a0007f
  .word 0x26040010
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x1062002e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000044
  .word 0x3c0243a0
  .word 0x44822800
  .word 0xafa20050
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0x46000007
  .word 0x46010103
  .word 0xe7a40054
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0x46000007
  .word 0x460100c3
  .word 0xe7a30058
  .word 0x3c024360
  .word 0x44821000
  .word 0xafa2005c
  .word 0x3c024358
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0x46010043
  .word 0x46011800
  .word 0xe7a00060
  .word 0x46011000
  .word 0xe7a00064
  .word 0x46012800
  .word 0xe7a00068
  .word 0x46012000
  .word 0xe7a0006c
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x10000056
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x460001c4
  .word 0x00000000
  .word 0x8e02000c
  .word 0x2841000a
  .word 0x10200044
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020541
  .word 0x3c024380
  .word 0x44820000
  .word 0x00000000
  .word 0x46070043
  .word 0xc7808300
  .word 0x46000801
  .word 0x46070043
  .word 0x3c024408
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46001082
  .word 0x3c024220
  .word 0x44823000
  .word 0x00000000
  .word 0x46073043
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46020140
  .word 0xe7a50050
  .word 0x3c02c3a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46020100
  .word 0xe7a40054
  .word 0x3c02c360
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x460200c0
  .word 0xe7a30058
  .word 0x3c024360
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46020080
  .word 0xe7a2005c
  .word 0x3c024358
  .word 0x44820000
  .word 0x00000000
  .word 0x46070003
  .word 0x46003000
  .word 0x46070043
  .word 0x46011800
  .word 0xe7a00060
  .word 0x46011000
  .word 0xe7a00064
  .word 0x46012800
  .word 0xe7a00068
  .word 0x46012000
  .word 0xe7a0006c
  .word 0x1000000a
  .word 0x00000000
  .word 0x4480a800
  .word 0xafa00050
  .word 0xafa00054
  .word 0xafa00058
  .word 0xafa0005c
  .word 0xafa00060
  .word 0xafa00064
  .word 0xafa00068
  .word 0xafa0006c
  .word 0x26040110
  .word 0x27a50050
  .word 0x0c087624
  .word 0x00000000
  .word 0x24040023
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26040110
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x24020004
  .word 0xa3a2007c
  .word 0x24020029
  .word 0xa3a2007d
  .word 0x24020046
  .word 0xa3a2007e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
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
  .word 0xa3a3007f
  .word 0x26040110
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620024
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000005b
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000044
  .word 0x3c0243a0
  .word 0x44822800
  .word 0xafa20050
  .word 0x3c02c3a0
  .word 0x44822000
  .word 0xafa20054
  .word 0x3c02c360
  .word 0x44821800
  .word 0xafa20058
  .word 0x3c024360
  .word 0x44821000
  .word 0xafa2005c
  .word 0x3c024380
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0x46010043
  .word 0x46011800
  .word 0xe7a00060
  .word 0x46011000
  .word 0xe7a00064
  .word 0x46012800
  .word 0xe7a00068
  .word 0x46012000
  .word 0xe7a0006c
  .word 0x1000003c
  .word 0x00000000
  .word 0xc600000c
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000204
  .word 0x3c024380
  .word 0x44820000
  .word 0x00000000
  .word 0x460801c3
  .word 0xc7808300
  .word 0x46003801
  .word 0x46080043
  .word 0x3c024408
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46001182
  .word 0x3c0243a0
  .word 0x44822800
  .word 0x00000000
  .word 0x46012800
  .word 0x46060000
  .word 0xe7a00050
  .word 0x3c02c3a0
  .word 0x44822000
  .word 0x00000000
  .word 0x46012000
  .word 0x46060000
  .word 0xe7a00054
  .word 0x3c02c360
  .word 0x44821800
  .word 0x00000000
  .word 0x46011800
  .word 0x46060000
  .word 0xe7a00058
  .word 0x3c024360
  .word 0x44821000
  .word 0x00000000
  .word 0x46011000
  .word 0x46060000
  .word 0xe7a0005c
  .word 0x46083843
  .word 0x46011800
  .word 0x46060000
  .word 0xe7a00060
  .word 0x46011000
  .word 0x46060000
  .word 0xe7a00064
  .word 0x46012800
  .word 0x46060000
  .word 0xe7a00068
  .word 0x46012000
  .word 0x46060000
  .word 0xe7a0006c
  .word 0x26040210
  .word 0x27a50050
  .word 0x0c087624
  .word 0x00000000
  .word 0x24040023
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26040210
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x2402004f
  .word 0xa3a2007c
  .word 0x240200a4
  .word 0xa3a2007d
  .word 0x240200ff
  .word 0xa3a2007e
  .word 0xa3a2007f
  .word 0x26040210
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0xafa00050
  .word 0xafa00054
  .word 0x3c024420
  .word 0xafa20058
  .word 0x3c0243e0
  .word 0xafa2005c
  .word 0x26040710
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
  .word 0xa3a2007f
  .word 0x26040710
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x24030205
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6000810
  .word 0x3c0543e0
  .word 0xae050814
  .word 0x3c044420
  .word 0xae040850
  .word 0x24030145
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6000854
  .word 0xae040890
  .word 0xae050894
  .word 0x2403004f
  .word 0xa3a3007c
  .word 0x240300a4
  .word 0xa3a3007d
  .word 0x240300ff
  .word 0xa3a3007e
  .word 0xa3a3007f
  .word 0x93a3007c
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
  .word 0xe6000830
  .word 0x93a3007d
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
  .word 0xe6000834
  .word 0x93a3007e
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
  .word 0xe6000838
  .word 0x93a3007f
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
  .word 0xe600083c
  .word 0x93a3007c
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
  .word 0xe6000870
  .word 0x93a3007d
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
  .word 0xe6000874
  .word 0x93a3007e
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
  .word 0xe6000878
  .word 0x93a3007f
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
  .word 0xe600087c
  .word 0x93a3007c
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
  .word 0xe60008b0
  .word 0x93a3007d
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
  .word 0xe60008b4
  .word 0x93a3007e
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
  .word 0xe60008b8
  .word 0x93a3007f
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
  .word 0xe60008bc
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_propagation reset

// FUN_0025ED40


asm void FUN_0025ed40(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b680
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ebf8
  .word 0x24050075
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b680
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
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
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
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
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
  .word 0x24040014
  .word 0x24050002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
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
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
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
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e440008
  .word 0x2405003a
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440710
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440710
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440810
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
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
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e220000
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
  .word 0x8e420004
  .word 0x24050001
  .word 0x10450028
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000046
  .word 0x00000000
  .word 0x0220802d
  .word 0x24040006
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
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
  .word 0x10000023
  .word 0x00000000
  .word 0x0220802d
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
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
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e440008
  .word 0x24050034
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
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
  .word 0x8e440008
  .word 0x24050035
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440510
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440510
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e440008
  .word 0x24050036
  .word 0x0c098250
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440610
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440610
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
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
}

// FUN_0025F370


KwlnTask* FUN_0025f370(KwlnTask* parent, void* battle_data)
{
    u32* work;
    KwlnTask* task;
    float rect[4];
    u8 color[4];

    work = (u32*)(*(code*)0x00960178)(0x8d0, 0x40000);
    task = kwlnTaskInitEx(D_0068EC08, 0x18b5, 1, 2,
                          (KwlnTaskUpdateFunc)brItem0025f4a0,
                          (KwlnTaskDestroyFunc)brItem0025f510, work);
    kwlnTaskAddChild(parent, task);
    *work = 0;

    rect[0] = 0.0f;
    rect[1] = 0.0f;
    rect[2] = 640.0f;
    rect[3] = 448.0f;
    FUN_0021d8e0(work + 0xc4, rect);
    FUN_0021eac0(work + 0xc4, FUN_0021ea00(10));

    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = 0;
    FUN_0021d950(work + 0xc4, color);

    sBrItem = work;
    brItem0025d8a0(battle_data);
    sBrItem374 = (u32)task;
    return task;
}

/* Recovered battle-misc harvest: 0x0025F370-0x0025FC50 */
// FUN_0025f4a0
u32 brItem0025f4a0(void)
{
    FUN_0025da30();
    FUN_0025ed40();
    K_ASSERT(sBrItem != NULL, 0x75);
    if ((*sBrItem & 1) == 0) {
        return -1;
    }
    return 0;
}

// FUN_0025f510
void brItem0025f510(int param_1)
{
    u32 uVar1;

    uVar1 = *(u32*)(param_1 + 0x3c);
    K_ASSERT(sBrItem != NULL, 0x75);
    sBrItem = NULL;
    RwFree((void*)uVar1);
    sBrItem374 = 0;
}





































// FUN_0025f570
void brItem0025f570(void)
{
    u32* work;

    K_ASSERT(sBrItem != NULL, 0x75);
    work = sBrItem;
    work[3] = 0;
    work[1] = 1;
    *work |= 2;
}




























/* Retail converts the final color bytes into float vertex fields.
 * Keep these stores typed; raw u32 bit patterns drop those conversion paths.
 * The two geometry coordinates at the tail are integer-to-float conversions.
 * Ascending case labels preserve retail's case-0 body layout and dispatch order.
 * The expanded switch/tail reconstruction is intentional despite residual codegen differences.
*/
/* W331: opt_propagation off shrinks FUN_0025DA30 4912 -> 4856 (window 4880); retained for window. */
// FUN_0025F5D0
void FUN_0025f5d0(int param_1, int param_2, int param_3)
{
    int iVar1;
    int iVar3;
    u32 uVar2;
    u8 *puVar4;
    float uv[4];
    u8 abStack_20[0x10];
    float fVar5;
    u32 depthAddress;

    iVar1 = *(int *)((int)param_2 + 0x184) + param_3 * 0x80;
    iVar3 = FUN_00198590();
    fVar5 = 1.0f / *(float *)(iVar3 + 0x80);
    FUN_0025fb60(param_2, param_3, uv);
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        uVar2 = *(u32 *)(iVar1 + iVar3 * 4 + 100);
        puVar4 = abStack_20 + iVar3 * 4;
        puVar4[0] = (u8)((uVar2 >> 0x18) * 0xff >> 7);
        puVar4[1] = (u8)(((uVar2 >> 0x10) & 0xff) * 0xff >> 7);
        puVar4[2] = (u8)(((uVar2 >> 8) & 0xff) * 0xff >> 7);
        puVar4[3] = (u8)((uVar2 & 0xff) * 0xff >> 7);
    }
    *(float *)(param_1 + 0x10) = uv[0];
    *(float *)(param_1 + 0x14) = uv[1];
    *(float *)(param_1 + 0x18) = fVar5;
    depthAddress = (u32)DAT_00960088_abs;
    *(float *)(param_1 + 8) = *(volatile f32*)depthAddress;
    *(float *)(param_1 + 0x20) = (float)abStack_20[0];
    *(float *)(param_1 + 0x24) = (float)abStack_20[1];
    *(float *)(param_1 + 0x28) = (float)abStack_20[2];
    *(float *)(param_1 + 0x2c) = (float)abStack_20[3];
    *(float *)(param_1 + 0x50) = uv[2];
    *(float *)(param_1 + 0x54) = uv[1];
    *(float *)(param_1 + 0x58) = fVar5;
    *(float *)(param_1 + 0x48) = *(volatile f32*)depthAddress;
    *(float *)(param_1 + 0x60) = (float)abStack_20[4];
    *(float *)(param_1 + 0x64) = (float)abStack_20[5];
    *(float *)(param_1 + 0x68) = (float)abStack_20[6];
    *(float *)(param_1 + 0x6c) = (float)abStack_20[7];
    *(float *)(param_1 + 0x90) = uv[2];
    *(float *)(param_1 + 0x94) = uv[3];
    *(float *)(param_1 + 0x98) = fVar5;
    *(float *)(param_1 + 0x88) = *(volatile f32*)depthAddress;
    *(float *)(param_1 + 0xa0) = (float)abStack_20[8];
    *(float *)(param_1 + 0xa4) = (float)abStack_20[9];
    *(float *)(param_1 + 0xa8) = (float)abStack_20[10];
    *(float *)(param_1 + 0xac) = (float)abStack_20[11];
    *(float *)(param_1 + 0xd0) = uv[0];
    *(float *)(param_1 + 0xd4) = uv[3];
    *(float *)(param_1 + 0xd8) = fVar5;
    *(float *)(param_1 + 200) = *(volatile f32*)depthAddress;
    *(float *)(param_1 + 0xe0) = (float)abStack_20[12];
    *(float *)(param_1 + 0xe4) = (float)abStack_20[13];
    *(float *)(param_1 + 0xe8) = (float)abStack_20[14];
    *(float *)(param_1 + 0xec) = (float)abStack_20[15];
}

// FUN_0025FB60
void FUN_0025fb60(int contextAddress, int entryIndex, float* uv)
{
    u8* entry;
    uintptr_t resource;
    uintptr_t resourceAddress;

    entry = *(u8**)(contextAddress + 0x184) + entryIndex * 0x80;
    resourceAddress = *(s32*)(entry + 0x14) * sizeof(uintptr_t);
    resourceAddress += contextAddress;
    resource = *(uintptr_t*)(resourceAddress + 0x104);

    {
        f32 size[2] = { 0.0f, 0.0f };

        size[0] = (f32)*(s32*)(entry + 0x54);
        size[1] = (f32)*(s32*)(entry + 0x5c);

        {
            f32 offset[2] = { 0.0f, 0.0f };
            s32* dimensions;
            f32 width;
            f32 height;
            s32 rawWidth;
            s32 rawHeight;

            offset[0] = (f32)*(s32*)(entry + 0x58);
            offset[1] = (f32)*(s32*)(entry + 0x60);

            dimensions = (s32*)(resource + 0x0c);
            rawWidth = *dimensions++;
            rawHeight = *dimensions;
            width = (f32)rawWidth;
            uv[0] = size[0] / width;
            uv[2] = size[1] / width;
            height = (f32)rawHeight;
            uv[1] = offset[0] / height;
            uv[3] = offset[1] / height;
        }
    }
}





































/* W422 split reused iVar1 pointer local: nd938/2012B unchanged
 * (window2016B); reverted. */
// FUN_0025FC50
asm void FUN_0025fc50(int param_1,void* param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff40
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
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x00a0b02d
  .word 0x00c0b82d
  .word 0x00e0f02d
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d03
  .word 0x001721c0
  .word 0x8ec30184
  .word 0x00648821
  .word 0x2fc10008
  .word 0x10200066
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24847950
  .word 0x001e1880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x02c0202d
  .word 0x02e0282d
  .word 0x27a600b0
  .word 0x0000382d
  .word 0x0c09810c
  .word 0x00000000
  .word 0x8e350064
  .word 0x8e340068
  .word 0x0280982d
  .word 0x02a0902d
  .word 0x10000053
  .word 0x00000000
  .word 0x02c0202d
  .word 0x02e0282d
  .word 0x27a600b0
  .word 0x24070001
  .word 0x0c09810c
  .word 0x00000000
  .word 0x8e350068
  .word 0x02a0a02d
  .word 0x8e33006c
  .word 0x0260902d
  .word 0x10000047
  .word 0x00000000
  .word 0x02c0202d
  .word 0x02e0282d
  .word 0x27a600b0
  .word 0x24070002
  .word 0x0c09810c
  .word 0x00000000
  .word 0x8e350070
  .word 0x8e34006c
  .word 0x0280982d
  .word 0x02a0902d
  .word 0x1000003b
  .word 0x00000000
  .word 0x02c0202d
  .word 0x02e0282d
  .word 0x27a600b0
  .word 0x24070003
  .word 0x0c09810c
  .word 0x00000000
  .word 0x8e350064
  .word 0x02a0a02d
  .word 0x8e330070
  .word 0x0260902d
  .word 0x1000002f
  .word 0x00000000
  .word 0x02c0202d
  .word 0x02e0282d
  .word 0x27a600b0
  .word 0x24070004
  .word 0x0c09810c
  .word 0x00000000
  .word 0x8e350068
  .word 0x02a0a02d
  .word 0x02a0982d
  .word 0x02a0902d
  .word 0x10000023
  .word 0x00000000
  .word 0x02c0202d
  .word 0x02e0282d
  .word 0x27a600b0
  .word 0x24070005
  .word 0x0c09810c
  .word 0x00000000
  .word 0x8e35006c
  .word 0x02a0a02d
  .word 0x02a0982d
  .word 0x02a0902d
  .word 0x10000017
  .word 0x00000000
  .word 0x02c0202d
  .word 0x02e0282d
  .word 0x27a600b0
  .word 0x24070006
  .word 0x0c09810c
  .word 0x00000000
  .word 0x8e350070
  .word 0x02a0a02d
  .word 0x02a0982d
  .word 0x02a0902d
  .word 0x1000000b
  .word 0x00000000
  .word 0x02c0202d
  .word 0x02e0282d
  .word 0x27a600b0
  .word 0x24070007
  .word 0x0c09810c
  .word 0x00000000
  .word 0x8e350064
  .word 0x02a0a02d
  .word 0x02a0982d
  .word 0x02a0902d
  .word 0xc7a000b0
  .word 0xe6000010
  .word 0xc7a000b4
  .word 0xe6000014
  .word 0xe6140018
  .word 0x3c030096
  .word 0x24630088
  .word 0xc4600000
  .word 0xe6000008
  .word 0x00152e02
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe6000020
  .word 0x00152402
  .word 0x308500ff
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe6000024
  .word 0x00152202
  .word 0x308500ff
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe6000028
  .word 0x32a500ff
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe600002c
  .word 0xc7a000b8
  .word 0xe6000050
  .word 0xc7a000b4
  .word 0xe6000054
  .word 0xe6140058
  .word 0xc4600000
  .word 0xe6000048
  .word 0x00142e02
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe6000060
  .word 0x00142402
  .word 0x308500ff
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe6000064
  .word 0x00142202
  .word 0x308500ff
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe6000068
  .word 0x328500ff
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe600006c
  .word 0xc7a000b8
  .word 0xe6000090
  .word 0xc7a000bc
  .word 0xe6000094
  .word 0xe6140098
  .word 0xc4600000
  .word 0xe6000088
  .word 0x00132e02
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe60000a0
  .word 0x00132402
  .word 0x308500ff
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe60000a4
  .word 0x00132202
  .word 0x308500ff
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe60000a8
  .word 0x326500ff
  .word 0x00052200
  .word 0x00852023
  .word 0x000421c2
  .word 0x308400ff
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
  .word 0xe60000ac
  .word 0xc7a000b0
  .word 0xe60000d0
  .word 0xc7a000bc
  .word 0xe60000d4
  .word 0xe61400d8
  .word 0xc4600000
  .word 0xe60000c8
  .word 0x00122602
  .word 0x00041a00
  .word 0x00641823
  .word 0x000319c2
  .word 0x306300ff
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
  .word 0xe60000e0
  .word 0x00121c02
  .word 0x306400ff
  .word 0x00041a00
  .word 0x00641823
  .word 0x000319c2
  .word 0x306300ff
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
  .word 0xe60000e4
  .word 0x00121a02
  .word 0x306400ff
  .word 0x00041a00
  .word 0x00641823
  .word 0x000319c2
  .word 0x306300ff
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
  .word 0xe60000e8
  .word 0x324400ff
  .word 0x00041a00
  .word 0x00641823
  .word 0x000319c2
  .word 0x306300ff
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
  .word 0xe60000ec
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
  .word 0xc7b40000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}






static inline u8* sflPselBytes(u32* work, u32 offset)
{
    return (u8*)work + offset;
}

static u32 sflPselReadU32(const void* object, u32 offset)
{
    return *(const u32*)((const u8*)object + offset);
}

static inline s32 sflPselReadS32(const void* object, u32 offset)
{
    return *(const s32*)((const u8*)object + offset);
}

static u8* sflPselEntry(u32* work, s32 index)
{
    u8* entries;

    entries = (u8*)(uintptr_t)sflPselReadU32(work, 0x184);
    return entries + index * 0x80;
}

static inline void sflPselSetAlpha(void* object, u8 alpha)
{
    u8 color[4];

    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = alpha;
    FUN_0021d950_y2(object, color);
}

static void sflPselDraw(void* object)
{
    D_0096009C((u32*)object, 4, 0, 1, 2);
    D_0096009C((u32*)object, 4, 0, 2, 3);
}

// FUN_00260430
void sflPsel00260430(u32* base, s32 index, float* uv, u32 axis)
{
    u8* entry;
    u8* resource;
    u32 xMode;
    s32 width;
    s32 height;

    entry = (u8*)(uintptr_t)(base[0x61] + (index << 7));
    resource = (u8*)(uintptr_t)base[0x41 + *(u32*)(entry + 0x14)];
    {
        f32 x[2] = {0.0f, 0.0f};
        x[0] = (f32)*(s32*)(entry + 0x54);
        x[1] = (f32)*(s32*)(entry + 0x5c);
        {
            f32 y[2] = {0.0f, 0.0f};
            y[0] = (f32)*(s32*)(entry + 0x58);
            y[1] = (f32)*(s32*)(entry + 0x60);
            width = *(s32*)(resource + 0xc);
            height = *(s32*)(resource + 0x10);

            switch (axis) {
            case 0: xMode = 0; axis = 1; break;
            case 1: xMode = 2; axis = 0; break;
            case 2: xMode = 0; axis = 2; break;
            case 3: xMode = 1; axis = 0; break;
            case 4: xMode = 2; axis = 1; break;
            case 5: xMode = 2; axis = 2; break;
            case 6: xMode = 2; axis = 1; break;
            case 7: xMode = 1; axis = 1; break;
            }

            switch (xMode) {
            case 0:
                if (((~*(u32*)(entry + 0x18)) & 1) != 0) {
                    uv[0] = x[0] / (f32)width;
                    uv[2] = x[1] / (f32)width;
                } else {
                    uv[0] = x[1] / (f32)width;
                    uv[2] = x[0] / (f32)width;
                }
                break;
            case 1:
                if (((~*(u32*)(entry + 0x18)) & 1) != 0) {
                    uv[0] = x[0] / (f32)width;
                    uv[2] = (x[0] + 1.0f) / (f32)width;
                } else {
                    uv[0] = x[1] / (f32)width;
                    uv[2] = (x[1] - 1.0f) / (f32)width;
                }
                break;
            case 2:
                if (((~*(u32*)(entry + 0x18)) & 1) != 0) {
                    uv[0] = (x[1] - 1.0f) / (f32)width;
                    uv[2] = x[1] / (f32)width;
                } else {
                    uv[0] = (x[0] + 1.0f) / (f32)width;
                    uv[2] = x[0] / (f32)width;
                }
                break;
            }

            switch (axis) {
            case 0:
                if (((~*(u32*)(entry + 0x18)) & 2) != 0) {
                    uv[1] = y[0] / (f32)height;
                    uv[3] = y[1] / (f32)height;
                } else {
                    uv[1] = y[1] / (f32)height;
                    uv[3] = y[0] / (f32)height;
                }
                break;
            case 1:
                if (((~*(u32*)(entry + 0x18)) & 2) != 0) {
                    uv[1] = y[0] / (f32)height;
                    uv[3] = (y[0] + 1.0f) / (f32)height;
                } else {
                    uv[1] = y[1] / (f32)height;
                    uv[3] = (y[1] - 1.0f) / (f32)height;
                }
                break;
            case 2:
                if (((~*(u32*)(entry + 0x18)) & 2) != 0) {
                    uv[1] = (y[1] - 1.0f) / (f32)height;
                    uv[3] = y[1] / (f32)height;
                } else {
                    uv[1] = (y[0] + 1.0f) / (f32)height;
                    uv[3] = y[0] / (f32)height;
                }
                break;
            }
        }
    }
}

// FUN_00260900
s32 sflPsel00260900(u32* base, s32 index)
{
    u8* entry;

    entry = (u8*)(uintptr_t)(base[0x61] + (index << 7));
    return *(s32*)(entry + 0x5c) - *(s32*)(entry + 0x54);
}

// FUN_00260920
s32 sflPsel00260920(u32* base, s32 index)
{
    u8* entry;

    entry = (u8*)(uintptr_t)(base[0x61] + (index << 7));
    return *(s32*)(entry + 0x60) - *(s32*)(entry + 0x58);
}

// FUN_00260940
u32 sflPsel00260940(u32* base, s32 index)
{
    u8* entry;

    entry = (u8*)(uintptr_t)(base[0x61] + (index << 7));
    return base[0x41 + *(u32*)(entry + 0x14)];
}

// FUN_00260970
void sflPsel00260970(u8* work)
{
    float frame[4];
    u8 color[4];

    *(u32*)work = 0;
    frame[0] = 0.0f;
    frame[1] = 0.0f;
    frame[2] = 640.0f;
    frame[3] = 448.0f;
    FUN_0021d8e0_y2(work + 0x310, frame);
    FUN_0021eac0(work + 0x310, FUN_0021ea00(10));
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = 0;
    FUN_0021d950_y2(work + 0x310, color);
    sSflPsel = (u32*)work;
}












/* opt_lifetimes on: func_00215b00 nd765 -> nd748, object 1216 -> 1212/1216; measured W328. */



/* opt_lifetimes on: func_002168f0 nd777 -> nd716, object 1992 -> 1992/2000; measured W328. */
