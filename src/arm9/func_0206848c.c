#include "ctx.h"

u32 func_0206848c(s32 param_1)
{
    vu16 *reg = (vu16 *)0x04000004;
    u32 old = *reg & 8;
    if (param_1 != 0) {
        *reg = *reg | 8;
    } else {
        *reg = *reg & ~8;
    }
    return old;
}
