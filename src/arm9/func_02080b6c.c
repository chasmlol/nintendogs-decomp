#include "ctx.h"

u32 func_02080b6c(void)
{
    u32 z = 0;
    asm { mcr p15, 0, z, c7, c0, 4 }
    return z;
}
