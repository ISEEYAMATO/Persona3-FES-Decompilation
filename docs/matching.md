# Matching heuristics

Source-level techniques for making `mwccps2` (`mwcps2-3.0.1b210-060308`,
`-O2 -Iinclude`) reproduce retail codegen byte-for-byte. This complements the
**Fingerprint checklist** and **compiler-artifact blockers** in `AGENTS.md`: that lists the
raw signals; this lists the *source rewrites* that flip a `NONMATCHING` to `MATCH`.
Terms such as *window*, *wall*, *lever*, and *residual* follow the
[README glossary](../README.md#glossary).

Verify each result:

- Every entry is verified by `tools/verify.py` reporting `MATCH`. Confirm before you commit;
  never chain `verify && git commit` past a `MISMATCH` (the `&&` only checks the tool exit code,
  not the match status).
- Diff a single function with `python tools/fndiff.py <file> <fn> | grep -F "!"` (real body diffs;
  empty = body-clean).
- Techniques are per-function. A construct that matches one function may differ in another;
  always diff and adjust.
- If only register allocation, instruction scheduling, evaluation-order, FPU-reg choice,
  mask-fold, or commutative-`addu` operand order remains after exhausting these, it is a
  compiler-imposed difference. Mark `NONMATCHING` and move on.

## Progress metrics

Use the [README](../README.md) progress badge, generated objdiff report, or `python tools/progress.py` for
current verifier progress. Do not copy progress figures into prose; the generated
[`progress/metrics.json`](../progress/metrics.json) is machine-readable diagnostic output
for mapped function windows.
---

## Types and the EE ABI

- **Independent int/float argument register files.** The EE/o32-hardfloat ABI fills integer
  args (`$a0..`) and float args (`$f12..`) from *separate* counters. So `f(void*, float)` puts the
  pointer in `$a0` and the float in `$f12` (not `$a1`). Source argument order controls the
  *materialization* order of the two moves. If retail computes `addiu $a0,...` before
  `mov.s $f12,...`, put the pointer first in the C signature.
- **Ghidra mistypes float returns and args as `int`.** A callee that returns `float` shows as
  `undefined4`/`uint`; a `float` parameter shows as `undefined4`. Trust the disassembly, not the
  decompiler: `mov.s $f12`, `swc1`, `lwc1`, `cvt.*` mean float. Declare `float FUN_x();` and
  `void FUN_y(void*, float);` accordingly.
- **`bool` is not a valid type here.** Use `u8`/`u32` for predicate returns.
- **Typed `short`/`char` prototype params defeat mwcc's sign-extension CSE.** Retail re-sign-extends
  a `short`/`char` arg at *every* call site; a bare `(short)expr` gets CSE'd into one extension.
  Declaring the callee `int f(short)` / `void f(char)` forces per-call `dsll32;dsra32` (or `lbu`).
  This unlocked the entire `scrComuCommand` module.
- **`int`, not `char`, for a callee-saved local** whose extension retail defers to a `char`-typed
  callee param (scrComuCommand 35fbd0).
- **`u32`/`int` return, not `u8`,** to drop a spurious `andi 0xff` on the return value (datScript 3111f0).
- **`float` constant with a zero low half** (e.g. `100.0f` = `0x42c80000`) materializes inline as
  `lui;mtc1` with no rodata `lwc1` — declare the callee `void f(float,...)` and pass `100.0f`.
- **By-value 2-float struct param** (`sd`-spill + `lwc1/swc1` copy at the call): pass a
  `typedef struct { f32 x, y; }` by value.
- **12-byte float block copy** (retail loads all three then stores all three:
  `lwc1 f2,f1,f0` / `swc1 f2,f1,f0`) → struct assignment `*(RwV3d*)dst = *(RwV3d*)src` using the
  existing `RwV3d` (`#include "rw/rwplcore.h"`; `{ float x, y, z; }`). Plain per-field float
  assignments interleave `lwc1/swc1` and will not match (gc_pose 24f960/250500).
- **u16 field load width.** A direct `*(u16*)((int)p + off)` emits `lhu`; `*(short*)` emits `lh`.
  Only add a `(u16)`/`(short)` cast on the *other* operand when retail actually emits `andi`/sign-extend.

## Control flow and branch polarity

- **Branch polarity is per-`if` and nests.** Retail out-lines the taken block. Invert the `if` so the
  *fall-through* body matches retail's inline body. Nested `if`s may each need inverting independently
  — inverting only the outer leaves the inner `bnez`/`beqz` mismatched.
- **Early-return inversion.** `if (cond) { body } return X;` where retail out-lines `body` →
  `if (!cond) return X; body; return X;`.
- **Branch-materialized predicate.** `return (x == 0)` → `if (x != 0) return 0; return 1;`.
- **`!(...)` vs `== 0`.** Retail's `sltu $zero,v0; xori 1` needs `!(...)`, not `== 0` (datScript 3111f0).
- **`(~x & N) == 0` stays literal** — do not simplify to `(x & N) == N`.
- **Unconditional else-abort** → `K_ASSERT(0, line)` (folds `if(!0)` to an unconditional call).
- **Init function that asserts a global is already NULL** → `K_ASSERT(sG == NULL, line)`.
- **`slti $at` vs `slti $v0` branch-temp idiom (often a wall).** A `<` comparison against a small
  constant lowers to the `blt`/`bge` pseudo (`slti $at`); a `>=`/`!(x<k)` comparison materializes an
  explicit `slti $v0`. mwcc canonicalizes `>=` and `!(x<k)` to the `$v0` form, so the `$at`-pseudo
  layout is not always reachable while preserving the required inline/out-line arrangement
  (bp_persona 266f60).
- **Assert `field <= N` vs `field < N+1` flips the `slti` dest register.** When the compared value is
  dead after the test (e.g. an `K_ASSERT(field <= 3, line)` on a struct field never reused), retail
  reuses the value's own register (`lw $v1,off(base); slti $v1,$v1,4`). mwcc lowers the literal `<= N`
  through the `$at` pseudo (`slti $at,$v1,4`); rewriting it as the equivalent `< N+1` keeps the value's
  register and matches. If the value *is* reused after the test, retail itself uses `$at` — then keep
  `<= N` (gc_pose 24f960 vs 252060).
- **Switch case-order wall.** mwcc emits switch compares in **numeric-ascending** case order. If retail
  tests a higher case first, no switch or if-chain reproduces it (op_root 265f80: mwcc 8/9/0x11,
  retail 0x11/9/8). When retail *does* check the lowest case first, `switch (e) { case a: case b: ... }`
  reproduces its `beq→body` dispatch with a deferred default.
- **A matching function body does not prove a matching switch table.** mwcc emits local-label
  `R_MIPS_32` relocations for jump-table entries in `.rodata`; relocation masking can therefore hide
  a permutation of otherwise byte-identical case bodies. `tools/verify.py` compares resolvable
  function-owned table targets, and `tools/build.py` additionally requires compiler-owned data
  sections to materialize byte-identically before linking a translation unit. `br_res` 234070 exposed
  this: reordering the source cases changed only the table addends and restored retail identity.
- **`#pragma no_branch_likely on` suppresses mwcc's branch-likely hints.** mwcc otherwise emits
  `beql`/`bnel` for some conditional branches; retail frequently uses the plain `beq`/`bne` form.
  Wrapping a function in `#pragma no_branch_likely on` ... `#pragma no_branch_likely off` and
  leaving the C body untouched reproduces retail's plain branches. This is a *code-generation*
  lever, not a source rewrite, so it is orthogonal to the shape tricks above and composes with
  them. It fixed eight functions in one sweep: `rt2d` `FUN_004b2e20` / `FUN_004b3440` /
  `FUN_004b87d0`, `rpworld` `FUN_004959e0` / `FUN_004ae900`, `rprandom` `FUN_00489020`,
  `rwplcore` `FUN_004c70a0`, `rtanim` `FUN_00465ae0`. Try it first on any function whose only
  residual is a `beql`/`bnel` where retail has `beq`/`bne`; `tools/fndiff.py` shows the exact
  differing word.
- **Adjacent equality/inequality chains are range-folded (frequent wall).** mwcc rewrites
  `x == A || x == A+1` (and the De Morgan `x != A && x != A+1`) into a range check
  (`addiu t,x,-A; sltiu at,t,2`), losing retail's two direct compares, which often reuse
  switch-dispatch constants already materialized in argument registers. Reordering the tests, the
  Yoda form, `if`/`else-if` splits, duplicate bodies and a two-case `switch` header all still fold.
  Making the *second* test unsigned (`x == A || (u32)x == (u32)(A+1)`) defeats the fold and restores
  the compare pair (k_footstep 1de630, case 2).

## Loops

- **Bottom-test loop idiom.** A natural `while (cond) { ... }` reproduces retail's bottom-test layout
  (jump to the condition, body, condition at the bottom). Prefer it over `while (1) { if (!cond) break; }`.
- **Hoist a loop-invariant mask into an explicit local.** mwcc does *not* LICM an `andi`/cast out of a
  loop at `-O2`. Write `int key = param & 0xffff;` (or the cast) *before* the loop and compare against
  `key`; that reproduces retail's single hoisted `andi` (sfl_camera 24d3b0/24d430). `#pragma
  optimization_level 3` enables LICM but also reschedules the prologue — usually worse.
- **Integer-arithmetic copy loops** (`*(u16*)(p + i*2 + 2)` with `p` as `int`) beat the `arr[i+1]`
  commutative-`addu` form (br_root 1f1df0).
- **Raw byte-offset addressing controls `addu` operand order.** `*(T*)((int)base + i*4 + off)` computes
  `base + index` (left-assoc), matching retail's `addu base,index`, where the `arr[i+off]` form emits
  `index + base` (op_res, bcm_main 203360). See also the commutative-`addu` note below.

## Register allocation and caching

- **Cache after the first assert / cache the base pointer.** Functions that reuse a gp-global load it
  once into a saved reg. Mirror with `K_ASSERT(sG != NULL, line); work = sG; ...use work...`. Setters
  that reload the global for each store also need `work = sG;`. Getters/setters that touch the base
  more than once almost always need this even when Ghidra prints the global at each access
  (sfl_cursor 25aa70, sfl_result).
- **Cache a global pointer into a local for indexed RMW stores.** A `static T* g;` accessed as
  `g[i] = g[i] + 1` (indexed read-modify-write) makes mwcc precompute the element address
  (`addiu v1,base,off; sw v0,(v1)`); retail keeps the base and uses `sw v0,off(base)`. Assign
  `T* p = g;` after the assert and use `p[0]`/`p[i]` throughout — mwcc then addresses every access as
  base+offset (bpo_main 252060). Writing `g[i]` directly (even with a temp for the value) keeps the
  precomputed-address form.
- **Cache the *cleared* value for a read-modify-test.** When retail clears one bit and tests another
  that the clear does not touch, it reuses the cleared register: `uVar1 = *g & ~1; *g = uVar1;
  if (uVar1 & 2) ...` reproduces `andi v1,v1,2` (op_wait 26ebf0).
- **Use a fresh temp for a final one-shot result.** If a handle lives in a callee-saved reg across
  several calls, reassigning that same variable for the last call forces a `move s,v0`; assign the
  last result to a *different* short-lived local so it stays in `$v0` (sfl_psel 260a50).
- **A volatile lvalue can delay an address calculation across a call.** When retail calls a size
  helper before materializing the destination address, but mwcc hoists the destination arithmetic,
  cast the final lvalue—not the stored value—to `volatile`. This keeps the observable store while
  preventing the compiler from scheduling its address calculation before the call (`br_res`
  234070).
- **Declaration order sets callee-saved allocation.** Natural declaration order (not reverse) tends to
  reproduce retail's `s0/s1` assignment (sfl_result 1f9800). A **param vs surviving-local** fight over
  `s0` is generally a wall (bpRootCreateTasks, several camp creates — permuter-confirmed).
- **Internal linkage enables interprocedural register preservation.** Making a TU-local callee `static`
  lets mwcc prove which registers its body actually writes; callers may then keep values in `$a2`/`$a3`
  (and `$v0` when the callee never writes it) across the call instead of spilling to `$s0`. Retail does
  this in `mt_evtMenu`'s menu callbacks: with `FUN_0036F680` global, `FUN_0037A640` spilled the status
  and missed on `move v0,$a2`; declaring it `static` produced retail's `move v0,$a2` byte-for-byte.
  Check that every caller is in the same TU before changing linkage.

## Read-modify-write and flags

- **Chained flag OR → separate statements.** `*p |= a; *p |= b;` (two RMW statements on the pointer)
  reproduces retail's single-load running-value chain (`lw; ori a; sw; ori b; sw`). A cached
  `v = *p; *p = v|a; *p = v|b;` gets constant-folded to `ori v0,a` / `ori v0,a|b` (cached form).
  Match whichever the disassembly shows (bp_persona 266f60, br_root 1f1b60).

## Globals and addressing

- **Absolute globals outside the gp window** (`0x833xxx`, `0x871exx`, `0x95xxxx`, `0x96xxxx`, read as a
  value via `lui;lw`) → declare `extern T DAT_addr[]; DAT_addr[0]` (HI16/LO16 relocs). A `static`
  would emit GPREL16 and mismatch (datScript `DAT_00957190`, sfl_camera `DAT_00960070`).
- **Absolute function-pointer slots use the same array idiom.** For a retail `lui; lw; jalr` through
  an address outside the gp window, declare `extern void* DAT_addr[];` and call
  `((Ret (*)(Args...))DAT_addr[0])(...)`. Declaring `extern Ret (*DAT_addr)(Args...)` can place the
  slot in small data and emit `lw ..., GPREL16(gp); jalr`, one instruction shorter than retail
  (`K_FldUnit_Destroy` 1d0110).
- **gp base = `0x7d2cf0`** (`_mips_gp0_value`). This maps `puGpffffbXXX` (gp offset, sign-extended) to
  the absolute `DAT_007ceXXX` it aliases — e.g. `puGpffffb5f8` = `0x7d2cf0 - 0x4a08` = `0x7ce2e8`.
  Use it to avoid declaring a duplicate global for the same variable.

## Commutative-`addu` (frequent wall)

Retail's `addu` operand order for `base + index*scale` is context-dependent and often not
source-reachable. Levers to try, in order:

- The raw byte-offset form (above) flips it in some functions.
- **Named temp for the scaled index** (permuter-found, scrComu 35ff80/360020): hoisting
  `idx = i * 4;` and indexing `*(u32*)(idx + base + off)` flips the `addu` where inline
  `i * 4 + base + off` and all its reassociations do not.
- **Pointer-typed base + array index** (g_data 16f900): `u8* base = ...; base[i * 0x14 + 9]`
  flips the `addu` where the int-arithmetic forms (`(s32)base + i * 0x14 + 9`, temp-hoisted or
  not) stay in the wrong order. Also hoists the base load before the index math.
- **Inline pointer copy** (permuter-found, btlUnit 285fa0/286130): with `mdl = unit->mdl;` cached,
  `(m = mdl)->attachedWpns[i].flags` flips the condition's `addu` to retail's `index + base`, and
  `(m = unit->mdl)->attachedWpns[i].wpnMdl->flags |= x` does the same for a store path, while a
  plain `mdl->attachedWpns[i]` emits `base + index`.
- **Comma struct-copy for load order** (permuter-found, scrTraceCode 35ebf0):
  `(0, p[i].unionField).member` copies the whole operand word before extracting the member,
  reproducing retail's `lw`-then-`lh` order where plain `.member` access reorders the loads.
  A plain two-step temp (`str = base; str += off;`) is enough in simpler cases (CodeFunc_PushSTR).

When no order matches after trying these, `tools/permute_ast.py` can test the source forms;
it found every lever above.

## Return-block layout (boolean-result tails)

For functions ending `... result = 1; } else { result = 0; } return result;` (or early-return
equivalents), retail sometimes places the 0-materialization block AFTER the main body but BEFORE
the 1-materialization (`b L1 / L0: move v0,0; b end / L1: li v0,1`), while mwcc emits the
1-block first regardless of source shape. Treat this as a compiler wall when source rewrites do not
alter it.

## Commutative-`mul.s` (float, frequent wall)

The float analog of commutative-`addu`. For `fresh * invariant` — e.g. `(a - b) * scale` where
`scale` is a loop-invariant `div.s` result forced into a higher FPU reg (`$f2`) and the subtraction
lands in the lowest free reg (`$f0`) — mwcc canonicalizes to *invariant-first* (`mul.s $f0,$f2,$f0`)
while retail emits *fresh-first* (`mul.s $f0,$f0,$f2`). Neither `(a-b)*scale` nor `scale*(a-b)` in the
source changes it; the operand registers are fixed by allocation. Drop when only this remains
(gc_pose 250a30 — otherwise a full byte match).


## Register-field-only differences (mwcc copy-forwarding)

**The rule.** When the candidate and retail differ **only in register fields** - same opcodes, same
order, same delay slots, same non-relocated immediates - and the candidate materialises an
intermediate in a scratch register (`$v0`/`$v1`) while retail materialises it directly in the
register that will hold the result, **the source is not at fault.**

This is mwcc's *copy-forwarding* / register allocation, and it cascades: one decision about which
register is canonical for a copied value changes every later use of it. The source-text and pragma
lever spaces are exhausted for this class - only an allocator knob would reach it, and the 46
pragmas in the sweep are all *optimizer-pass* knobs (CSE, propagation, scheduling, peephole, class
allocation), not allocator knobs. **Treat it as a compiler wall.**

Diagnostic: classify every differing word field by field (opcode / rs / rt / rd / immediate). If all
differing words differ only in register fields, stop rewriting source.

### Measured instances

| function | candidate | retail |
|---|---|---|
| `mdlEffect FUN_00341f10` | `lui $v1` / `lq $v1,0($v1)` / `sq $v1,32($s2)` / `lw $a0,64($v0)` | `lui $v0` / `lq $v0,0($v0)` / `sq $v0,32($s2)` / `lw $a0,64($s2)` |
| `mdlEffect FUN_00345cf0` | twin of the above | |
| `rwcore FUN_00500f30` | `lw $v0,0x40($a0)` / `lw $v0,0xe0($v0)` | `lw $v1,0x40($a0)` / `lw $v0,0xe0($v1)` |
| `rwcore FUN_00500f40` | same, offset `0xe4` | |
| `rwcore FUN_00501128` | `lw $v0,0x40($a0)` / `addiu $a0,$v0,0x68` | `lw $a0,0x40($a0)` / `addiu $a0,$a0,0x68` |
| `rwcore FUN_00501150` | same | |
| `itfMesManager FUN_003ada00` | `andi $s2` / `move $s1,$zero` / `andi $s1` | `andi $s1` / `move $s2,$zero` / `andi $s2` |

For `FUN_00341f10` the mechanism was traced to a phase boundary: at `0x54` both builds make a copy
of the allocation result (`move s2,v0`). Retail keeps that *copy* canonical and reads the final
argument from it, which leaves `$v0` free to become the temp holding the global's address. This
build coalesces the final argument load back onto the *original* `$v0`, so `$v0` is pinned as the
aggregate base and the address temp is pushed to `$v1`. One canonicality decision, five differing
words.

For `FUN_00500f30` the same shape appears at minimum size: the candidate coalesces the
intermediate pointer into `$v0` (the return register) and reloads through it, retail keeps the
pointer in `$v1` and loads the result into `$v0`. For `FUN_00501128` retail materialises the
argument expression directly in `$a0`; the candidate computes it in `$v0` and then adds.

### Levers measured and rejected for this class

* the local's type (`u32`, `void *`, `u32 *`, `Qword128 *`, by-value) - all byte-identical or worse
* the copy's source and destination spellings
* the final call's argument spelling, and inlining the whole expression as the argument
* `register` and `volatile` on both the pointer and the original
* `#pragma optimization_level` 0-3
* the 46-pragma set (`no_branch_likely`, `schedule`, `opt_repositioncode`, `global_optimizer`,
  `cse_hard_reg_*`, `opt_propagation`, `memoryrewrite`, `reg_class_allocs`, `peephole`,
  `conditional_move`, `opt_foldconstants`, `opt_pulloutconstants`, ...)
