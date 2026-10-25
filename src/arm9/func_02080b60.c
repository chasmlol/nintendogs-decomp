#include "ctx.h"
u32 func_02080b60(void) { u32 r; asm { mrs r, cpsr } return r & 0x1f; }
