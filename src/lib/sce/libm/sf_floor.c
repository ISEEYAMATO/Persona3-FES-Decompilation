#include "mw_harvest_compat.h"
#include "libm.h"
/*
 * See src/lib/sce/libm/sf_tan.c for the measured ee-gcc provenance and
 * wrapper-family floor analysis retained for these vendor libm translation units.
 */




#pragma optimization_level 2

#pragma optimization_level 3
// FUN_0052e7a0
#ifndef PC_BUILD
asm float floorf(register float x)
{
  .set noreorder
  .word 0x440f6000
  .word 0x3c0e7fff
  .word 0x35ceffff
  .word 0x01ee5824
  .word 0x01e0602d
  .word 0x000b7dc2
  .word 0x25edff81
  .word 0x29ae0017
  .word 0x11c0000f
  .word 0x46006006
  .word 0x05a10015
  .word 0x3c0f007f
  .word 0x3c0f007c
  .word 0x44800800
  .word 0x25ef0384
  .word 0xc5e00000
  .word 0x46006000
  .word 0x46000834
  .word 0x45000005
  .word 0x448c0000
  .word 0x05800005
  .word 0x3c0f007f
  .word 0x0000602d
  .word 0x448c0000
  .word 0x03e00008
  .word 0x00000000
  .word 0x35efffff
  .word 0x01eb782b
  .word 0x55e0fffa
  .word 0x3c0cbf80
  .word 0x03e00008
  .word 0x448c0000
  .word 0x35efffff
  .word 0x01af5807
  .word 0x018b7024
  .word 0x11c0fff4
  .word 0x46006006
  .word 0x3c0f007c
  .word 0x44800800
  .word 0x25ef0384
  .word 0xc5e00000
  .word 0x46006000
  .word 0x46000834
  .word 0x4500ffec
  .word 0x448c0000
  .word 0x05810005
  .word 0x000b7827
  .word 0x3c0f0080
  .word 0x01af7807
  .word 0x018f6021
  .word 0x000b7827
  .word 0x1000ffe3
  .word 0x018f6024
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
