#include "ctx.h"

u32 func_02080b34(void)
{
    u32 t;
    u32 r;
    asm {
        mrs r, cpsr
        orr t, r, #192
        msr cpsr_c, t
    }
    return r & 192;
}
