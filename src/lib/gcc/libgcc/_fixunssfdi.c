#include "mw_harvest_compat.h"
/*
 * See src/lib/sce/libm/sf_tan.c for the measured ee-gcc provenance and
 * wrapper-family floor analysis retained for these vendor libm translation units.
 */

extern u64 FUN_0052eac8(s64 u);
#pragma alias FUN_00531170_u64 FUN_00531170
extern u64 FUN_00531170_u64(u64, u64);
#pragma alias FUN_005311c8_u64 FUN_005311c8
extern u64 FUN_005311c8_u64(u64, u64);
#pragma alias FUN_00531230_u64 FUN_00531230
extern u64 FUN_00531230_u64(u64, u64);
#pragma alias FUN_005316d0_u64 FUN_005316d0
extern s64 FUN_005316d0_u64(u64, u64);
#pragma alias FUN_005318f8_u32 FUN_005318f8
extern u32 FUN_005318f8_u32(u64);
#pragma alias FUN_00530da0_u64 FUN_00530da0
extern u64 FUN_00530da0_u64(u32);






/* W415 probes rejected: typed f32 input plus canonical signed-high/rounded
 * correction compiled to nd126 (188/272), worse than baseline nd116
 * (192/272); signed/rounded variants reached nd149-163 without a win.
 */
// FUN_0052EDA0
#pragma optimization_level 3
asm long FUN_0052eda0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb20010
  .word 0xffbf0018
  .word 0xffb00000
  .word 0x0c14c368
  .word 0xffb10008
  .word 0x0040902d
  .word 0x0040202d
  .word 0x0c14c5b4
  .word 0x0000282d
  .word 0x240503df
  .word 0x0240202d
  .word 0x00052d3c
  .word 0x04400022
  .word 0x0000782d
  .word 0x0c14c48c
  .word 0x00000000
  .word 0x0c14c63e
  .word 0x0040202d
  .word 0x0002883c
  .word 0x0011883e
  .word 0x0011883c
  .word 0x0011787a
  .word 0x322e0001
  .word 0x01cf7025
  .word 0x06200023
  .word 0x0220202d
  .word 0x0c14bab2
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c14c472
  .word 0x0040282d
  .word 0x0000802d
  .word 0x0040902d
  .word 0x0040202d
  .word 0x0c14c5b4
  .word 0x0200282d
  .word 0x0240282d
  .word 0x04410010
  .word 0x0200202d
  .word 0x0c14c472
  .word 0x00000000
  .word 0x0c14c63e
  .word 0x0040202d
  .word 0x0002103c
  .word 0x0002103e
  .word 0x0222882f
  .word 0x0220782d
  .word 0xdfb00000
  .word 0x01e0102d
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfbf0018
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x0c14c63e
  .word 0x0240202d
  .word 0x0002103c
  .word 0x0002103e
  .word 0x1000fff3
  .word 0x0222882d
  .word 0x0c14bab2
  .word 0x01c0202d
  .word 0x0040202d
  .word 0x0c14c45c
  .word 0x0040282d
  .word 0x1000ffdb
  .word 0x0240202d
}