* an explicit `lq`/`sq` asm block - byte-identical to the C union copy, so that shape is not a lever
* reversing the local declaration list, swapping adjacent declarations, `if/else` to ternary

### CAUTION: a byte match is not a semantic match

A shape permutation that changes what an expression *computes* can reach 0 differing words and look
like a MATCH while no longer matching retail's behaviour. Measured example: `FUN_0034E4C0` has a
"differing=1" variant that is `*(int *)((u8 *)iVar1 + 0x48)` - a **dereference** where retail passes
the **address**. It was rejected, not committed.

Any automated permuter must therefore check that the rewrite preserves semantics. The
`P3ShapeWorker` on the build box guards this three ways:

1. the function's **dereference count** (`*(` plus `->` plus `[...]`) must be unchanged;
2. the **type axis** may only change the *width* within the same signedness family - a byte match
   proves the width, but `u32` and `int` compile identically and compare differently;
3. the commit message carries the **unified diff** of the source change, so a human can review it.

## Stack frame size: the fingerprint of a wrong local layout

The first instruction of a mwcc-compiled function is

```c
    addiu $sp, $sp, -N
```

and `N` is the frame size, which is a function of the locals in the C source. **If our `N`
differs from retail's `N`, every `sp`-relative offset later in the function is wrong too.**
That is the real content of the two biggest populations in the remaining pool:

