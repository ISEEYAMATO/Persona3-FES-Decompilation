#include "Main/Social/sfl_res.h"
#include "Kernel/Kwln/kwln.h"
#include "Kosaka/k_assert.h"
#include "rw/rwcore.h"
#include "libm.h"

static u32* sSflPanel; // DAT_007ce318
/* This owner begins at 0x0023D7A0; 0x0023F480 switches to bi_main.c/DAT_007CE31C. */

extern int DAT_0068e800[];
extern float DAT_0068e810[];
extern float DAT_0068e820[];
extern int DAT_0068e830[];
extern int DAT_0068e834[];
extern float DAT_0068e840[];
extern float DAT_0068e844[];
extern float DAT_0068e850[];
extern float DAT_0068e854[];
extern float DAT_0068e858;
extern float DAT_007cad78;
extern float DAT_007cae0c;
extern float DAT_007caf38;
extern float DAT_007cb034;
typedef int (*code)(...);
extern code DAT_00960090[];
extern code DAT_0096009c[];
#pragma alias DAT_00960090_abs DAT_00960090
extern u8 DAT_00960090_abs[];
#pragma alias DAT_0096009c_abs DAT_0096009c
extern u8 DAT_0096009c_abs[];
void func_0021d890(void* destination, const f32* vertices);
void func_0021d8e0(void* destination, const f32* rect);
void func_0021d950(void* destination, const u8* color);
void func_0021e170();
void func_0021eb80(void* destination, const f32* rect);
void func_004cb750();
u32 func_00255130();
void scrClearTextBox();
float sinf(float);
float cosf(float);
void func_0023dac0(void);


// FUN_0023D7B0
void func_0023d7b0(void)
{
    K_ASSERT(sSflPanel != NULL, 0x7f);
    sSflPanel = NULL;
}

// FUN_0023D7F0
void func_0023d7f0(void)
{
    u32* work;
    K_ASSERT(sSflPanel != NULL, 0x7f);
    work = sSflPanel;
    work[1] = 3;
    K_ASSERT(~*work & 1, 0x9c);
    *work |= 1;
}

// FUN_0023D870
void sflPanel0023d870(void)
{
    u32* work;

    K_ASSERT(sSflPanel != NULL, 0x7f);
    work = sSflPanel;
    K_ASSERT(*work & 1, 0xa3);
    *work &= 0xfffffffe;
}

// FUN_0023d8f0
void func_0023d8f0(void)
{
    u32* work;
    float t;
    RwV3d cameraOffset;
    float scale;
    K_ASSERT(sSflPanel != NULL, 0x7f);
    work = sSflPanel;
    K_ASSERT(*work & 1, 0xb2);

    switch (work[1]) {
    case 0:
        if ((s32)work[2] < 0x32) {
            work[2]++;
        } else {
            *work &= 0xfffffffd;
        }
        break;
    case 1:
        if ((s32)work[2] < 0x1e) {
            work[2]++;
        } else {
            *work &= 0xfffffffd;
        }
        break;
    case 2:
        if ((s32)work[2] < 0x1e) {
            work[2]++;
        } else {
            *work &= 0xfffffffd;
        }
        break;
    }
    func_0023dac0();
    scale = 200.0f;

    switch (work[1]) {
    case 0:
        if ((s32)work[2] < 0x32) {
            t = (float)((s32)work[2] + 1) / 50.0f;
            t = t * scale - t * (t * 100.0f) - 100.0f;
            cameraOffset.x = 0.0f;
            cameraOffset.y = 0.0f;
            cameraOffset.z = t;
            func_004cb750(kwlnGetMainCamera()->object.object.parent, &cameraOffset, 0);
        }
        break;
    default:
        break;
    }
}

