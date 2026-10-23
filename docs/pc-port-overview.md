# PC port — phases 4–7 plan

Date: 2026-10-23

## Phase 4 — Middleware shims (`pc/shims/`)

Each shim implements the existing `h_*` interface used by game code, backed by SDL2
(or standard C) on the host. Game code must not change; only the implementation swaps.

| shim | replaces | host backend | status |
|---|---|---|---|
| `h_pad` | `src/h_pad.c` | SDL2 gamepad + keyboard | stub |
| `h_snd` | `src/h_snd.c` | SDL2 audio (or miniaudio) | stub |
| `h_cdvd` | `src/h_cdvd.c` | host filesystem (ISO extraction) | stub |
| `h_memcard` | `src/Kernel/h_memcard.c` | host file-backed save slots (Phase 6) | stub |
| `h_fade` | `src/h_fade.c` | software fade over SDL renderer | stub |
| `h_cursor` | `src/h_cursor.c` | SDL cursor | stub |
| `h_dbprt` | `src/h_dbprt.c` | stdout/file logging | stub |
| `h_sfdply` | `src/h_sfdply.c` | SFD video via ffmpeg/libmpeg2 | stub |
| `h_chrdsp` | (char display) | SDL text rendering | stub |
| `libc_core`/`libm` | `src/libc_core.c`, `src/lib/sce/libm/*` | host libc/libm (no-op shims) | stub |

Implementation rule: keep the exact function signatures from `include/`. Add `#ifdef PC_BUILD`
guards so the PS2 path is untouched (never edit MATCH-marked functions).

## Phase 5 — Asset pipeline

Required extractors/converters (documented, not implemented here):

- Models (MDL/PMD): extract from the ISO; convert to a host-friendly format
  (glTF or keep RenderWare chunks and load via a RW-compatible runtime).
- Textures (TM2/TIM2 → PNG/DDS).
- Animations (ANM/PAK): extract keyframes; either play via RW anim or convert.
- Script bytecode (`.bf`): copy verbatim; interpreter is pure C (portable).
- Message archives: extract text; encoding (Shift-JIS) → UTF-8.
- PM packages: unpack.
- ADX audio: decode to WAV/OGG (adx2wav / vgmstream).
- SFD movies: demux to a playable container (ffmpeg).

Tooling lives under `tools/asset_pipeline/` (to be created). Each converter is a
standalone script with a documented CLI.

## Phase 6 — Save system

`h_memcard` host backend: serialize the PS2 save struct to a versioned binary file
under `%APPDATA%/Persona3FES/saves/slotN.sav`. Include a migration/version field and
a checksum. Keep the PS2 memory-card layout as the on-disk format for round-trip
compatibility with PCSX2 saves (optional).

## Phase 7 — Packaging

- Build: CMake + clang/MSVC producing `persona3fes.exe`.
- Bundle: exe + SDL2.dll + asset data directory + README.
- Installer: NSIS or Inno Setup script under `packaging/`.
- Output: `Persona3FES-<version>-win64-setup.exe`.

## Ordering / gates

Each phase lands as its own commit series. Phase 4 shims are the critical path for
a runnable build; Phases 5–7 can proceed in parallel once the shims compile.

## Context note

The PS2 `make` is not currently byte-identical in this environment (see
`docs/build-status.md`); the PC port proceeds against the verified C source and
`tools/verify.py` remains the matching gate.
