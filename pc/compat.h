/* PC compatibility shim: include this (via -include or pc_compat.h) before
 * the PS2 type.h on a PC build. Guarded so PS2 builds are unaffected. */
#ifndef PC_COMPAT_H
#define PC_COMPAT_H

#ifdef PC_BUILD
/* On 64-bit PC, size_t/pointer types are 64-bit; keep PS2 u32 for game data. */
#include <stddef.h>
#include <stdint.h>
/* Prevent type.h from redefining these. */
#define _PC_SIZE_T_DEFINED
#define _PC_INTPTR_DEFINED
#endif

#endif
/* end */