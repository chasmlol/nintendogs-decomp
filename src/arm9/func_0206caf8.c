#include "ctx.h"
u32 func_0206caf8(u32 v, vu32 *p) { u32 old; asm { swp old, v, [p] } return old; }