* the **"50-100% diff ratio"** population - 828 of the 1299 first-party NONMATCHING
  functions, where more than half the compiled body differs from retail; and
* the **"first difference at byte offset 0"** population - 350 functions whose very first
  instruction is already wrong.

`tools/frame_census.py` measures this directly: it compiles each TU once and compares the
frame immediate in our object against the frame immediate in retail.

Measured over the whole repository on 2026-10-20:

| | count |
|---|---|
| first-party NONMATCHING | 1299 |
| already the right frame size | 920 |
| **different frame size** | **326** |
| ... off by exactly +/-16 bytes | 186 |
| first difference at byte offset 0 | 350 (326 of them this case) |

A +/-16 byte delta is the signature of **one local whose declared width is wrong** - a
`u32` that should be a `u64`, an `f32` that should be an `f64`, a pointer that should be a
pointer to a wider type. 186 functions repo-wide have that signature; 74 of them are in
`src/rw`, `src/Main`, `src/Camp`, `src/Scene`, `src/Yajima`, `src/Kernel` and the top-level
`src/*.c` files.

**A wrong frame is a fingerprint, not a bug in its own right.** Forcing the frame to the
right size does not fix the function, because the individual locals are in the wrong
places, not merely the wrong total.  Measured on `btlEffect func_002c4e50` and
`btlMain btlMainInitStateCondition`: a local width change that made the frame match retail
exactly made the diff *worse* (73 -> 96 and 248 -> 249 respectively).  Padding locals do not
help either - mwcc removes an unused local entirely, so no `volatile`/array padding changes
the frame at all.

