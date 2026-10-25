#include "ctx.h"

u32 func_020805e4(void)
{
    u32 r;
    asm { mrc p15, 0, r, c1, c0, 0 }
    r = r & ~1u;
    asm { mcr p15, 0, r, c1, c0, 0 }
    return r;
}
