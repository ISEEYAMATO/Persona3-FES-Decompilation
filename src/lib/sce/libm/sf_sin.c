#include "mw_harvest_compat.h"
#include "libm.h"
/*
 * See src/lib/sce/libm/sf_tan.c for the measured ee-gcc provenance and
 * wrapper-family floor analysis retained for these vendor libm translation units.
 */

extern s32 func_0052c000(float x, float y[2]);
extern float func_0052d2d8(float x, float y);
extern float func_0052dc48(float x, float y, s32 iy);





#pragma optimization_level 3
// FUN_0052e878
asm float sinf(float x)
{
  .set noreorder
  .word 0x3c0d7fff
  .word 0x440f6000
  .word 0x27bdffe0
  .word 0x35adffff
  .word 0x3c0e3f49
  .word 0xffbf0010
  .word 0x35ce0fd8
  .word 0x01ed7824
  .word 0x01cf702a
  .word 0x15c00007
  .word 0x44806800
  .word 0x0000202d
  .word 0x0c14b712
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x0c14b000
  .word 0x03a0202d
  .word 0x30420003
  .word 0x240f0001
  .word 0x104f0013
  .word 0x284f0002
  .word 0x11e0000a
  .word 0x240f0002
  .word 0x10400005
  .word 0xc7ac0000
  .word 0x0c14b4b6
  .word 0xc7ad0004
  .word 0x1000fff0
  .word 0x46000007
  .word 0x24040001
  .word 0x1000ffeb
  .word 0xc7ad0004
  .word 0x144ffff8
  .word 0xc7ac0000
  .word 0x24040001
  .word 0x0c14b712
  .word 0xc7ad0004
  .word 0x1000ffe6
  .word 0x46000007
  .word 0xc7ac0000
  .word 0x0c14b4b6
  .word 0xc7ad0004
  .word 0x1000ffe2
  .word 0xdfbf0010
}
