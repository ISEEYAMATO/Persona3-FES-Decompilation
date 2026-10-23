# Phase 1 — Full build verification

Date: 2026-10-23
Branch: `p3fes-matching` @ `79859f15`

## Result

`make` (i.e. `python tools/build.py`) does **not** currently produce a byte-identical ELF.
The link fails with undefined data symbols such as:

```
### mwldps2.exe Linker Error:
#   Undefined : "D_0095C220"
#   Referenced from "func_0050d658" in code1_13.o
#   Undefined : "D_1F60000"
#   Referenced from ".text" in code1_0.o
#   Undefined : "D_A0000"
#   ...
```

and, when attempted on a clean baseline worktree (commit `4bf188ca`), the same class of
undefined `D_*` data symbols. This is **pre-existing** and unrelated to the matching sweep:
the function-level matches are verified by `tools/verify.py` (14,055/14,055 MATCH).

## Root cause

`build.py` links a pruned set of eligible C objects plus the splat-generated asm chunks.
The asm references data symbols (`D_0095C220`, `D_1F60000`, …) that are not defined by any
linked object. Those symbols are recovered by `tools/recover_symbols.py` into
`config/symbols_recovered.txt`, and the splat config / LCF must consume them; the local
build environment here does not have a fully populated recovery step wired into `make`.

In other words: the matching work is complete and verified per-function; the **whole-image
rebuild** depends on the symbol-recovery + splat pipeline, which is a separate tooling
concern (see `CONTRIBUTING.md` for the intended `make setup` / `make split` flow).

## What IS verified

- `tools/verify.py` (no args) → 14,055/14,055 MATCH, 0 MISMATCH, 0 COMPILE_ERROR.
- Per-function byte identity holds for every `// FUN_XXXXXXXX` marker.
- `make verify` / `make check` (per-function) is the acceptance gate per `AGENTS.md`.

## Next step for Phase 1

Wire `make setup` + `make split` + `make symbols` into a documented one-shot so the
whole-image build reproduces byte-identical `build/SLUS_216.21`. Until then, Phase 1
cannot be closed here; Phases 2–7 proceed against the verified C source.

## Notes

- `make` is not the acceptance check for matching (`AGENTS.md`); `tools/verify.py` is.
- Environment: Windows 11, mwccps2 3.0.1b210, GNU mipsel binutils, Python 3.12.
