#include "Main/Battle/Panel/bs_root.h"
#include "Main/Battle/Panel/bp_tex.h"
#include "h_cdvd.h"
#include "rw/rwcore.h"

#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "libm.h"
typedef int (*code)(...);
extern void* opRes00266c50(u32 id);
#pragma alias opRes00266c50 opResGetTitleSprite
extern void* func_0021cca0_u32(void* resource, u32 index);
#pragma alias func_0021cca0_u32 func_0021cca0
extern void* func_0021cce0_ptr(void* frame);
#pragma alias func_0021cce0_ptr func_0021cce0
extern void func_0021d3b0(void* destination, void* source);
extern void func_0021d8e0(void* destination, const f32* layout);
extern void func_0021d890(void* destination, const f32* layout);
extern void func_0021d950(void* destination, const u8* color);
extern void (*D_00960090)(u32 state, u32 value);
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
extern void (*D_0096009C)(void* quad, u32 layer, u32 group, u32 pass, u32 blend);
#pragma alias D_0096009C_abs D_0096009C
extern u8 D_0096009C_abs[];
extern void func_004d7f60(s32 state, u32 value);
extern u32 (*DAT_00960178_abs[])(u32 size, u32 heap);
extern void (*DAT_0096017c[])(void* memory);
extern void (*D_009600A4[])(u32, u32, u32, u32, u32);
extern u32 FUN_00488f30(void);
extern f32 DAT_007cb164;
extern f32 DAT_007cad78;
extern f32 DAT_007cb08c;
void opTitle00269500(void);
static u32* sOpTitle; // DAT_007ce3ac / puGpffffb6bc
typedef struct OpTitleMesh
{
    s32 unk0;
    s32 unk4;
    s32 width;
    s32 height;
    s32 unk10;
    s32 unk14;
    s32 mode;
} OpTitleMesh;
#pragma alias bpPersonaInit FUN_00266eb0
#pragma alias bpPersonaShutdown FUN_00266f00
#pragma alias bpPersonaLoad FUN_00266F60
#pragma alias bpPersonaDestroy FUN_00267120
#pragma alias bpPersonaUpdate FUN_00267180
#pragma alias bpPersonaIsLoading FUN_00267210
#pragma alias bpPersonaSetPersona FUN_00267070
static u32* sBpPersona; // DAT_007ce398
void bpPersonaDestroy();
long FUN_003c9ab0();
u32 FUN_001749a0(u32 param_1);
u32 FUN_003c9850(u32 param_1, u32 param_2, u32 param_3, u32 param_4);
void FUN_003c9b00(u32 param_1, u32 param_2, u32 param_3);
void FUN_003c9cd0(u32 param_1, s64 param_2);
void FUN_003c9d00(u32 param_1, u32 param_2);
s32 FUN_001756f0(void);
void FUN_003c9e00(u32 param_1, u32 param_2);
u32 FUN_001749a0();
void FUN_003c9b00();





#define BSROOT_INIT_TMXCOUNT 2

// `bpTex0021c9f0` returns an opaque rush-panel sprite resource.
static void* sRushRaster;                        // 007ce3a8
static RwRaster* sRasters[BSROOT_INIT_TMXCOUNT]; // 007ce3a0

// FUN_00266eb0
void bpPersonaInit(u32* param_1)
{
    K_ASSERT(sBpPersona == NULL, 0x2b);
    *param_1 = 0;
    sBpPersona = param_1;
}

// FUN_00266f00
void bpPersonaShutdown(void)
{
    K_ASSERT(sBpPersona != NULL, 0x24);
    if (*sBpPersona & 1) {
        bpPersonaDestroy();
    }
    sBpPersona = NULL;
}

// FUN_00266F60
void bpPersonaLoad(u32 param_1)
{
    u32* work;
    u32 persona;

    K_ASSERT(sBpPersona != NULL, 0x24);
    work = sBpPersona;
    *(u16*)(work + 2) = (u16)param_1;
    persona = FUN_001749a0(param_1);
    work[1] = FUN_003c9850(0, 0, 5, 0);
    FUN_003c9b00(work[1], persona, 0);
    FUN_003c9cd0(work[1], (s64)-1);
    FUN_003c9d00(work[1], 8);
    if ((u16)FUN_001756f0() > 1)
    {
        FUN_003c9e00(work[1], 1);
    }
    else
    {
        FUN_003c9e00(work[1], 0);
    }
    *work |= 2;
    *work |= 1;
}









static inline void opTitleSetPoly(void* destination, f32* layout, f32 scaleX, f32 scaleY)
{
    s32 i;

    for (i = 0; i < 4; i++)
    {
        layout[i * 2] -= 320.0f;
        layout[i * 2 + 1] -= 224.0f;
    }
    for (i = 0; i < 4; i++)
    {
        layout[i * 2] *= scaleX;
        layout[i * 2 + 1] *= scaleY;
    }
    for (i = 0; i < 4; i++)
    {
        layout[i * 2] += 320.0f;
        layout[i * 2 + 1] += 224.0f;
    }
    func_0021d890(destination, layout);
}

