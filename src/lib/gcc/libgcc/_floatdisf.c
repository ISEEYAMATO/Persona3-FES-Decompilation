#include "mw_harvest_compat.h"
/*
 * See src/lib/sce/libm/sf_tan.c for the measured ee-gcc provenance and
 * wrapper-family floor analysis retained for these vendor libm translation units.
 */








#pragma optimization_level 2
// Scoped scheduler: level-2 target is 224B without schedule and 200B with schedule.
#pragma schedule on
/* W415 probe rejected: canonical u64 helper rewrite compiled to nd174
 * with object 228/200, exceeding the retail window; baseline is nd141
 * at 200/200.
 */
// FUN_0052EB60
asm float FUN_0052eb60(s64 u)
{
  .set noreorder
  .word 0x240ff800
  .word 0x27bdffe0
  .word 0x000f7afa
  .word 0xffb20010
  .word 0x240ef800
  .word 0xffb00000
  .word 0x008f782d
  .word 0xffb10008
  .word 0x000e72ba
  .word 0xffbf0018
  .word 0x01cf702b
  .word 0x0080902d
  .word 0x308d07ff
  .word 0x11c00002
  .word 0x348f0800
  .word 0x01ed900b
  .word 0x0012203f
  .word 0x2410040f
  .word 0x0c14c5c8
  .word 0x0010853c
  .word 0x0200282d
  .word 0x0c14c48c
  .word 0x0040202d
  .word 0x0200282d
  .word 0x0040202d
  .word 0x0c14c48c
  .word 0x0012803c
  .word 0x0010803e
  .word 0x0040882d
  .word 0x0010803c
  .word 0x0010803f
  .word 0x0c14c5c8
  .word 0x0200202d
  .word 0x2405041f
  .word 0x0040202d
  .word 0x06010003
  .word 0x00052d3c
  .word 0x0c14c45c
  .word 0x00000000
  .word 0x0040282d
  .word 0x0c14c45c
  .word 0x0220202d
  .word 0x0c14c628
  .word 0x0040202d
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfbf0018
  .word 0x03e00008
  .word 0x27bd0020
}
#pragma schedule off
