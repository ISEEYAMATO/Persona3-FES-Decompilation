#include "mw_harvest_compat.h"
#include "libm.h"

extern s32 func_0052c000(float x, float y[2]);
extern float func_0052d2d8(float x, float y);
extern float func_0052dc48(float x, float y, s32 iy);
extern float func_0052dd40(float x, float y, s32 iy);
extern u64 FUN_00528ae0(long);
extern u64 FUN_00529578(u32);
extern u32 FUN_005296f0(u32 param_1, u32 param_2);
extern float FUN_0052abd8(float);
extern float FUN_0052afe8(float);
extern float FUN_0052b380(float param_1, float param_2);
extern float FUN_0052b548(float);
extern float FUN_0052b800(float param_1, float param_2);
extern float FUN_0052c398(float);
#pragma alias FUN_00531170_u64 FUN_00531170
extern u64 FUN_00531170_u64(u64, u64);
#pragma alias FUN_005311c8_u64 FUN_005311c8
extern u64 FUN_005311c8_u64(u64, u64);
#pragma alias FUN_00531230_u64 FUN_00531230
extern u64 FUN_00531230_u64(u64, u64);
#pragma alias FUN_005316d0_u64 FUN_005316d0
extern s64 FUN_005316d0_u64(u64, u64);
#pragma alias FUN_00531720_u64 FUN_00531720
extern u64 FUN_00531720_u64(u32);
#pragma alias FUN_005318a0_void FUN_005318a0
extern void FUN_005318a0_void(u64);
#pragma alias FUN_005318f8_u32 FUN_005318f8
extern u32 FUN_005318f8_u32(u64);
#pragma alias FUN_00530da0_u64 FUN_00530da0
extern u64 FUN_00530da0_u64(u32);
extern u64 FUN_0052efd8(u64, u64, u64 *);
extern u64 FUN_0052f7d0(u64, u64, u64 *);

static const float sAtanHi[] = {
    0.463647603989f,
    0.785398125648f,
    0.982793629169f,
    1.5707962513f,
};

static const float sAtanLo[] = {
    5.012158244e-09f,
    3.774894353e-08f,
    3.447321717e-08f,
    7.549789416e-08f,
};

static const float sAtanTerms[] = {
    0.333333343267f,
    -0.199999988079f,
    0.142857134343f,
    -0.111111104488f,
    0.090908870101f,
    -0.076918758452f,
    0.066610723734f,
    -0.058335699141f,
    0.049768779427f,
    -0.0365315712988f,
    0.0162858199328f,
};








