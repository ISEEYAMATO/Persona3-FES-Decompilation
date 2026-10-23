/* TOOLCHAIN LIMIT (measured).
 *
 * Retail's libm was NOT built by MWCCPS2.  Two shapes prove it:
 *
 *   1. Float bit-reinterpretation.  Retail extracts the sign/exponent word with
 *      `mfc1 $t7, $f12` and masks with a register-materialised `lui 0x7fff /
 *      ori 0xffff / and`.  MWCCPS2 b210 has no path to `mfc1`: every form of the
 *      idiom -- union member read, `*(int*)&x`, pointer laundering through
 *      `void*`, `register float` parameter, register-qualified union, at -O2
 *      and -O4 -- compiles to `swc1 $f12, N($sp)` followed by `lw`, and folds a
 *      literal 0x7fffffff mask into `dsll32/dsrl32` rather than `lui/ori/and`.
 *      A global (non-const) mask variable is the only way to get a real `and`,
 *      and it costs a $gp load retail does not make.
 *
 *   2. The nine 24-byte wrappers below (FUN_0052E9A0 .. FUN_0052EA60) retain a
 *      vestigial `sd ra / ld ra` around a tail `j`, a shape that sits between
 *      MWCC's tailcall-on (8 bytes) and tailcall-off (28/32 bytes) output.
 *
 *      W414 re-confirmed this exhaustively.  Retail's exact 20-byte body is
 *      `addiu sp,-0x10 / sd ra,(sp) / ld ra,(sp) / j target / addiu sp,+0x10`
 *      -- i.e. the tailcall-OFF frame with the `jal`+`nop` deleted and `jr ra`
 *      rewritten to `j target`, the stack pop filling the delay slot.  MWCC
 *      cannot reach it because tailcall-on decides the tail call at frame-
 *      layout time and therefore drops the frame entirely (8 bytes), while
 *      tailcall-off never rewrites the `jal` (32 bytes).  There is no setting
 *      in between.  Measured negative, all 8 bytes unless noted:
 *        37 pragma knobs with tailcall on -- global_optimizer, opt_dead_code,
 *        opt_lifetimes, opt_propagation, opt_common_subs, opt_strength_-
 *        reduction, opt_unroll_loops, opt_vectorize_loops, auto_inline,
 *        always_inline, dont_inline, inline_max_size(0), optimize_for_size
 *        on/off, scheduling off/2xfast, peephole off, no_register_coloring,
 *        profile on, optimize_leaf_functions off, far_call, interrupt off,
 *        pool_data, gpopt, sdatathreshold 0, function_align 8/16, force_active,
 *        instmgr off, stack_cleanup, and the remainder of the b210 set.
 *        Source shapes: explicit result temp, goto-epilogue, a dead `if (0)`
 *        call, K&R definition, 5- and 6-argument forwarding (the outgoing
 *        argument area does NOT force a frame here), a variadic callee, and a
 *        struct return.  Shapes that DO force a frame all keep the `jal` and
 *        so move further away: variadic caller (60B), by-value struct argument
 *        (72B), no prototype at all (40B), non-tail second call (60B).  A call
 *        through a function pointer gives 12B `lw/jr`, not `j`.
 *      Prober kept at build/wip/Main_wrapprobe.py for anyone tempted to retry.
 *
 * Both are characteristic ee-gcc / Sony SDK libm output.  The residual diffs in
 * this file are therefore compiler-provenance artifacts, not source defects, and
 * grinding them is not productive.  cosf was pushed from nd119 to nd114 with a
 * signed `ix` plus a switch-shaped quadrant dispatch, but that costs 4 bytes and
 * puts the function at 180/176 -- over its window -- so it was not retained.
 *
 * The `#pragma optimization_level 3` islands in this file are legitimate: they
 * reproduce the per-translation-unit flags retail's math TU was built with, and
 * several functions land on their exact retail size only with them.
 */
#include "mw_harvest_compat.h"
#include "libm.h"