// FUN_0023dac0
asm void func_0023dac0(void)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f83b628
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e860
  .word 0x2405007f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b628
  .word 0x8e040004
  .word 0x24030002
  .word 0x10830102
  .word 0x00000000
  .word 0x24030001
  .word 0x108300ff
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000381
  .word 0x00000000
  .word 0x8e030008
  .word 0x28610004
  .word 0x10200007
  .word 0x00000000
  .word 0x2402020e
  .word 0x44820000
  .word 0x00000000
  .word 0x468000a0
  .word 0x10000018
  .word 0x00000000
  .word 0x28610008
  .word 0x10200014
  .word 0x00000000
  .word 0x2462fffc
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x2402020e
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000882
  .word 0x10000002
  .word 0x00000000
  .word 0x44801000
  .word 0x2861001a
  .word 0x10200007
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x00000000
  .word 0x4600a5c6
  .word 0x1000000d
  .word 0x00000000
  .word 0x2462ffe6
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x00000000
  .word 0x4600a5c1
  .word 0xafa00060
  .word 0xafa00064
  .word 0x3c02432e
  .word 0xafa20068
  .word 0xafa0006c
  .word 0xafa20070
  .word 0x3c024200
  .word 0xafa20074
  .word 0xafa00078
  .word 0xafa2007c
  .word 0x0000182d
  .word 0x10000002
  .word 0x00000000
  .word 0x24630001
  .word 0x28620004
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c0242e4
  .word 0x44820000
  .word 0x00000000
  .word 0x46020080
  .word 0x3c02426c
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420060
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
  .word 0x26040110
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2009c
  .word 0xa3a2009d
  .word 0xa3a2009e
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
  .word 0xa3a3009f
  .word 0x26040110
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030008
  .word 0x28610004
  .word 0x10200010
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x24020266
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x4602a001
  .word 0x46000882
  .word 0x10000002
  .word 0x00000000
  .word 0x44801000
  .word 0x2861001a
  .word 0x10200003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x2462ffe6
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x4600a501
  .word 0xafa00060
  .word 0xafa00064
  .word 0x3c024280
  .word 0xafa20068
  .word 0xafa0006c
  .word 0xafa20070
  .word 0xafa20074
  .word 0xafa00078
  .word 0xafa2007c
  .word 0x0000182d
  .word 0xc781811c
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420060
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
  .word 0x0000182d
  .word 0x3c0241d0
  .word 0x44820000
  .word 0x00000000
  .word 0x46020080
  .word 0x3c024282
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420060
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
  .word 0x27a50060
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2009c
  .word 0xa3a2009d
  .word 0xa3a2009e
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
  .word 0xa3a3009f
  .word 0x26040010
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0x10000287
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000108
  .word 0x00000000
  .word 0x24020001
  .word 0x12420064
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x100000c9
  .word 0x00000000
  .word 0xafa00088
  .word 0x3c02bf80
  .word 0xafa2008c
  .word 0x8e040008
  .word 0x2402001e
  .word 0x14820004
  .word 0x00000000
  .word 0x24110003
  .word 0x10000023
  .word 0x00000000
  .word 0x2411ffff
  .word 0x0000282d
  .word 0x3c030069
  .word 0x2463e800
  .word 0x1000000b
  .word 0x00000000
  .word 0x00051080
  .word 0x00621021
  .word 0x8c420000
  .word 0x0082082a
  .word 0x10200004
  .word 0x00000000
  .word 0x24b1ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x24a50001
  .word 0x28a20004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x06210006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e860
  .word 0x240501b7
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2a220004
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e860
  .word 0x240501b8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x06210006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e860
  .word 0x240501bb
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2a220004
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e860
  .word 0x240501bc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00112880
  .word 0x3c020069
  .word 0x2442e800
  .word 0x00452021
  .word 0x8c830000
  .word 0x8e020008
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x8c820004
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x460008c3
  .word 0x3c020069
  .word 0x2442e820
  .word 0x00451021
  .word 0xc4410000
  .word 0xc4400004
  .word 0x46010001
  .word 0x44801000
  .word 0x00000000
  .word 0x46011018
  .word 0x46001ddc
  .word 0x3c020069
  .word 0x2442e810
  .word 0x00451021
  .word 0xc4410000
  .word 0xc4400004
  .word 0x46010001
  .word 0x46011018
  .word 0x46001d1c
  .word 0x1000006a
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x8e040008
  .word 0x2402001e
  .word 0x14820006
  .word 0x00000000
  .word 0x3c020069
  .word 0xc454e858
  .word 0x24110002
  .word 0x1000001b
  .word 0x00000000
  .word 0x2411ffff
  .word 0x0000282d
  .word 0x3c030069
  .word 0x2463e830
  .word 0x1000000b
  .word 0x00000000
  .word 0x00051080
  .word 0x00621021
  .word 0x8c420000
  .word 0x0082082a
  .word 0x10200004
  .word 0x00000000
  .word 0x24b1ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x24a50001
  .word 0x28a20003
  .word 0x1440fff4
  .word 0x00000000
  .word 0x06210006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e860
  .word 0x240501d8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x06210006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e860
  .word 0x240501db
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2a220003
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e860
  .word 0x240501dc
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00112880
  .word 0x3c020069
  .word 0x2442e830
  .word 0x00452021
  .word 0x8c830000
  .word 0x8e020008
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x8c820004
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x460008c3
  .word 0x3c020069
  .word 0x2442e840
  .word 0x00451021
  .word 0xc4410000
  .word 0xc4400004
  .word 0x46010001
  .word 0x44801000
  .word 0x00000000
  .word 0x46011018
  .word 0x46001ddc
  .word 0x3c020069
  .word 0x2442e850
  .word 0x00451021
  .word 0xc4410000
  .word 0xc4400004
  .word 0x46010001
  .word 0x46011018
  .word 0x4600185c
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010602
  .word 0x4600c306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a00088
  .word 0x4600c306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000007
  .word 0xe7a0008c
  .word 0x3c0243a0
  .word 0xafa20090
  .word 0x3c024360
  .word 0xafa20094
  .word 0x240202b2
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140002
  .word 0xe7a00080
  .word 0x3c0243f4
  .word 0x44820000
  .word 0x00000000
  .word 0x46140002
  .word 0xe7a00084
  .word 0x00121200
  .word 0x02021021
  .word 0x24510210
  .word 0x0220202d
  .word 0x27a50090
  .word 0x27a60088
  .word 0x27a70080
  .word 0x0c08785c
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2009c
  .word 0xa3a2009d
  .word 0xa3a2009e
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
  .word 0xa3a3009f
  .word 0x0220202d
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420002
  .word 0x1440fef7
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020002
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x240201cf
  .word 0x44820000
  .word 0x00000000
  .word 0x468005a0
  .word 0x3c0242b2
  .word 0x4482a800
  .word 0x10000005
  .word 0x00000000
  .word 0x3c0243ff
  .word 0x4482b000
  .word 0x3c0242b2
  .word 0x4482a800
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a00088
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000007
  .word 0xe7a0008c
  .word 0x3c0243a0
  .word 0xafa20090
  .word 0x3c024336
  .word 0xafa20094
  .word 0x8e030008
  .word 0x28610007
  .word 0x10200013
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0xc7838088
  .word 0x3c023f80
  .word 0x44821000
  .word 0x00000000
  .word 0x46001041
  .word 0x44800000
  .word 0x00000000
  .word 0x46020018
  .word 0x46011d1c
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x28610007
  .word 0x1020000d
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x2861000f
  .word 0x1020000f
  .word 0x00000000
  .word 0x2462fff9
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
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
  .word 0x4614b002
  .word 0xe7a00080
  .word 0x4614a802
  .word 0xe7a00084
  .word 0x26040410
  .word 0x27a50090
  .word 0x27a60088
  .word 0x27a70080
  .word 0x0c08785c
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2009c
  .word 0xa3a2009d
  .word 0xa3a2009e
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
  .word 0xa3a3009f
  .word 0x26040410
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a00088
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000007
  .word 0xe7a0008c
  .word 0x3c0243a0
  .word 0xafa20090
  .word 0x3c024336
  .word 0xafa20094
  .word 0x8e020008
  .word 0x28410007
  .word 0x10200004
  .word 0x00000000
  .word 0x4480a000
  .word 0x10000024
  .word 0x00000000
  .word 0x2841000f
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442fff9
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x28410016
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x1000000d
  .word 0x00000000
  .word 0x2442ffea
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010501
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x4601b002
  .word 0xe7a00080
  .word 0x4601a802
  .word 0xe7a00084
  .word 0x26040510
  .word 0x27a50090
  .word 0x27a60088
  .word 0x27a70080
  .word 0x0c08785c
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2009c
  .word 0xa3a2009d
  .word 0xa3a2009e
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
  .word 0xa3a3009f
  .word 0x26040510
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a00088
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000007
  .word 0xe7a0008c
  .word 0x3c0243a0
  .word 0xafa20090
  .word 0x3c024336
  .word 0xafa20094
  .word 0x8e030008
  .word 0x28610007
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44821000
  .word 0x1000002d
  .word 0x00000000
  .word 0x2861000f
  .word 0x10200014
  .word 0x00000000
  .word 0x2462fff9
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0xc7838088
  .word 0x3c023f80
  .word 0x44821000
  .word 0x00000000
  .word 0x46001041
  .word 0x44800000
  .word 0x00000000
  .word 0x46020018
  .word 0x4601189c
  .word 0x10000017
  .word 0x00000000
  .word 0x2861001a
  .word 0x10200012
  .word 0x00000000
  .word 0x2462fff1
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0xc7828088
  .word 0x3c023f80
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603109c
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44821000
  .word 0x28610007
  .word 0x10200004
  .word 0x00000000
  .word 0x4480a000
  .word 0x10000023
  .word 0x00000000
  .word 0x2861000f
  .word 0x1020000e
  .word 0x00000000
  .word 0x2462fff9
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x2861001a
  .word 0x1020000f
  .word 0x00000000
  .word 0x2462fff1
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010501
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0x4602b002
  .word 0xe7a00080
  .word 0x4602a802
  .word 0xe7a00084
  .word 0x26040610
  .word 0x27a50090
  .word 0x27a60088
  .word 0x27a70080
  .word 0x0c08785c
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2009c
  .word 0xa3a2009d
  .word 0xa3a2009e
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
  .word 0xa3a3009f
  .word 0x26040610
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
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
 