Levers measured and rejected for moving the frame by itself:

* adding a prototype parameter to the callee - the frame does not move (mwcc does not size
  the frame from the callee's prototype, and the o32 argument-save area is only reserved
  for a variadic call, which this is not);
* casting a call to a variadic prototype - no change;
* adding arguments to a call - no change (and it breaks the prototype check);
* `volatile` / array / `double` / `float` padding locals - all removed by the optimiser.

**How to use this.** When a function misses badly, run `tools/frame_census.py` and look up
the function.  A frame delta tells you the local *layout* is wrong, so the work is to
reconstruct the locals from retail's stack usage - not to keep permuting the source.  A
frame delta of zero with a large diff means the problem is elsewhere (code shape, or the
allocator - see above).

The cleanest worked example is `h_camp FUN_00136750`, which is 3 differing bytes from a
match: every byte of the body already agrees with retail, and the entire difference is
`addiu $sp,$sp,-0x40` versus `-0x50` (and the matching epilogue).  Retail reserved 16 bytes
that this build does not.  The saved-register set is identical, so the extra bytes are
reserved-but-unused, which is the o32 argument-save area - but the calls in this function
are not variadic, and every way of reserving those 16 bytes that was tried left the frame
unchanged.  (See the `W421` note in `src/Camp/h_camp.c`.)