#pragma optimization_level 2
#pragma optimization_level 2
#pragma optimization_level 3
/* W416 negative: canonical s64 wrapper nd71/84 (85% differing) shrank from the 296-byte window versus baseline nd192/232 (83%); explicit half-negation nd181/224 (81%) also moved away. Retail therefore does not match a helper-call wrapper; no rewrite retained. */
// FUN_0052EEB0
asm u64 FUN_0052eeb0(long param_1,long param_2)
{
  .set noreorder
  .word 0x0004783c
  .word 0x0005703c
  .word 0x000f783f
  .word 0x27bdffe0
  .word 0x000f7823
  .word 0xffb10008
  .word 0x000e703f
  .word 0xffb00000
  .word 0x000f683c
  .word 0xffbf0010
  .word 0x000e7023
  .word 0x0004783f
  .word 0x000e703c
  .word 0x0005603f
  .word 0x000d683e
  .word 0x000e703e
  .word 0x0000882d
  .word 0x000f4823
  .word 0x05e1000e
  .word 0x000c4023
  .word 0x240fffff
  .word 0x2411ffff
  .word 0x000f783c
  .word 0x016f5824
  .word 0x016d5825
  .word 0x000b783c
  .word 0x000f783f
  .word 0x000b583c
  .word 0x000f782b
  .word 0x000b583e
  .word 0x012f7823
  .word 0x000f783c
  .word 0x016f2025
  .word 0x0581000d
  .word 0x240fffff
  .word 0x00118827
  .word 0x000f783c
  .word 0x014f5024
  .word 0x014e5025
  .word 0x000a783c
  .word 0x000f783f
  .word 0x000a503c
  .word 0x000f782b
  .word 0x000a503e
  .word 0x010f7823
  .word 0x000f783c
  .word 0x014f2825
  .word 0x0c14bbf6
  .word 0x0000302d
  .word 0x0002783c
  .word 0x240effff
  .word 0x000f783f
  .word 0x000e703c
  .word 0x000f7823
  .word 0x020e8024
  .word 0x000f783c
  .word 0x0002703f
  .word 0x000f783e
  .word 0x000e7023
  .word 0x12200009
  .word 0x020f8025
  .word 0x0010783c
  .word 0x000f783f
  .word 0x0010803c
  .word 0x000f782b
  .word 0x0010803e
  .word 0x01cf7823
  .word 0x000f783c
  .word 0x020f1025
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
}
#pragma optimization_level 3
#pragma optimization_level 2
/* opt_propagation off: 1748/1736 nd1571 -> 1732/1736 nd1521. */
#pragma opt_propagation off
// FUN_0052EFD8
asm u64 FUN_0052efd8(u64 n, u64 d, u64 *rp)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x0005483f
  .word 0xffb10008
  .word 0x0005283c
  .word 0x0004c03c
  .word 0xffb00000
  .word 0xffb20010
  .word 0x00c0882d
  .word 0x0004503f
  .word 0x0005283f
  .word 0x152000ff
  .word 0x0018c03f
  .word 0x0145782b
  .word 0x11e0006d
  .word 0x340fffff
  .word 0x01e5782b
  .word 0x15e00063
  .word 0x3c0f00ff
  .word 0x240f0008
  .word 0x2cae0100
  .word 0x01e0602d
  .word 0x000e600b
  .word 0x3c0e007c
  .word 0x01857806
  .word 0x25ce0388
  .word 0x240b0020
  .word 0x01ee7821
  .word 0x91ed0000
  .word 0x01ac6821
  .word 0x016dc823
  .word 0x13200006
  .word 0x01797823
  .word 0x032a7004
  .word 0x01f87806
  .word 0x03252804
  .word 0x01cf5025
  .word 0x0338c004
  .word 0x00055c02
  .word 0x30a9ffff
  .word 0x014b001b
  .word 0x00186c02
  .word 0x51600001
  .word 0x000001cd
  .word 0x00007812
  .word 0x00007010
  .word 0x00006012
  .word 0x000e7400
  .word 0x01e95018
  .word 0x01cd7025
  .word 0x01ca782b
  .word 0x51e0000b
  .word 0x01ca7023
  .word 0x01c57021
  .word 0x01c5782b
  .word 0x15e00006
  .word 0x258cffff
  .word 0x01ca782b
  .word 0x51e00004
  .word 0x01ca7023
  .word 0x258cffff
  .word 0x01c57021
  .word 0x01ca7023
  .word 0x330dffff
  .word 0x01cb001b
  .word 0x51600001
  .word 0x000001cd
  .word 0x00007812
  .word 0x00007010
  .word 0x00005812
  .word 0x000e7400
  .word 0x01e95018
  .word 0x01cd2025
  .word 0x008a782b
  .word 0x11e0000b
  .word 0x000c7c00
  .word 0x00852021
  .word 0x0085782b
  .word 0x15e00006
  .word 0x256bffff
  .word 0x008a782b
  .word 0x11e00004
  .word 0x000c7c00
  .word 0x00852021
  .word 0x256bffff
  .word 0x000c7c00
  .word 0x008ac023
  .word 0x01eb3825
  .word 0x0000902d
  .word 0x1220000a
  .word 0x03387806
  .word 0x240effff
  .word 0x000f783c
  .word 0x000e703c
  .word 0x010e4024
  .word 0x000f783e
  .word 0x010f4025
  .word 0x0008403c
  .word 0x0008403e
  .word 0xfe280000
  .word 0x240effff
  .word 0xdfb00000
  .word 0x0007783c
  .word 0xdfb10008
  .word 0x000e703c
  .word 0x000f783e
  .word 0x004e1024
  .word 0x0012683c
  .word 0x004f1025
  .word 0xdfb20010
  .word 0x000d683e
  .word 0x0002103c
  .word 0x000d683c
  .word 0x0002103e
  .word 0x004d1025
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x240e0010
  .word 0x35efffff
  .word 0x240d0018
  .word 0x01e5782b
  .word 0x01c0602d
  .word 0x1000ff9c
  .word 0x01af600b
  .word 0x14a00008
  .word 0x01e5782b
  .word 0x240f0001
  .word 0x01e9001b
  .word 0x50a00001
  .word 0x000001cd
  .word 0x00002812
  .word 0x340fffff
  .word 0x01e5782b
  .word 0x15e0007e
  .word 0x3c0f00ff
  .word 0x240f0008
  .word 0x2cae0100
  .word 0x01e0602d
  .word 0x000e600b
  .word 0x3c0e007c
  .word 0x01857806
  .word 0x25ce0388
  .word 0x240b0020
  .word 0x01ee7821
  .word 0x91ed0000
  .word 0x01ac6821
  .word 0x016dc823
  .word 0x17200036
  .word 0x01798023
  .word 0x01455023
  .word 0x24120001
  .word 0x00054c02
  .word 0x30a3ffff
  .word 0x0149001b
  .word 0x00186402
  .word 0x51200001
  .word 0x000001cd
  .word 0x00007010
  .word 0x00006812
  .word 0x00003812
  .word 0x000e7400
  .word 0x01a35818
  .word 0x01cc7025
  .word 0x01cb782b
  .word 0x51e0000b
  .word 0x01cb7023
  .word 0x01c57021
  .word 0x01c5782b
  .word 0x15e00006
  .word 0x25a7ffff
  .word 0x01cb782b
  .word 0x51e00004
  .word 0x01cb7023
  .word 0x24e7ffff
  .word 0x01c57021
  .word 0x01cb7023
  .word 0x330dffff
  .word 0x01c9001b
  .word 0x51200001
  .word 0x000001cd
  .word 0x00007812
  .word 0x00007010
  .word 0x00005012
  .word 0x000e7400
  .word 0x01e35818
  .word 0x01cd2025
  .word 0x008b782b
  .word 0x11e0000b
  .word 0x00077c00
  .word 0x00852021
  .word 0x0085782b
  .word 0x15e00006
  .word 0x254affff
  .word 0x008b782b
  .word 0x11e00004
  .word 0x00077c00
  .word 0x00852021
  .word 0x254affff
  .word 0x00077c00
  .word 0x008bc023
  .word 0x1000ff90
  .word 0x01ea3825
  .word 0x03252804
  .word 0x00054c02
  .word 0x020a6006
  .word 0x0189001b
  .word 0x30a3ffff
  .word 0x02187006
  .word 0x032a7804
  .word 0x01ee5025
  .word 0x0120382d
  .word 0x000a7402
  .word 0x0338c004
  .word 0x51200001
  .word 0x000001cd
  .word 0x00006810
  .word 0x00006012
  .word 0x00002012
  .word 0x000d6c00
  .word 0x01835818
  .word 0x01ae7025
  .word 0x01cb782b
  .word 0x11e0000a
  .word 0x0060302d
  .word 0x01c57021
  .word 0x01c5782b
  .word 0x15e00006
  .word 0x2584ffff
  .word 0x01cb782b
  .word 0x51e00004
  .word 0x01cb7023
  .word 0x2484ffff
  .word 0x01c57021
  .word 0x01cb7023
  .word 0x314dffff
  .word 0x01c7001b
  .word 0x50e00001
  .word 0x000001cd
  .word 0x00007812
  .word 0x00007010
  .word 0x00003812
  .word 0x000e7400
  .word 0x01e65818
  .word 0x01cd6025
  .word 0x018b782b
  .word 0x11e0000b
  .word 0x00047c00
  .word 0x01856021
  .word 0x0185782b
  .word 0x15e00006
  .word 0x24e7ffff
  .word 0x018b782b
  .word 0x11e00004
  .word 0x00047c00
  .word 0x24e7ffff
  .word 0x01856021
  .word 0x00047c00
  .word 0x018b5023
  .word 0x1000ff96
  .word 0x01e79025
  .word 0x240e0010
  .word 0x35efffff
  .word 0x240d0018
  .word 0x01e5782b
  .word 0x01c0602d
  .word 0x1000ff81
  .word 0x01af600b
  .word 0x0149782b
  .word 0x15e0001f
  .word 0x0000382d
  .word 0x340fffff
  .word 0x01e9782b
  .word 0x15e0009b
  .word 0x3c0f00ff
  .word 0x240f0008
  .word 0x2d2e0100
  .word 0x01e0602d
  .word 0x000e600b
  .word 0x3c0e007c
  .word 0x01897806
  .word 0x25ce0388
  .word 0x240b0020
  .word 0x01ee7821
  .word 0x91ed0000
  .word 0x01ac6821
  .word 0x016dc823
  .word 0x1720001c
  .word 0x01798023
  .word 0x012a782b
  .word 0x15e00005
  .word 0x03056823
  .word 0x0305782b
  .word 0x15e00007
  .word 0x0000382d
  .word 0x03056823
  .word 0x01497023
  .word 0x030d782b
  .word 0x24070001
  .word 0x01cf5023
  .word 0x01a0c02d
  .word 0x1220ff37
  .word 0x0000902d
  .word 0x240effff
  .word 0x0018783c
  .word 0x000e703c
  .word 0x000f783e
  .word 0x010e4024
  .word 0x000a683c
  .word 0x010f4025
  .word 0x000d683e
  .word 0x0008403c
  .word 0x000d683c
  .word 0x0008403e
  .word 0x1000ff29
  .word 0x010d4025
  .word 0x03297004
  .word 0x02057806
  .word 0x020a6006
  .word 0x01cf4825
  .word 0x032a6804
  .word 0x00095c02
  .word 0x3126ffff
  .word 0x018b001b
  .word 0x02187806
  .word 0x01af5025
  .word 0x03252804
  .word 0x000a6c02
  .word 0x0338c004
  .word 0x51600001
  .word 0x000001cd
  .word 0x00007010
  .word 0x00006012
  .word 0x00003812
  .word 0x000e7400
  .word 0x01861818
  .word 0x01cd7025
  .word 0x01c3782b
  .word 0x51e0000b
  .word 0x01c37023
  .word 0x01c97021
  .word 0x01c9782b
  .word 0x15e00006
  .word 0x2587ffff
  .word 0x01c3782b
  .word 0x51e00004
  .word 0x01c37023
  .word 0x24e7ffff
  .word 0x01c97021
  .word 0x01c37023
  .word 0x314dffff
  .word 0x01cb001b
  .word 0x51600001
  .word 0x000001cd
  .word 0x00007812
  .word 0x00007010
  .word 0x00006012
  .word 0x000e7400
  .word 0x01e61818
  .word 0x01cd3025
  .word 0x00c3782b
  .word 0x11e0000b
  .word 0x00077c00
  .word 0x00c93021
  .word 0x00c9782b
  .word 0x15e00006
  .word 0x258cffff
  .word 0x00c3782b
  .word 0x11e00004
  .word 0x00077c00
  .word 0x258cffff
  .word 0x00c93021
  .word 0x00077c00
  .word 0x30aeffff
  .word 0x01ec3825
  .word 0x00c33023
  .word 0x30efffff
  .word 0x00056402
  .word 0x01ee9018
  .word 0x71ec5818
  .word 0x00076c02
  .word 0x00c0502d
  .word 0x01ae7018
  .word 0x00127c02
  .word 0x016f5821
  .word 0x016e5821
  .word 0x016e702b
  .word 0x11c00003
  .word 0x71ac6018
  .word 0x3c0f0001
  .word 0x018f6021
  .word 0x000b7402
  .word 0x000b6c00
  .word 0x018e2021
  .word 0x324fffff
  .word 0x0144702b
  .word 0x15c00005
  .word 0x01af5821
  .word 0x148a0009
  .word 0x030b782b
  .word 0x11e00007
  .word 0x00000000
  .word 0x01656823
  .word 0x00897023
  .word 0x016d782b
  .word 0x24e7ffff
  .word 0x01cf2023
  .word 0x01a0582d
  .word 0x1220fecc
  .word 0x0000902d
  .word 0x030b6823
  .word 0x00c46023
  .word 0x030d702b
  .word 0x018e5023
  .word 0x032d6806
  .word 0x020a7804
  .word 0x240effff
  .word 0x01ed7825
  .word 0x000e703c
  .word 0x000f783c
  .word 0x010e4024
  .word 0x000f783e
  .word 0x032a7006
  .word 0x010f4025
  .word 0x000e703c
  .word 0x0008403c
  .word 0x0008403e
  .word 0x1000feb8
  .word 0x010e4025
  .word 0x240e0010
  .word 0x35efffff
  .word 0x240d0018
  .word 0x01e9782b
  .word 0x01c0602d
  .word 0x1000ff64
  .word 0x01af600b
}
#pragma opt_propagation reset