// FUN_0023e970
asm void func_0023e970(void)
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
  .word 0x8f82b628
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e860
  .word 0x2405007f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b628
  .word 0x8e020000
  .word 0x30420001
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e860
  .word 0x2405029b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x24040009
  .word 0x24050002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040014
  .word 0x24050002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
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
  .word 0x8e040004
  .word 0x24030002
  .word 0x10830047
  .word 0x00000000
  .word 0x24030001
  .word 0x10830044
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100000e8
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
  .word 0x0260902d
  .word 0x0000202d
  .word 0x0c083944
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c110096
  .word 0x2631009c
  .word 0x26040110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e02000c
  .word 0x2444ffff
  .word 0x0c083984
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x100000a9
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
  .word 0x3c120096
  .word 0x26520090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0839a4
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000017
  .word 0x00000000
  .word 0x00151200
  .word 0x02021021
  .word 0x24540210
  .word 0x3c120096
  .word 0x2652009c
  .word 0x0280202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa20002
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e020004
  .word 0x24040002
  .word 0x1044000b
  .word 0x00000000
  .word 0x24040001
  .word 0x10440003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0c0839a4
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000004
  .word 0x00000000
  .word 0x0c0839a4
  .word 0x00000000
  .word 0x0040882d
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
  .word 0x26730090
  .word 0x24040001
  .word 0x0220282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652009c
  .word 0x26040610
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040610
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
  .word 0x24040001
  .word 0x0220282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040510
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040510
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
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
  .word 0x24040001
  .word 0x0220282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
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
  .word 0x00000000
}

