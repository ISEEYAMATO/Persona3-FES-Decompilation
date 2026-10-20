# Source-shape permuting

*Companion to [matching.md](matching.md). That file is the catalogue of matching
heuristics; this one covers the **shape** of the C source, which is a separate
axis from branch polarity, types and addressing.*

## Why shape matters

A function can have the *exact* right instruction sequence and still miss, because
mwcc's register allocator chose a different callee-saved register for one of two
interchangeable locals. The compiled shape is right; only the **colouring** is wrong.

Canonical example — `itfMesManager.c FUN_003ada00` (`0x003ada00`):

```
  44   ffff4224  addiu $v0, $v0, -1
! 48   ff005230  andi $s2, $v0, 0xff     ours:   bVar1 in $s2
       ff005130  andi $s1, $v0, 0xff     retail: bVar1 in $s1
  ...
! 68   2d880000  move $s1, $zero         ours:   bVar7 in $s1
       2d900000  move $s2, $zero         retail: bVar7 in $s2
! 84   ff005130  andi $s1, $v0, 0xff     ours:   bVar7 in $s1
       ff005230  andi $s2, $v0, 0xff     retail: bVar7 in $s2
```

Five differing bytes, one instruction shape, one swapped pair of saved registers.

## The permuter

`C:\Users\asiva\p3perm.py` (on the DUMMYDUMB build box) takes a JSON spec describing
*axes* of mutually-exclusive source rewrites and compiles every combination of the
cross product, reporting the differing-word count for each. The first combination that
reaches 0 differing words wins.

```json
{
  "file": "src/itfMesManager.c",
  "fn":   "FUN_003ada00",
  "axes": [
    {"label": "bVar7 shape", "variants": [
       {"name": "if/else", "find": "<old text>", "replace": "<old text>"},
       {"name": "ternary", "find": "<old text>", "replace": "<new text>"}
    ]}
  ]
}
```

Each axis is a list of rewrites; the tool tries the full cross product. The winning
source is written to `C:\Users\asiva\_perm_hit.txt`.

### Rewrites worth putting on an axis

These are all semantics-preserving:

| rewrite | why it moves the allocator |
|---|---|
| swap adjacent local declarations | mwcc's local symbol-table order drives the `$s0/$s1/...` colouring |
| reverse the whole declaration list | same, from the other direction |
| add `register` to a local | changes the class/priority mwcc gives the local |
| add/remove `volatile` on a local | forces a distinct lifetime, changing the priority |
| `#pragma optimization_level N` (1..4) at file scope | changes the whole TU's codegen pipeline |
| change a local's type (`int`/`u32`/`u64`/`float`/…) | a width change is visible in the retail bytes, so a byte-exact hit confirms the type |

A **type** change is the highest-yield axis when the diff is a load width: retail
`lwc1 $f0, 8($v0)` versus ours `ld $v0, 8($v0)` means retail's local is a 32-bit
float and ours is 64-bit. If a type change makes the bytes match retail exactly, the
width and signedness are by construction right, because the retail instruction encodes
them.

### What does *not* work (measured, `FUN_003ada00`)

- declaration order (all five permutations of `{bVar1, bVar6, bVar7}`): no change
- `register` on either local: no change
- `if/else` → ternary: no change (keeps the shape, does not flip the colouring)
- statement reordering: **worse** (nd 5 → 9) — it moves the loads
- `bVar7` typed `u8` instead of `int`: **worse** (nd 5 → 41, object 256 → 260)
- `optimization_level` 1/2/3/4: no change

Conclusion: when the *whole* residual is one swapped saved register, the tie-break is
usually not reachable from the C source. Reach for it only when the rest of the diff
is empty, and record it as a wall when it does not fall.

## Automating it

`C:\Users\asiva\p3worker3.py` runs the permuter unattended over every candidate
function in a slice, on the DUMMYDUMB box, as scheduled task `P3ShapeWorker`.

Acceptance rule, identical to the pragma worker:

1. the function reaches **0 differing words**, and
2. **no other function in the same translation unit regresses**, and
3. `tools/verify.py` re-run on the file reports `MATCH` for the untagged function.

It then untags the marker, re-verifies, and commits with
`git commit --only -- <path>` so it can never pick up another agent's staged work.

The pragma worker (`p3worker.py`, task `P3DecompWorker`) complements it: pragmas are a
different axis and were worth **8** matches repo-wide, but produced **0** hits across
20 files in the `src/rw` + `src/Main` + `src/Camp` slice. Shape is the live lever.

## GOTCHA: the marker comment name is not the function name

```c
MARKER_RE = re.compile(r"^\s*//\s*(FUN_([0-9a-fA-F]{8}))")
```

The marker comment is **always** address-based — `// FUN_001FC980` — but the C function
may be called something else entirely (`func_001fc980`). **1,576 of 14,055 markers,
across 129 files, differ.**

`tools/verify.py` resolves the *definition* name for the object symbol, so a tool that
finds a marker by function name silently skips those functions and then fails to untag
them. Locate markers by **address**:

```python
pat = re.compile(r"^\s*//\s*FUN_%s\b" % re.escape(addr.upper()))
```

`tools/verify.py --json` gives the address in the `addr` field (lowercase hex, 8 digits)
and the marker line in `line`.

## Reading the diff

`normalized_diff` in `tools/verify.py` counts differing **bytes**, not instructions.
nd = 8 means eight bytes, i.e. two instructions. `p3diff.py` prints the full
side-by-side disassembly; `p3try.py` re-compiles a candidate source text and reports
the new diff without touching the file on disk.