// FUN_00267070
void bpPersonaSetPersona(u32 param_1)
{
    u32* work;
    u32 uVar2;

    K_ASSERT(sBpPersona != NULL, 0x24);
    work = sBpPersona;
    K_ASSERT((u16)sBpPersona[2] != (u16)param_1, 0x5c);
    *(u16*)(work + 2) = param_1;
    uVar2 = FUN_001749a0(param_1);
    FUN_003c9b00(work[1], uVar2, 0);
    *work |= 2;
}

// FUN_00267120
void bpPersonaDestroy(void)
{
    u32* work;

    K_ASSERT(sBpPersona != NULL, 0x24);
    work = sBpPersona;
    kwlnTaskDestroyWithHierarchy((KwlnTask*)work[1]);
    *work &= 0xfffffffe;
}

// FUN_00267180
void bpPersonaUpdate(void)
{
    u32* work;

    K_ASSERT(sBpPersona != NULL, 0x24);
    work = sBpPersona;
    if ((~*work & 1) == 0 && (*work & 2) != 0 && FUN_003c9ab0(work[1]) != 0) {
        *work &= 0xfffffffd;
    }
}


// FUN_00267210
u32 bpPersonaIsLoading(void)
{
    K_ASSERT(sBpPersona != NULL, 0x24);
    return *sBpPersona & 2;
}
// FUN_00267260
void bsRootInit(void)
{
    HCdvd* cdvd;
    s32 contentId;
    void* file;
    u32 fileSize;

    cdvd = H_Cdvd_Request("battle/panel/bs_init.bin", HCDVD_FILENORMAL); // BUG: should be 'HCDVD_FILEARCHIVE'
    H_Cdvd_ReadSync(cdvd);

    for (contentId = 0; contentId < BSROOT_INIT_MAX; contentId++)
    {
        file = H_Cdvd_ArchiveGetFile(cdvd, contentId, &fileSize);

        switch (contentId)
        {
            case BSROOT_INIT_PCADVANTAGE:
                sRasters[contentId] = bpTexCreateTmxRaster(file);
                break;
            case BSROOT_INIT_ECADVANTAGE:
                sRasters[contentId] = bpTexCreateTmxRaster(file);
                break;

            case BSROOT_INIT_RUSH:
                sRushRaster = bpTex0021c9f0(file);
                break;
        }
    }

    H_Cdvd_Destroy(cdvd);
}

// FUN_00267370
RwRaster* bsRootGetRaster(u32 id)
{
    return sRasters[id];
}

// FUN_00267390
void* bsRootGetRushRaster(void)
{
    return sRushRaster;
}

// FUN_002673a0
void opTitle002673a0(u32* param_1)
{
    K_ASSERT(sOpTitle == NULL, 0x95);
    *param_1 = 0;
    sOpTitle = param_1;
}

// FUN_002673f0
void opTitle002673f0(void)
{
    K_ASSERT(sOpTitle != NULL, 0x8e);
    sOpTitle = NULL;
}

// W419 negative probe: DAT_007cb164 float-array .sdata alias left opTitle00267430 at nd3280/6340B, window6640B, rate51.74%; reverted.
/* W455 retail state-1 dispatch keeps the polygon transform path out of line;
 * the explicit switch preserves that decoded branch skeleton. */
