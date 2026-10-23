/* Host shim stubs. Replace with real SDL2/standard implementations per Phase 4. */
#include "shims.h"
#include <stdio.h>

void h_snd_init(void) {}
void h_snd_update(void) {}
int  h_snd_play(int id) { (void)id; return 0; }
void h_snd_stop(int id) { (void)id; }

void h_cdvd_init(void) {}
int  h_cdvd_read(void* dst, int lba, int sectors) { (void)dst;(void)lba;(void)sectors; return 0; }

void h_memcard_init(void) {}
int  h_memcard_read(int slot, void* buf, int size) { (void)slot;(void)buf;(void)size; return 0; }
int  h_memcard_write(int slot, const void* buf, int size) { (void)slot;(void)buf;(void)size; return 0; }

void h_fade_init(void) {}
void h_fade_set(int level) { (void)level; }
int  h_fade_get(void) { return 0; }

void h_cursor_init(void) {}
void h_cursor_set(int shape) { (void)shape; }

void h_dbprt_init(void) {}
void h_dbprt_log(const char* fmt, ...) { (void)fmt; }

void h_sfdply_init(void) {}
int  h_sfdply_open(const char* path) { (void)path; return -1; }
void h_sfdply_close(int handle) { (void)handle; }
int  h_sfdply_decode(int handle, void* dst) { (void)handle;(void)dst; return 0; }

void h_chrdsp_init(void) {}
void h_chrdsp_draw(const char* text, int x, int y) { (void)text;(void)x;(void)y; }
/* end */