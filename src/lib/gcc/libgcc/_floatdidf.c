#include "mw_harvest_compat.h"
/*
 * See src/lib/sce/libm/sf_tan.c for the measured ee-gcc provenance and
 * wrapper-family floor analysis retained for these vendor libm translation units.
 */

#pragma alias FUN_00531170_u64 FUN_00531170
extern u64 FUN_00531170_u64(u64, u64);
#pragma alias FUN_00531230_u64 FUN_00531230
extern u64 FUN_00531230_u64(u64, u64);
#pragma alias FUN_00531720_u64 FUN_00531720
extern u64 FUN_00531720_u64(u32);






#pragma optimization_level 2
#pragma optimization_level 3
// FUN_0052EAC8
#ifndef PC_BUILD
asm u64 FUN_0052eac8(s64 u)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffb10008
  .word 0xffbf0018
  .word 0x0080802d
  .word 0xffb20010
  .word 0x0004203f
  .word 0x2411040f
  .word 0x0c14c5c8
  .word 0x0010803c
  .word 0x00118d3c
  .word 0x0040202d
  .word 0x0c14c48c
  .word 0x0220282d
  .word 0x0010803e
  .word 0x0220282d
  .word 0x0040202d
  .word 0x0c14c48c
  .word 0x0010803c
  .word 0x0010803f
  .word 0x0040902d
  .word 0x0c14c5c8
  .word 0x0200202d
  .word 0x2405041f
  .word 0x0040202d
  .word 0x06010003
  .word 0x00052d3c
  .word 0x0c14c45c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c14c45c
  .word 0x0040282d
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfbf0018
  .word 0x03e00008
  .word 0x27bd0020
}
#endif /* PC_BUILD: asm function omitted */