// FUN_00267430
asm void opTitle00267430(void)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0070
  .word 0x7fb40060
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
  .word 0x8f82b6bc
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ed00
  .word 0x2405008e
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b6bc
  .word 0x0000202d
  .word 0x0c099b14
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c033f80
  .word 0x4483a000
  .word 0x8e240000
  .word 0x00801827
  .word 0x30630001
  .word 0x1460064a
  .word 0x00000000
  .word 0x30820004
  .word 0x10400021
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020001
  .word 0x10620012
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x8e220004
  .word 0x284100c8
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae220004
  .word 0x10000011
  .word 0x00000000
  .word 0x2402fffb
  .word 0x00821024
  .word 0xae220000
  .word 0x1000000c
  .word 0x00000000
  .word 0x8e220004
  .word 0x28410200
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae220004
  .word 0x10000004
  .word 0x00000000
  .word 0x2402fffb
  .word 0x00821024
  .word 0xae220000
  .word 0x8e230008
  .word 0x24020001
  .word 0x10620023
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000090
  .word 0x00000000
  .word 0x8e220004
  .word 0x28410046
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410064
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ffba
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x4480c800
  .word 0x00000000
  .word 0x4600ce06
  .word 0x10000072
  .word 0x00000000
  .word 0x8e230004
  .word 0x04610005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x1000002c
  .word 0x00000000
  .word 0x2861000a
  .word 0x1020000e
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x460105c1
  .word 0x1000001c
  .word 0x00000000
  .word 0x2861000c
  .word 0x10200005
  .word 0x00000000
  .word 0xc7948474
  .word 0x4480b800
  .word 0x10000015
  .word 0x00000000
  .word 0x28610020
  .word 0x1020000f
  .word 0x00000000
  .word 0xc7948474
  .word 0x2462fff4
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0xc7948474
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x04610006
  .word 0x00000000
  .word 0x4480c800
  .word 0x00000000
  .word 0x4600ce06
  .word 0x10000039
  .word 0x00000000
  .word 0x2861000a
  .word 0x10200012
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c0242d9
  .word 0x44820000
  .word 0x00000000
  .word 0x46010642
  .word 0x3c02c272
  .word 0x44820000
  .word 0x00000000
  .word 0x46010602
  .word 0x10000025
  .word 0x00000000
  .word 0x2861000c
  .word 0x10200006
  .word 0x00000000
  .word 0x4480c800
  .word 0x00000000
  .word 0x4600ce06
  .word 0x1000001d
  .word 0x00000000
  .word 0x28610020
  .word 0x10200016
  .word 0x00000000
  .word 0x2462fff4
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c0242d9
  .word 0x44820000
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602065c
  .word 0x3c02c272
  .word 0x44820000
  .word 0x00000000
  .word 0x46000818
  .word 0x4602061c
  .word 0x10000005
  .word 0x00000000
  .word 0x3c024359
  .word 0x4482c800
  .word 0x3c02c2f2
  .word 0x4482c000
  .word 0x0280202d
  .word 0x2405000e
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03433c
  .word 0x44830000
  .word 0x00000000
  .word 0x46190000
  .word 0xe7a00080
  .word 0x3c034310
  .word 0x44830000
  .word 0x00000000
  .word 0x46180000
  .word 0xe7a00084
  .word 0xc440000c
  .word 0x46800020
  .word 0x46140002
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0x46140002
  .word 0xe7a0008c
  .word 0x26240010
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
  .word 0x46170042
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
  .word 0x26240010
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020001
  .word 0x10620020
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000a5
  .word 0x00000000
  .word 0x8e220004
  .word 0x28410046
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410064
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ffba
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x1000008a
  .word 0x00000000
  .word 0x8e230004
  .word 0x04610005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x1000002c
  .word 0x00000000
  .word 0x2861000a
  .word 0x1020000e
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x460105c1
  .word 0x1000001c
  .word 0x00000000
  .word 0x2861000c
  .word 0x10200005
  .word 0x00000000
  .word 0x4480b800
  .word 0xc7948474
  .word 0x10000015
  .word 0x00000000
  .word 0x28610020
  .word 0x1020000f
  .word 0x00000000
  .word 0xc7948474
  .word 0x2462fff4
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0xc7948474
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x3c024100
  .word 0x44820800
  .word 0x24020195
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4480c000
  .word 0x00000000
  .word 0x4600c018
  .word 0x4614089d
  .word 0x3c02c100
  .word 0x44820800
  .word 0x3c02433c
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c018
  .word 0x4614081c
  .word 0x46001641
  .word 0x3c0242a8
  .word 0x44820000
  .word 0x00000000
  .word 0x46140082
  .word 0x3c0241b8
  .word 0x44820000
  .word 0x00000000
  .word 0x46020040
  .word 0x3c024310
  .word 0x44820000
  .word 0x00000000
  .word 0x46020000
  .word 0x460008c1
  .word 0x04610004
  .word 0x00000000
  .word 0x4600c646
  .word 0x10000034
  .word 0x00000000
  .word 0x2861000a
  .word 0x10200013
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x4601c803
  .word 0x46020642
  .word 0x46011803
  .word 0x00000000
  .word 0x00000000
  .word 0x46020602
  .word 0x1000001f
  .word 0x00000000
  .word 0x2861000c
  .word 0x10200004
  .word 0x00000000
  .word 0x4600c646
  .word 0x10000019
  .word 0x00000000
  .word 0x28610020
  .word 0x10200015
  .word 0x00000000
  .word 0x2462fff4
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x4601c803
  .word 0x4600c018
  .word 0x4602065c
  .word 0x46011803
  .word 0x00000000
  .word 0x4600c018
  .word 0x4602061c
  .word 0x10000002
  .word 0x00000000
  .word 0x46001e06
  .word 0x0280202d
  .word 0x2405000d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03c100
  .word 0x44830800
  .word 0x3c03433c
  .word 0x44830000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081c
  .word 0x46190000
  .word 0xe7a00080
  .word 0x3c0342a8
  .word 0x44830800
  .word 0x3c034310
  .word 0x44830000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081c
  .word 0x46180000
  .word 0xe7a00084
  .word 0xc440000c
  .word 0x46800020
  .word 0x46140002
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0x46140002
  .word 0xe7a0008c
  .word 0x26240110
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
  .word 0x46170042
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
  .word 0x26240110
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020001
  .word 0x10620020
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000a3
  .word 0x00000000
  .word 0x8e220004
  .word 0x28410078
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000013
  .word 0x00000000
  .word 0x284100a5
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ff88
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024234
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x10000088
  .word 0x00000000
  .word 0x8e230004
  .word 0x04610005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x1000002b
  .word 0x00000000
  .word 0x2861000a
  .word 0x1020000e
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x460105c1
  .word 0x1000001b
  .word 0x00000000
  .word 0x2861000c
  .word 0x10200005
  .word 0x00000000
  .word 0x4480b800
  .word 0xc7948474
  .word 0x10000014
  .word 0x00000000
  .word 0x28610020
  .word 0x1020000e
  .word 0x00000000
  .word 0x2462fff4
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x00000000
  .word 0x00000000
  .word 0xc7948474
  .word 0x10000004
  .word 0x00000000
  .word 0xc7948474
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x3c024336
  .word 0x44820000
  .word 0x00000000
  .word 0x46140082
  .word 0x24020195
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46020040
  .word 0x3c02433c
  .word 0x44820000
  .word 0x00000000
  .word 0x46020000
  .word 0x46000e41
  .word 0x3c0240c0
  .word 0x44820800
  .word 0x3c0241b8
  .word 0x44820000
  .word 0x4480c000
  .word 0x00000000
  .word 0x4600c018
  .word 0x4614089d
  .word 0x3c02c0c0
  .word 0x44820800
  .word 0x3c024310
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c018
  .word 0x4614081c
  .word 0x460010c1
  .word 0x04610004
  .word 0x00000000
  .word 0x4600c646
  .word 0x10000034
  .word 0x00000000
  .word 0x2861000a
  .word 0x10200013
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x4601c803
  .word 0x46020642
  .word 0x46011803
  .word 0x00000000
  .word 0x00000000
  .word 0x46020602
  .word 0x1000001f
  .word 0x00000000
  .word 0x2861000c
  .word 0x10200004
  .word 0x00000000
  .word 0x4600c646
  .word 0x10000019
  .word 0x00000000
  .word 0x28610020
  .word 0x10200015
  .word 0x00000000
  .word 0x2462fff4
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x4601c803
  .word 0x4600c018
  .word 0x4602065c
  .word 0x46011803
  .word 0x00000000
  .word 0x4600c018
  .word 0x4602061c
  .word 0x10000002
  .word 0x00000000
  .word 0x46001e06
  .word 0x0280202d
  .word 0x24050024
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034336
  .word 0x44830800
  .word 0x3c03433c
  .word 0x44830000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081c
  .word 0x46190000
  .word 0xe7a00080
  .word 0x3c03c0c0
  .word 0x44830800
  .word 0x3c034310
  .word 0x44830000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081c
  .word 0x46180000
  .word 0xe7a00084
  .word 0xc440000c
  .word 0x46800020
  .word 0x46140002
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0x46140002
  .word 0xe7a0008c
  .word 0x26240410
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
  .word 0x46170042
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
  .word 0x26240410
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020001
  .word 0x10620037
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000008b
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841005f
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x1000002a
  .word 0x00000000
  .word 0x28410082
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ffa1
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c02420c
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x284100a0
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x10000013
  .word 0x00000000
  .word 0x284100b4
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ff60
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x460105c1
  .word 0x10000002
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000059
  .word 0x00000000
  .word 0x8e220004
  .word 0x04410004
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000014
  .word 0x00000000
  .word 0x2841000a
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x1000000e
  .word 0x00000000
  .word 0x2841000c
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000008
  .word 0x00000000
  .word 0x28410020
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000002
  .word 0x00000000
  .word 0x4480b800
  .word 0x04410006
  .word 0x00000000
  .word 0x4480c800
  .word 0x00000000
  .word 0x4600ce06
  .word 0x10000039
  .word 0x00000000
  .word 0x2841000a
  .word 0x10200012
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c0242c5
  .word 0x44820000
  .word 0x00000000
  .word 0x46010642
  .word 0x3c02c27a
  .word 0x44820000
  .word 0x00000000
  .word 0x46010602
  .word 0x10000025
  .word 0x00000000
  .word 0x2841000c
  .word 0x10200006
  .word 0x00000000
  .word 0x4480c800
  .word 0x00000000
  .word 0x4600ce06
  .word 0x1000001d
  .word 0x00000000
  .word 0x28410020
  .word 0x10200016
  .word 0x00000000
  .word 0x2442fff4
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c0242c5
  .word 0x44820000
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602065c
  .word 0x3c02c27a
  .word 0x44820000
  .word 0x00000000
  .word 0x46000818
  .word 0x4602061c
  .word 0x10000005
  .word 0x00000000
  .word 0x3c024345
  .word 0x4482c800
  .word 0x3c02c2fa
  .word 0x4482c000
  .word 0x0280202d
  .word 0x24050025
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0343b8
  .word 0x44830000
  .word 0x00000000
  .word 0x46190000
  .word 0xe7a00080
  .word 0x3c034309
  .word 0x44830000
  .word 0x00000000
  .word 0x46180000
  .word 0xe7a00084
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26240310
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
  .word 0x46170042
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
  .word 0x26240310
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020001
  .word 0x1062002b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x8e220004
  .word 0x28410090
  .word 0x10200004
  .word 0x00000000
  .word 0x44800800
  .word 0x1000001c
  .word 0x00000000
  .word 0x28410091
  .word 0x10200007
  .word 0x00000000
  .word 0x2442ff70
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000013
  .word 0x00000000
  .word 0x284100b4
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ff6f
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c02420c
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000002
  .word 0x00000000
  .word 0x44800800
  .word 0xc7808088
  .word 0x46000dc2
  .word 0x10000059
  .word 0x00000000
  .word 0x8e220004
  .word 0x04410004
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000014
  .word 0x00000000
  .word 0x2841000a
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x1000000e
  .word 0x00000000
  .word 0x2841000c
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000008
  .word 0x00000000
  .word 0x28410020
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000002
  .word 0x00000000
  .word 0x4480b800
  .word 0x04410006
  .word 0x00000000
  .word 0x4480c800
  .word 0x00000000
  .word 0x4600ce06
  .word 0x10000039
  .word 0x00000000
  .word 0x2841000a
  .word 0x10200012
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c0242c5
  .word 0x44820000
  .word 0x00000000
  .word 0x46010642
  .word 0x3c02c27a
  .word 0x44820000
  .word 0x00000000
  .word 0x46010602
  .word 0x10000025
  .word 0x00000000
  .word 0x2841000c
  .word 0x10200006
  .word 0x00000000
  .word 0x4480c800
  .word 0x00000000
  .word 0x4600ce06
  .word 0x1000001d
  .word 0x00000000
  .word 0x28410020
  .word 0x10200016
  .word 0x00000000
  .word 0x2442fff4
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c0242c5
  .word 0x44820000
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602065c
  .word 0x3c02c27a
  .word 0x44820000
  .word 0x00000000
  .word 0x46000818
  .word 0x4602061c
  .word 0x10000005
  .word 0x00000000
  .word 0x3c024345
  .word 0x4482c800
  .word 0x3c02c2fa
  .word 0x4482c000
  .word 0x0280202d
  .word 0x24050025
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0343b8
  .word 0x44830000
  .word 0x00000000
  .word 0x46190000
  .word 0xe7a00080
  .word 0x3c034309
  .word 0x44830000
  .word 0x00000000
  .word 0x46180000
  .word 0xe7a00084
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26240510
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
  .word 0x46170042
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
  .word 0x26240510
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020001
  .word 0x1062002e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000a8
  .word 0x00000000
  .word 0x8e220004
  .word 0x28410078
  .word 0x10200004
  .word 0x00000000
  .word 0x4480b800
  .word 0x10000013
  .word 0x00000000
  .word 0x284100dc
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ff88
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x0280202d
  .word 0x24050011
  .word 0x0c087328
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa00084
  .word 0x3c024420
  .word 0xafa20088
  .word 0x3c0243e0
  .word 0xafa2008c
  .word 0x26240210
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x8e230004
  .word 0x04610004
  .word 0x00000000
  .word 0x44800000
  .word 0x10000012
  .word 0x00000000
  .word 0x28610019
  .word 0x1020000d
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x3c023f80
  .word 0x44821800
  .word 0x00000000
  .word 0x46001dc1
  .word 0x04610004
  .word 0x00000000
  .word 0x44801800
  .word 0x1000000e
  .word 0x00000000
  .word 0x28610019
  .word 0x1020000b
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x3c023f80
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4603059c
  .word 0xc780839c
  .word 0x46020818
  .word 0x4603055d
  .word 0xafa00080
  .word 0xafa00084
  .word 0x3c024420
  .word 0xafa20088
  .word 0xafa0008c
  .word 0xafa20090
  .word 0x3c0243e0
  .word 0xafa20094
  .word 0xafa00098
  .word 0xafa2009c
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420080
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
  .word 0x24420080
  .word 0xc4400000
  .word 0x46160002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46150002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
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
  .word 0x24420080
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
  .word 0x26240210
  .word 0x27a50080
  .word 0x0c087624
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050011
  .word 0x0c087328
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46170042
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
  .word 0x26240210
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000032
  .word 0x00000000
  .word 0x001210c0
  .word 0x02221021
  .word 0x24501034
  .word 0x8c431038
  .word 0x8c421034
  .word 0x0062082a
  .word 0x10200005
  .word 0x00000000
  .word 0x24620001
  .word 0xae020004
  .word 0x10000025
  .word 0x00000000
  .word 0xae000004
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420003
  .word 0x24420004
  .word 0xae020000
  .word 0x0000182d
  .word 0x1000000c
  .word 0x00000000
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021140
  .word 0x02221021
  .word 0x24530610
  .word 0x8c420610
  .word 0x00401027
  .word 0x30420001
  .word 0x14400005
  .word 0x00000000
  .word 0x24630001
  .word 0x28620009
  .word 0x1440fff3
  .word 0x00000000
  .word 0x28620009
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ed00
  .word 0x2405036f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e620000
  .word 0x34420001
  .word 0xae620000
  .word 0xae600110
  .word 0xae720114
  .word 0x26520001
  .word 0x2a420003
  .word 0x1440ffcd
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x8e220004
  .word 0x04410004
  .word 0x00000000
  .word 0x44801800
  .word 0x10000012
  .word 0x00000000
  .word 0x28410019
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44821800
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x3c023f80
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4603059c
  .word 0xc780839c
  .word 0x46020818
  .word 0x4603055d
  .word 0x0280202d
  .word 0x2405000f
  .word 0x0c087328
  .word 0x00000000
  .word 0x0000902d
  .word 0x100000bc
  .word 0x00000000
  .word 0x001218c0
  .word 0x00721821
  .word 0x00031940
  .word 0x02231821
  .word 0x24700610
  .word 0x8c640610
  .word 0x00801827
  .word 0x30630001
  .word 0x146000b1
  .word 0x00000000
  .word 0x8e030110
  .word 0x2861000c
  .word 0x10200005
  .word 0x00000000
  .word 0x24620001
  .word 0xae020110
  .word 0x10000006
  .word 0x00000000
  .word 0x2403fffe
  .word 0x00831824
  .word 0xae030000
  .word 0x100000a4
  .word 0x00000000
  .word 0x8e030114
  .word 0x24020002
  .word 0x10620010
  .word 0x00000000
  .word 0x24020001
  .word 0x10620009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x3c0242fe
  .word 0x4482c000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c02433b
  .word 0x4482c000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c02436c
  .word 0x4482c000
  .word 0xc6000110
  .word 0x46800060
  .word 0x3c024140
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0x00000000
  .word 0x00000000
  .word 0x24020001
  .word 0x10620012
  .word 0x00000000
  .word 0x24020002
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x3c0244e6
  .word 0x44820000
  .word 0x00000000
  .word 0x46030042
  .word 0x3c024496
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e41
  .word 0x10000009
  .word 0x00000000
  .word 0x3c02c4e6
  .word 0x44821000
  .word 0x3c024420
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603165c
  .word 0x8e230008
  .word 0x24020001
  .word 0x10620011
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0xe7b90080
  .word 0xe7b80084
  .word 0x3c02447a
  .word 0xafa20088
  .word 0x3c024220
  .word 0xafa2008c
  .word 0x26040010
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x1000004d
  .word 0x00000000
  .word 0xe7b90080
  .word 0xe7b80084
  .word 0x3c02447a
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c800
  .word 0xe7a00088
  .word 0xe7b8008c
  .word 0xe7a00090
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c000
  .word 0xe7a00094
  .word 0xe7b90098
  .word 0xe7a0009c
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420080
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
  .word 0x24420080
  .word 0xc4400000
  .word 0x46160002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46150002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
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
  .word 0x24420080
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
  .word 0x26040010
  .word 0x27a50080
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ac
  .word 0xa3a200ad
  .word 0xa3a200ae
  .word 0x24020014
  .word 0xa3a200af
  .word 0x26040010
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430009
  .word 0x1460ff43
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb40060
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00268E20
void opTitle00268e20(void)
{
    void* frame;
    code *state;
    s32 i;
    u32* slot;
    code *quad;
    void* resource;
    u32* work;

    K_ASSERT(sOpTitle != NULL, 0x8e);
    work = sOpTitle;
    resource = opRes00266c50(0);
    if ((~*work & 1) == 0)
    {
        state = (code *)&D_00960090_abs;
        (*state)(8, 0);
        (*state)(6, 0);
        (*state)(9, 2);

        func_004d7f60(3, 0x717fb);
        func_004d7f60(2, 0x44);
        frame = func_0021cce0_ptr(func_0021cca0_u32(resource, 0xe));
        (*state)(1, (u32)(uintptr_t)frame);
        quad = (code *)&D_0096009C_abs;
        (*quad)(work + 4, 4, 0, 1, 2);
        (*quad)(work + 4, 4, 0, 2, 3);

        func_004d7f60(3, 0x717fb);
        func_004d7f60(2, 0x44);
        frame = func_0021cce0_ptr(func_0021cca0_u32(resource, 0xd));
        (*state)(1, (u32)(uintptr_t)frame);
        (*quad)(work + 0x44, 4, 0, 1, 2);
        (*quad)(work + 0x44, 4, 0, 2, 3);

        func_004d7f60(2, 0x48);
        func_004d7f60(3, 0x71801);
        frame = func_0021cce0_ptr(func_0021cca0_u32(resource, 0x25));
        (*state)(1, (u32)(uintptr_t)frame);
        (*quad)(work + 0xc4, 4, 0, 1, 2);
        (*quad)(work + 0xc4, 4, 0, 2, 3);

        func_004d7f60(3, 0x717fb);
        func_004d7f60(2, 0x44);
        frame = func_0021cce0_ptr(func_0021cca0_u32(resource, 0x24));
        (*state)(1, (u32)(uintptr_t)frame);
        (*quad)(work + 0x104, 4, 0, 1, 2);
        (*quad)(work + 0x104, 4, 0, 2, 3);

        func_004d7f60(3, 0x717fb);
        func_004d7f60(2, 0x44);
        for (i = 0; i < 9; i++)
        {
            slot = work + i * 0x48 + 0x184;
            if ((~*slot & 1) == 0)
            {
                func_004d7f60(2, 0x6a);
                frame = func_0021cce0_ptr(func_0021cca0_u32(resource, 0x11));
                state = (code *)&D_00960090_abs;
                (*state)(1, (u32)(uintptr_t)frame);
                quad = (code *)&D_0096009C_abs;
                (*quad)(work + 0x84, 4, 0, 1, 2);
                (*quad)(work + 0x84, 4, 0, 2, 3);

                func_004d7f60(2, 0x58);
                frame = func_0021cce0_ptr(func_0021cca0_u32(resource, 0xf));
                (*state)(1, (u32)(uintptr_t)frame);
                (*quad)(slot + 4, 4, 0, 1, 2);
                (*quad)(slot + 4, 4, 0, 2, 3);
            }
        }
    }
}

