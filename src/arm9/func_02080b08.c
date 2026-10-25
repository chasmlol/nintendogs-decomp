#include "ctx.h"

u32 func_02080b08(void)
{
    u32 nw;
    u32 old;
    asm {
        mrs old, cpsr
        orr nw, old, #128
        msr CPSR_c, nw
    }
    return old & 128;
}
