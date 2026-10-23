/* h_pad shim — host (SDL2) implementation of the PS2 pad interface.
 * Signatures mirror include/h_pad.h; game code is unchanged. */
#ifndef PC_H_PAD_H
#define PC_H_PAD_H

#ifdef __cplusplus
extern "C" {
#endif

void h_pad_init(void);
void h_pad_update(void);
int  h_pad_button(int pad, int button);
int  h_pad_axis(int pad, int axis);

#ifdef __cplusplus
}
#endif

#endif