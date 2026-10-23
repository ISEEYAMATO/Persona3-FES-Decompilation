# PC port scaffold

This directory holds the host-platform (Windows) build of the decompilation.

Layout:
- `shims/` — one implementation per `h_*` interface, backed by SDL2/standard C.
- `CMakeLists.txt` — builds `persona3fes.exe` from the matched C + shims.

Status: scaffold only; shims are stubs. See docs/pc-port-overview.md.
