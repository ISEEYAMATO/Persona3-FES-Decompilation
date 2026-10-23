/* Host (PC) shims for the PS2 h_* interfaces. Stubs only; implement per
 * docs/pc-port-overview.md Phase 4. */
#ifndef PC_SHIMS_H
#define PC_SHIMS_H

#ifdef __cplusplus
extern "C" {
#endif

/* h_pad */
void h_pad_init(void); void h_pad_update(void);
int  h_pad_button(int pad, int button); int h_pad_axis(int pad, int axis);

/* h_snd */
void h_snd_init(void); void h_snd_update(void);
int  h_snd_play(int id); void h_snd_stop(int id);

/* h_cdvd */
void h_cdvd_init(void); int h_cdvd_read(void* dst, int lba, int sectors);

/* h_memcard (Phase 6) */
void h_memcard_init(void); int h_memcard_read(int slot, void* buf, int size);
int  h_memcard_write(int slot, const void* buf, int size);

/* h_fade */
void h_fade_init(void); void h_fade_set(int level); int h_fade_get(void);

/* h_cursor */
void h_cursor_init(void); void h_cursor_set(int shape);

/* h_dbprt */
void h_dbprt_init(void); void h_dbprt_log(const char* fmt, ...);

/* h_sfdply */
void h_sfdply_init(void); int h_sfdply_open(const char* path);
void h_sfdply_close(int handle); int h_sfdply_decode(int handle, void* dst);

/* h_chrdsp */
void h_chrdsp_init(void); void h_chrdsp_draw(const char* text, int x, int y);

/* libc_core / libm: rely on host libc; no shims needed. */

#ifdef __cplusplus
}
#endif

#endif
/* end */