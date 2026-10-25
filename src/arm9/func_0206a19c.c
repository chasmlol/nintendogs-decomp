#include "ctx.h"

u32 func_0206a19c(u32 *param_1)
{
    vu32 *reg = (vu32 *)0x04000600;
    if (*reg & 0x4000) {
        return -1;
    }
    *param_1 = (*reg & 0x2000) >> 13;
    return 0;
}