// FUN_0023ee50
void func_0023ee50(void)
{
    u32* work;
    s32 selection;
    int* image;
    float uv[4];
    RwV3d origin;

    float width;
    float height;
    K_ASSERT(sSflPanel != NULL, 0x7f);
    work = sSflPanel;
    selection = func_00255130();
    origin.x = 0.0f;
    origin.y = 0.0f;
    origin.z = 0.0f;
    func_004cb750(kwlnGetMainCamera()->object.object.parent, &origin, 0);
    K_ASSERT(selection != 0, 0x2fd);
    K_ASSERT(selection <= 6, 0x2fe);

    image = sflResGetBaseSecondaryRaster(selection - 1);
    width = (float)image[3];
    height = (float)image[4];
    uv[0] = 0.0f / width;
    uv[1] = 0.0f / height;
    uv[2] = width / width;
    uv[3] = height / height;
    func_0021eb80(work + 4, uv);

    image = sflResGetBaseRaster(0);
    width = (float)image[3];
    height = (float)image[4];
    uv[0] = 1.0f / width;
    uv[1] = 0.0f / height;
    uv[2] = 174.0f / width;
    uv[3] = 32.0f / height;
    func_0021eb80(work + 0x44, uv);

    work[2] = 0;
    work[1] = 0;
    *work |= 2;
    work[3] = selection;
    func_0023dac0();
    scrClearTextBox(1, 0, 6, 0);
}

