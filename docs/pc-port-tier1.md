# Phase 2 — Tier 1 build portability (inventory)

Date: 2026-10-23

Goal: compile the matched C under a PC toolchain (MSVC/clang) and identify every
PS2-specific construct that needs abstraction.

## Volume

- 14,055 functions across ~350 C files in `src/`.
- All match bytes today (verify.py green), so the C is the source of truth.

## PS2-specific constructs found

### `#pragma` (10,861 total)
| pragma | count | PC action |
|---|---|---|
| `alias` | 6,432 | drop (MWCC symbol aliasing); replace with normal declarations or `#define` |
| `schedule` | 853 | drop (MWCC MIPS scheduling hint) |
| `opt_loop_invariants` | 717 | drop |
| `optimization_level` | 700 | drop |
| `push`/`pop` | 467 each | drop (MWCC option scoping) |
| `opt_lifetimes` | 359 | drop |
| `opt_propagation` | 287 | drop |
| `opt_common_subs` | 248 | drop |
| `opt_dead_assignments` | 130 | drop |
| `tailcall` | 94 | drop (MWCC tail-call control) |
| `opt_rebuildconditionals` | 64 | drop |
| `no_branch_likely` | 18 | drop |
| `opt_strength_reduction` | 4 | drop |
| `intrinsic` | 3 | replace with PC intrinsic or helper |
| `opt_cse` | 1 | drop |

All `opt_*`/`schedule`/`push`/`pop`/`tailcall`/`no_branch_likely` pragmas are
MWCC-only and can be stripped by a preprocessor pass (`#define` to nothing) on PC.

### `asm` blocks (6,402 `asm ` occurrences)
Two shapes:
1. **`asm` function definitions** — `asm ReturnType Name(...) { .set noreorder; .word ... }`
   (the transcribed functions). These are raw MIPS and cannot compile on PC as-is.
   They must be replaced by host reimplementations or by calling the original logic.
2. **inline `asm` statements** inside otherwise-C functions (241 `__asm`).
   Need per-site review; most are register/CP0/TLB ops in `lib/` and `sce/`.

### Intrinsics / attributes
- `__builtin` (6) — likely `__builtin_expect`-style; replace with standard.
- `__attribute__` (47) — section/alias attributes; map to `__attribute__` on clang,
  `__declspec` on MSVC.
- `register` (127) — register hints; drop on PC.
- `volatile` (849) — keep, but review for MMIO/CP0.

### Vendor / SDK headers
- `include/` pulls RenderWare (rwcore, rpworld, rt2d, rtanim, rwplcore, rprandom, rpusrdat, rtquat),
  Sony (libcdvd, libmc2, libcdvd, sifrpc, loadfile, iopheap, libgcc),
  CRI (cri_adx, uty_tmr, cri adx).
- All of these are PS2-only and need shims (Phase 4).

## Recommended Tier 1 approach

1. Define a `PC_BUILD` macro.
2. Preprocess-out MWCC pragmas via a header (`include/pc_compat.h`) that `#define`s
   each `#pragma ...`-triggering token to nothing, OR run a small filter in the build.
3. For `asm` functions: keep them guarded by `#ifndef PC_BUILD` and provide PC
   implementations in parallel `*_pc.c` files or behind `#else`.
4. Compile with clang (MinGW or MSVC) to surface remaining errors; iterate.

## Tooling

- No PC toolchain is installed in this environment (only mwccps2 + mips binutils).
  Phase 2 build verification must happen on a host with MSVC/clang; this repo documents
  the inventory only until then.
- `make` (PS2) remains the byte-identity gate; PC builds are a separate target.