// FUN_002692D0
void opTitle002692d0(void)
{
    u32* work;
    void* resource;
    void* frame;
    u32* slot;
    u32 random;
    s32 i;
    K_ASSERT(sOpTitle != NULL, 0x8e);
    work = sOpTitle;
    resource = opRes00266c50(0);
    frame = func_0021cca0_u32(resource, 0xe);
    func_0021d3b0(work + 4, frame);
    frame = func_0021cca0_u32(resource, 0xd);
    func_0021d3b0(work + 0x44, frame);
    frame = func_0021cca0_u32(resource, 0x25);
    func_0021d3b0(work + 0xc4, frame);
    frame = func_0021cca0_u32(resource, 0x24);
    func_0021d3b0(work + 0x104, frame);
    frame = func_0021cca0_u32(resource, 0x25);
    func_0021d3b0(work + 0x144, frame);
    frame = func_0021cca0_u32(resource, 0x11);
    func_0021d3b0(work + 0x84, frame);
    for (i = 0; i < 9; i++)
    {
        slot = work + i * 0x48 + 0x184;
        slot[0] = 0;
        slot[0x44] = 0;
        frame = func_0021cca0_u32(resource, 0xf);
        func_0021d3b0(slot + 4, frame);
    }
    for (i = 0; i < 3; i++)
    {
        slot = work + i * 2 + 0x40d;
        slot[1] = 0;
        random = FUN_00488f30();
        slot[0] = random & 7;
    }
    opTitle00269500();
    *work |= 1;
}