// FUN_0023f010
void func_0023f010(void)
{
    u32* work;
    int* image;
    float uv[4];
    int i;
    float width;
    float height;

    K_ASSERT(sSflPanel != NULL, 0x7f);
    work = sSflPanel;

    {
        float u0;
        float v0;
        float u1;
        float v1;

        image = sflResGetEffectRaster(0);
        width = (float)image[3];
        height = (float)image[4];
        i = 0;
        u0 = 0.0f / width;
        v0 = 0.0f / height;
        u1 = width / width;
        v1 = height / height;
        while (i < 2) {
            uv[0] = u0;
            uv[1] = v0;
            uv[2] = u1;
            uv[3] = v1;
            func_0021eb80(work + 0x84 + i * 0x40, uv);
            i++;
        }
    }

    {
        float u0;
        float v0;
        float u1;
        float v1;

        image = sflResGetEffectRaster(1);
        width = (float)image[3];
        height = (float)image[4];
        i = 0;
        u0 = 1.0f / width;
        v0 = 1.0f / height;
        u1 = 463.0f / width;
        v1 = 89.0f / height;
        while (i < 3) {
            uv[0] = u0;
            uv[1] = v0;
            uv[2] = u1;
            uv[3] = v1;
            func_0021eb80(work + 0x104 + i * 0x40, uv);
            i++;
        }
    }

    work[2] = 0;
    work[1] = 1;
    *work |= 2;
    func_0023dac0();
}

// FUN_0023f1d0
void func_0023f1d0(void)
{
    u32* work;
    int* image;
    float uv[4];
    int i;
    float width;
    float height;
    float u0;
    float v0;
    float u1;
    float v1;

    K_ASSERT(sSflPanel != NULL, 0x7f);
    work = sSflPanel;

    image = sflResGetEffectRaster(0);
    width = (float)image[3];
    height = (float)image[4];
    i = 0;
    u0 = 0.0f / width;
    v0 = 0.0f / height;
    u1 = width / width;
    v1 = height / height;
    while (i < 2) {
        uv[0] = u0;
        uv[1] = v0;
        uv[2] = u1;
        uv[3] = v1;
        func_0021eb80(work + 0x84 + i * 0x40, uv);
        i++;
    }

    image = sflResGetEffectRaster(2);
    width = (float)image[3];
    height = (float)image[4];
    i = 0;
    u0 = 1.0f / width;
    v0 = 1.0f / height;
    u1 = 510.0f / width;
    v1 = 89.0f / height;
    while (i < 3) {
        uv[0] = u0;
        uv[1] = v0;
        uv[2] = u1;
        uv[3] = v1;
        func_0021eb80(work + 0x104 + i * 0x40, uv);
        i++;
    }

    work[2] = 0;
    work[1] = 2;
    *work |= 2;
    func_0023dac0();
}

// FUN_0023F390
u32 sflPanel0023f390(void)
{
    K_ASSERT(sSflPanel != NULL, 0x7f);
    return *sSflPanel & 2;
}

// FUN_0023F3E0
void sflPanel0023f3e0(void)
{
    K_ASSERT(sSflPanel != NULL, 0x7f);
    *sSflPanel |= 8;
}

// FUN_0023F430
void sflPanel0023f430(void)
{
    K_ASSERT(sSflPanel != NULL, 0x7f);
    *sSflPanel &= 0xfffffff7;
}