## Deterministically classified compiler walls

Keep the best source and reducer evidence when the remaining mismatch is proven compiler behavior:

- `scrComu00360ed0`: Empty/default-zero CFG blocks collapse at `codegen_entry`; explicit zero stores
  change semantics and move farther from retail.
- `H_Cursor_UpdateTask`: Scope/reload variants trigger LICM, grow the body, and worsen the diff.
- `FUN_00251a80` (`bp_tuta.c`): Global and local selector forms produce identical semantic PCode
  and final object bytes.
- `bppPanelDrawParameterLayout`: Literal, pointer-local, and per-case dispatch forms are identical;
  an extern-object form changes codegen but gives the wrong GP-relative semantics.
- `scrStartScript2`: Enum-local, no-temporary, and typed-enum-field switch forms either remain
  semantic-PCode-identical or diverge at `codegen_entry`, but all produce the same final object hash.
  Retail's case-constant register preloads remain source-unreachable.
- `FUN_00172e50` (`datSocial.c`): After correcting the free-slot money store and unsigned cap assert,
  the range guard still differs. Retail uses `slti $v1` plus `bnez`; clean C lowers the same
  predicate through the `$at` pseudo with opposite branch polarity.

## Known compiler walls

Mark a function `NONMATCHING` when only these differences remain:

