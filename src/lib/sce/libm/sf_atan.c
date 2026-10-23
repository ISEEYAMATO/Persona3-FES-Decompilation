#include "mw_harvest_compat.h"
#include "libm.h"
/*
 * See src/lib/sce/libm/sf_tan.c for the measured ee-gcc provenance and
 * wrapper-family floor analysis retained for these vendor libm translation units.
 */

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

#pragma optimization_level 3
// FUN_0052e408
#ifndef PC_BUILD
asm float atanf(float x)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb10008
  .word 0x3c0e7fff
  .word 0xffb00000
  .word 0x35ceffff
  .word 0x44116000
  .word 0x3c0f507f
  .word 0x35efffff
  .word 0xffbf0010
  .word 0x022e8024
  .word 0x01f0782a
  .word 0x11e0000e
  .word 0x46006186
  .word 0x3c0f007c
  .word 0x25ef0334
  .word 0x1e200004
  .word 0xc5e40000
  .word 0x3c0f007c
  .word 0x25ef0338
  .word 0xc5e40000
  .word 0x46002006
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x3c0f3edf
  .word 0x35efffff
  .word 0x01f0782a
  .word 0x15e0005e
  .word 0x3c0f30ff
  .word 0x35efffff
  .word 0x01f0782a
  .word 0x15e0000c
  .word 0x240effff
  .word 0x3c0f007c
  .word 0x25ef033c
  .word 0xc5e00000
  .word 0x3c0f007c
  .word 0x46006000
  .word 0x25ef0340
  .word 0xc5e10000
  .word 0x46000834
  .word 0x4501ffe8
  .word 0x46006106
  .word 0x240effff
  .word 0x46063142
  .word 0x3c0f007c
  .word 0x25ef0350
  .word 0xc5e00000
  .word 0x46052902
  .word 0x3c0f007c
  .word 0x25ef0354
  .word 0xc5e10000
  .word 0x46002002
  .word 0x3c0f007c
  .word 0x25ef0358
  .word 0x46012042
  .word 0xc5e20000
  .word 0x3c0f007c
  .word 0x46020000
  .word 0x25ef035c
  .word 0xc5e30000
  .word 0x46002002
  .word 0x3c0f007c
  .word 0x25ef0360
  .word 0x46030840
  .word 0xc5e20000
  .word 0x3c0f007c
  .word 0x46020000
  .word 0x25ef0364
  .word 0x46012042
  .word 0xc5e30000
  .word 0x46002002
  .word 0x3c0f007c
  .word 0x25ef0368
  .word 0x46030840
  .word 0xc5e20000
  .word 0x3c0f007c
  .word 0x46020000
  .word 0x25ef036c
  .word 0x46012042
  .word 0xc5e30000
  .word 0x46002002
  .word 0x3c0f007c
  .word 0x25ef0370
  .word 0x46030840
  .word 0xc5e20000
  .word 0x3c0f007c
  .word 0x46020000
  .word 0x25ef0374
  .word 0x46012042
  .word 0xc5e30000
  .word 0x46002002
  .word 0x3c0f007c
  .word 0x25ef0378
  .word 0x46030840
  .word 0xc5e20000
  .word 0x46020000
  .word 0x46012102
  .word 0x05c10005
  .word 0x46002802
  .word 0x46040000
  .word 0x46003002
  .word 0x1000ffab
  .word 0x46003101
  .word 0x46040000
  .word 0x3c0f007c
  .word 0x000e7080
  .word 0x25ef02f0
  .word 0x01cf7821
  .word 0xc5e20000
  .word 0x46003002
  .word 0x3c0f007c
  .word 0x25ef02e0
  .word 0x01cf7021
  .word 0x46020001
  .word 0xc5c10000
  .word 0x46060001
  .word 0x06210002
  .word 0x46000801
  .word 0x46000007
  .word 0x1000ff99
  .word 0x46000106
  .word 0x0c14b9e2
  .word 0x00000000
  .word 0x3c0f3f97
  .word 0x35efffff
  .word 0x01f0782a
  .word 0x15e0001b
  .word 0x46000186
  .word 0x3c0f3f2f
  .word 0x35efffff
  .word 0x01f0782a
  .word 0x15e00010
  .word 0x3c0f007c
  .word 0x3c0f007c
  .word 0x46000000
  .word 0x25ef0344
  .word 0x0000702d
  .word 0xc5e10000
  .word 0x3c0f007c
  .word 0x46013040
  .word 0x25ef0340
  .word 0xc5e20000
  .word 0x46020001
  .word 0x00000000
  .word 0x00000000
  .word 0x46010183
  .word 0x1000ff99
  .word 0x46063142
  .word 0x240e0001
  .word 0x25ef0340
  .word 0xc5e00000
  .word 0x46003040
  .word 0x1000fff6
  .word 0x46003001
  .word 0x3c0f401b
  .word 0x35efffff
  .word 0x01f0782a
  .word 0x15e0000c
  .word 0x3c0f007c
  .word 0x3c0f007c
  .word 0x240e0002
  .word 0x25ef0348
  .word 0xc5e00000
  .word 0x3c0f007c
  .word 0x46003042
  .word 0x25ef0340
  .word 0xc5e20000
  .word 0x46003001
  .word 0x1000ffe6
  .word 0x46020840
  .word 0x25ef034c
  .word 0xc5e00000
  .word 0x00000000
  .word 0x00000000
  .word 0x46060183
  .word 0x1000ff7b
  .word 0x240e0003
}
#endif /* PC_BUILD: asm function omitted */
