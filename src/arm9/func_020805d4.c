#include "ctx.h"

u32 func_020805d4(void)
{
    u32 r;
    asm { mrc p15, 0, r, c1, c0, 0 }
    r |= 1;
    asm { mcr p15, 0, r, c1, c0, 0 }
    return r;
}