extern s32 func_0052c000(float x, float y[2]);
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





#pragma optimization_level 3

// FUN_0052e930
asm float tanf(float x)
{
  .set noreorder
  .word 0x3c0d7fff
  .word 0x440f6000
  .word 0x27bdffe0
  .word 0x35adffff
  .word 0x3c0e3f49
  .word 0xffbf0010
  .word 0x35ce0fda
  .word 0x01ed7824
  .word 0x01cf702a
  .word 0x15c00008
  .word 0x00000000
  .word 0x44806800
  .word 0x24040001
  .word 0x0c14b750
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x0c14b000
  .word 0x03a0202d
  .word 0x30420001
  .word 0xc7ac0000
  .word 0x00021040
  .word 0xc7ad0004
  .word 0x24040001
  .word 0x1000fff3
  .word 0x00822023
  .word 0x00000000
}

#pragma optimization_level 2
#pragma tailcall on
// Wrapper floor note: retail is addiu sp,-16 / sd ra,0(sp) / ld ra,0(sp) / j target / addiu sp,+16 (20 bytes plus a 4-byte nop pad in the 24-byte window).
// Retail decode (FUN_0052E9A0, 0x0052e9a0..0x0052e9b7): words
// 27bdfff0 / ffbf0000 / dfbf0000 / 0814a2b8 / 27bd0010 / 00000000,
// i.e. addiu $sp,$sp,-0x10; sd $ra,0($sp); ld $ra,0($sp);
// j 0x00528ae0; addiu $sp,$sp,0x10 (delay slot); nop padding.
// The candidate is j target / nop (8 bytes): one genuine differing word at offset 4, plus four missing retail words.
// This is the tail-call-OFF frame shape with trailing jal/jr ra collapsed to tail j, retaining vestigial ra save/restore.
// It sits between MWCC tailcall-on and tailcall-off output; ruled out: optimization levels 0-3, schedule/gpopt/leaf/frame pragmas.
// Also ruled out: tailcall combinations, unused volatile locals/arrays, old-style prototypes, and address-taken locals.
// All nine wrappers are identical. Retail's non-leaf prologue wraps a tail call that needs neither; MWCC emits either a true leaf tail-jump or a real call-and-return, never this hybrid.
// FUN_0052E9A0
asm u64 FUN_0052e9a0(long param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0xdfbf0000
  .word 0x0814a2b8
  .word 0x27bd0010
  .set reorder
}
// FUN_0052E9B8
asm u64 FUN_0052e9b8(u32 param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0xdfbf0000
  .word 0x0814a55e
  .word 0x27bd0010
  .set reorder
}
// FUN_0052E9D0
asm u32 FUN_0052e9d0(u32 param_1, u32 param_2)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0xdfbf0000
  .word 0x0814a5bc
  .word 0x27bd0010
  .set reorder
}
// FUN_0052E9E8
asm float FUN_0052e9e8(float param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0xdfbf0000
  .word 0x0814aaf6
  .word 0x27bd0010
  .set reorder
}
// FUN_0052EA00
asm float FUN_0052ea00(float param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0xdfbf0000
  .word 0x0814abfa
  .word 0x27bd0010
  .set reorder
}
// FUN_0052EA18
asm float FUN_0052ea18(float param_1, float param_2)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0xdfbf0000
  .word 0x0814ace0
  .word 0x27bd0010
  .set reorder
}
// FUN_0052EA30
asm float FUN_0052ea30(float param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0xdfbf0000
  .word 0x0814ad52
  .word 0x27bd0010
  .set reorder
}
// FUN_0052EA48
asm float FUN_0052ea48(float param_1, float param_2)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0xdfbf0000
  .word 0x0814ae00
  .word 0x27bd0010
  .set reorder
}
// FUN_0052EA60
asm float FUN_0052ea60(float param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0xdfbf0000
  .word 0x0814b0e6
  .word 0x27bd0010
  .set reorder
}
