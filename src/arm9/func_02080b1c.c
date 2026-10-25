#include "ctx.h"

u32 func_02080b1c(u32 mask)
{
    u32 t;
    u32 old;
    asm { mrs old, cpsr }
    asm { bic t, old, #128 }
    asm { orr t, t, mask }
    asm { msr CPSR_c, t }
    return old & 128;
}
