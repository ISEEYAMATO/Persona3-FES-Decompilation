#include "mw_harvest_compat.h"
/*
 * See src/lib/sce/libm/sf_tan.c for the measured ee-gcc provenance and
 * wrapper-family floor analysis retained for these vendor libm translation units.
 */

extern long FUN_0052ec28(u64 param_1);
#pragma alias FUN_005311c8_u64 FUN_005311c8
extern u64 FUN_005311c8_u64(u64, u64);
#pragma alias FUN_005316d0_u64 FUN_005316d0
extern s64 FUN_005316d0_u64(u64, u64);






#pragma optimization_level 2
// FUN_0052ED30
#ifndef PC_BUILD
asm long FUN_0052ed30(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffb10008
  .word 0x0000802d
  .word 0xffbf0010
  .word 0x0080882d
  .word 0x0c14c5b4
  .word 0x0200282d
  .word 0x0220282d
  .word 0x04400007
  .word 0x0200202d
  .word 0x0220202d
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfbf0010
  .word 0x0814bb0a
  .word 0x27bd0020
  .word 0x0c14c472
  .word 0x00000000
  .word 0x0c14bb0a
  .word 0x0040202d
  .word 0xdfb00000
  .word 0x0002102f
  .word 0xdfb10008
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
