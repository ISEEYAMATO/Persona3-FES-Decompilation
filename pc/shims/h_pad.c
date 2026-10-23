/* h_pad shim host implementation (stub). */
#include "h_pad.h"

void h_pad_init(void)  { /* TODO: SDL_Init(SDL_INIT_GAMECONTROLLER) */ }
void h_pad_update(void) { /* TODO: poll SDL events */ }
int  h_pad_button(int pad, int button) { (void)pad; (void)button; return 0; }
int  h_pad_axis(int pad, int axis)     { (void)pad; (void)axis;     return 0; }
/* end */