Register allocation; param-vs-local `s0/s1`; register-field-only differences (mwcc copy-forwarding - see
above); instruction scheduling / subexpression evaluation order;
FPU-register allocation; u16-mask propagation (retail re-masks per use, mwcc elides); switch
case-order; the `slti $at` branch-temp idiom; commutative-`addu` and commutative-`mul.s` operand
order; render/float-math update functions (`(*DAT_00960090)()` indirect draw calls, per-frame vector
transforms).

## Tooling notes and safety rules

- **A `verify.py` run that is not clean is a HARD STOP.** Never commit or push past it, whatever
  the change looks like. A block comment in a C file that contains a `*/` inside it will close
  early and turn the rest of the note into code; that happened once and 614 functions came back
  `COMPILE_ERROR` in a commit that had been pushed. **A comment is code.**
- **The marker comment name is not the C function name.** `MARKER_RE` is
  `^\s*//\s*(FUN_([0-9a-fA-F]{8}))`, so the comment is always address-based (`// FUN_001FC980`)
  while the C function may be `func_001fc980`. 1,576 of 14,055 markers across 129 files differ.
  `tools/verify.py` resolves the *definition* name for the object symbol, so any tool that locates
  a marker by function name silently skips those functions and then fails to untag them. Locate
  markers by **address** instead; `tools/verify.py --json` reports it in `addr`.
- **Source-shape permuting** is documented separately in [permuting.md](permuting.md): the
  cross-product permuter, the axes worth using, and the guards that keep a byte match from
  becoming a semantic mismatch.