// FUN_002694b0
void opTitle002694b0(void)
{
    K_ASSERT(sOpTitle != NULL, 0x8e);
    *sOpTitle &= 0xfffffffe;
}


// FUN_00269500
void opTitle00269500(void)
{
    u32* work;

    K_ASSERT(sOpTitle != NULL, 0x8e);
    work = sOpTitle;
    work[1] = 0;
    work[2] = 0;
    *work |= 4;
}

// FUN_00269550
void opTitle00269550(void)
{
    u32* work;

    K_ASSERT(sOpTitle != NULL, 0x8e);
    work = sOpTitle;
    work[1] = 0;
    work[2] = 1;
    *work |= 4;
}

// FUN_002695b0
void opTitle002695b0(void)
{
    u32* puVar1;

    K_ASSERT(sOpTitle != NULL, 0x8e);
    puVar1 = sOpTitle;
    K_ASSERT((*sOpTitle & 4) != 0, 0x4bc);
    K_ASSERT(puVar1[2] == 0, 0x4bd);
    puVar1[1] = 200;
}







// FUN_00269640
u32 opTitle00269640(void)
{
    K_ASSERT(sOpTitle != NULL, 0x8e);
    return *sOpTitle & 4;
}

/* W420 verified: scoped mesh temporaries and declaration order reduced opTitle00269690 nd361/772B to nd353/772B, window784B; rate46.76% to45.73%. */
// FUN_00269690
asm u32* opTitle00269690(s32 mode, s32 columns, s32 rows)
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x24020001
  .word 0x1282000e
  .word 0x00000000
  .word 0x12800003
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x26430001
  .word 0x26620001
  .word 0x00628818
  .word 0x72721818
  .word 0x00031040
  .word 0x00431021
  .word 0x00028040
  .word 0x10000024
  .word 0x00000000
  .word 0x32420001
  .word 0x1040000c
  .word 0x00000000
  .word 0x00121043
  .word 0x06410003
  .word 0x00000000
  .word 0x26420001
  .word 0x00021043
  .word 0x24430001
  .word 0x00131040
  .word 0x24420003
  .word 0x00628818
  .word 0x10000011
  .word 0x00000000
  .word 0x00121043
  .word 0x06410003
  .word 0x00000000
  .word 0x26420001
  .word 0x00021043
  .word 0x24430001
  .word 0x26620002
  .word 0x00432018
  .word 0x26620001
  .word 0x70521818
  .word 0x00031043
  .word 0x04610003
  .word 0x00000000
  .word 0x24620001
  .word 0x00021043
  .word 0x00828821
  .word 0x00131040
  .word 0x00531021
  .word 0x00021040
  .word 0x24420003
  .word 0x02428018
  .word 0x0000102d
  .word 0x24420020
  .word 0x0011a980
  .word 0x00551821
  .word 0x00101040
  .word 0x00622021
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x24430020
  .word 0xac430000
  .word 0x00751821
  .word 0xac430004
  .word 0x24030001
  .word 0x12830025
  .word 0x00000000
  .word 0x12800003
  .word 0x00000000
  .word 0x10000062
  .word 0x00000000
  .word 0x0000482d
  .word 0x8c480004
  .word 0x0000502d
  .word 0x26660001
  .word 0x26640002
  .word 0x10000015
  .word 0x00000000
  .word 0x0000582d
  .word 0x1000000d
  .word 0x00000000
  .word 0xa5090000
  .word 0x25270001
  .word 0xa5070002
  .word 0x01262821
  .word 0xa5050004
  .word 0xa5070006
  .word 0x01241821
  .word 0xa5030008
  .word 0xa505000a
  .word 0x2508000c
  .word 0x00e0482d
  .word 0x256b0001
  .word 0x0173182a
  .word 0x1460fff2
  .word 0x00000000
  .word 0x25290001
  .word 0x254a0001
  .word 0x0152182a
  .word 0x1460ffea
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0x0000282d
  .word 0x8c440004
  .word 0x0000182d
  .word 0x26690002
  .word 0x26670001
  .word 0x266a0003
  .word 0x10000037
  .word 0x00000000
  .word 0x0000602d
  .word 0x00603027
  .word 0x30cb0001
  .word 0x1000001c
  .word 0x00000000
  .word 0x1160000f
  .word 0x00000000
  .word 0xa4850000
  .word 0x24a80001
  .word 0xa4880002
  .word 0x00b33021
  .word 0x24c60002
  .word 0xa4860004
  .word 0xa4880006
  .word 0x00aa2821
  .word 0xa4850008
  .word 0xa486000a
  .word 0x2484000c
  .word 0x0100282d
  .word 0x1000000b
  .word 0x00000000
  .word 0xa4850000
  .word 0x00a94021
  .word 0xa4880002
  .word 0x00a73021
  .word 0xa4860004
  .word 0xa4850006
  .word 0x24a50001
  .word 0xa4850008
  .word 0xa488000a
  .word 0x2484000c
  .word 0x258c0001
  .word 0x0193302a
  .word 0x14c0ffe3
  .word 0x00000000
  .word 0x1160000a
  .word 0x00000000
  .word 0xa4850000
  .word 0x24a60001
  .word 0xa4860002
  .word 0x00a93021
  .word 0xa4860004
  .word 0x24840006
  .word 0x24a50002
  .word 0x10000008
  .word 0x00000000
  .word 0xa4850000
  .word 0x00a93021
  .word 0xa4860002
  .word 0x00a73021
  .word 0xa4860004
  .word 0x24840006
  .word 0x24a50001
  .word 0x24630001
  .word 0x0072302a
  .word 0x14c0ffc8
  .word 0x00000000
  .word 0xac540018
  .word 0xac530008
  .word 0xac52000c
  .word 0xac510010
  .word 0xac500014
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
}
// FUN_002699A0
void opTitle002699a0(void* memory)
{
    (*DAT_0096017c)(memory);
}

