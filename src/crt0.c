#include "temporary.h"

/* Retail startup stubs at the head of the text segment (0x100008/0x100218).
 * The entry function is handwritten MMI assembly in retail; the C forms stay
 * NONMATCHING and exist so every executable byte has a C-owned home. */

extern u8 D_007CDE80[];
extern u8 D_009ACC80[];
extern u32 D_0095C280[];
extern void func_0050d658();
extern void func_005033e0();
extern void func_0051f6a0();
extern void func_0050da58(s32 status);
extern void FlushCache(s32 mode);
extern int main(int argc, char* argv[]);
extern void FUN_00100220_ExitThread(void);

// FUN_00100008
#ifndef PC_BUILD
asm void func_00100008(void)
{
  .set noreorder
  .word 0x70000c28
  .word 0x70001428
  .word 0x70001c28
  .word 0x70002428
  .word 0x70002c28
  .word 0x70003428
  .word 0x70003c28
  .word 0x70004428
  .word 0x70004c28
  .word 0x70005428
  .word 0x70005c28
  .word 0x70006428
  .word 0x70006c28
  .word 0x70007428
  .word 0x70007c28
  .word 0x70008428
  .word 0x70008c28
  .word 0x70009428
  .word 0x70009c28
  .word 0x7000a428
  .word 0x7000ac28
  .word 0x7000b428
  .word 0x7000bc28
  .word 0x7000c428
  .word 0x7000cc28
  .word 0x7000e428
  .word 0x7000ec28
  .word 0x7000f428
  .word 0x7000fc28
  .word 0x00000011
  .word 0x70000011
  .word 0x00000013
  .word 0x70000013
  .word 0x04190000
  .word 0x44800000
  .word 0x44800800
  .word 0x44801000
  .word 0x44801800
  .word 0x44802000
  .word 0x44802800
  .word 0x44803000
  .word 0x44803800
  .word 0x44804000
  .word 0x44804800
  .word 0x44805000
  .word 0x44805800
  .word 0x44806000
  .word 0x44806800
  .word 0x44807000
  .word 0x44807800
  .word 0x44808000
  .word 0x44808800
  .word 0x44809000
  .word 0x44809800
  .word 0x4480a000
  .word 0x4480a800
  .word 0x4480b000
  .word 0x4480b800
  .word 0x4480c000
  .word 0x4480c800
  .word 0x4480d000
  .word 0x4480d800
  .word 0x4480e000
  .word 0x4480e800
  .word 0x4480f000
  .word 0x4480f800
  .word 0x46010018
  .word 0x0000040f
  .word 0x44c0f800
  .word 0x3c02007d
  .word 0x3c03009b
  .word 0x2442de80
  .word 0x2463cc80
  .word 0x3044000f
  .word 0x10800006
  .word 0x00000000
  .word 0xa0400000
  .word 0x24420001
  .word 0x00000000
  .word 0x0804004b
  .word 0x00000000
  .word 0x3c04ffff
  .word 0x3484fff0
  .word 0x00642024
  .word 0x10440007
  .word 0x00000000
  .word 0x7c400000
  .word 0x24420010
  .word 0x00000000
  .word 0x00000000
  .word 0x08040056
  .word 0x00000000
  .word 0x10430007
  .word 0x00000000
  .word 0xa0400000
  .word 0x24420001
  .word 0x00000000
  .word 0x00000000
  .word 0x0804005e
  .word 0x00000000
  .word 0x3c04007d
  .word 0x3c0501f6
  .word 0x3c06000a
  .word 0x3c070096
  .word 0x3c080010
  .word 0x24842cf0
  .word 0x24a50000
  .word 0x24c60000
  .word 0x24e7c280
  .word 0x25080220
  .word 0x0080e025
  .word 0x2403003c
  .word 0x0000000c
  .word 0x0040e825
  .word 0x3c04009b
  .word 0x3c050000
  .word 0x2484cc80
  .word 0x24a5ffff
  .word 0x2403003d
  .word 0x0000000c
  .word 0x0c143596
  .word 0x00000000
  .word 0x0c140cf8
  .word 0x00002025
  .word 0x42000038
  .word 0x3c020096
  .word 0x2442c280
  .word 0x8c440000
  .word 0x0c064e60
  .word 0x24450004
  .word 0x08147da8
  .word 0x00402025
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00100220 ExitThread
#ifndef PC_BUILD
asm void FUN_00100220_ExitThread(void)
{
    .set noreorder
    addiu $v1, $zero, 0x23
    .word 0x0000000c /* syscall 0 */
    nop
    nop
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00100218
#pragma optimization_level 3
#pragma tailcall on
void func_00100218(s32 status)
{
    func_0050da58(status);
}
#pragma optimization_level 2