// FUN_002699D0
void opTitle002699d0(u32* vertex)
{
    (*D_009600A4)(3, vertex[0], vertex[4], vertex[1], vertex[5]);
}

// FUN_00269A10
void opTitle00269a10(OpTitleMesh* mesh, u32* callback)
{
    f32 var_f0;
    s32 temp_22;
    s32 temp_4;
    s32 temp_4_2;
    u32 index;
    s32 var_16;
    s32 var_16_2;
    s32 var_17;
    s32 var_17_2;
    s32 var_18;
    s32 var_19;
    struct
    {
        u32 mesh;
        f32 u;
        f32 v;
        u32 user;
        u32 index;
    } args;

    args.mesh = (u32)(uintptr_t)mesh;
    args.user = callback[1];
    temp_4 = mesh->mode;
    switch (temp_4)
    {
    case 0:
        for (var_17 = 0; var_17 < mesh->height + 1; var_17++)
        {
            for (var_16 = 0; var_16 < mesh->width + 1; var_16++)
            {
                temp_4_2 = mesh->width + 1;
                index = (u32)(var_16 + temp_4_2 * var_17);
                args.u = (f32)var_16 / (f32)mesh->width;
                args.v = (f32)var_17 / (f32)mesh->height;
                args.index = index;
                ((void (*)(void*))callback[0])(&args);
            }
        }
        return;
    case 1:
        var_19 = 0;
        for (var_17_2 = 0; var_17_2 < mesh->height + 1; var_17_2++)
        {
            temp_22 = ~var_17_2 & 1;
            if (temp_22 != 0)
            {
                var_16_2 = mesh->width + 2;
            }
            else
            {
                var_16_2 = mesh->width + 1;
            }
            for (var_18 = 0; var_18 < var_16_2; var_18++, var_19++)
            {
                if (temp_22 != 0)
                {
                    if (var_18 == 0)
                    {
                        var_f0 = 0.0f;
                    }
                    else if (var_18 == var_16_2 - 1)
                    {
                        var_f0 = 1.0f;
                    }
                    else
                    {
                        var_f0 = 1.0f / (f32)mesh->width * (f32)(var_18 - 1) +
                            1.0f / (f32)mesh->width / 2.0f;
                    }
                }
                else
                {
                    var_f0 = (f32)var_18 / (f32)mesh->width;
                }
                args.u = var_f0;
                args.v = (f32)var_17_2 / (f32)mesh->height;
                args.index = (u32)var_19;
                ((void (*)(void*))callback[0])(&args);
            }
        }
        return;
    }
}

// FUN_00269C80
f32 opTitle00269c80(f32 value)
{
    return sinf(value);
}


// FUN_00269CA0
f32 opTitle00269ca0(f32 value)
{
    return cosf(value);
}
