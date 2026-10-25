#include "ctx.h"

u32 func_020805c0(void)
{
    u32 m;
    u32 r;
    asm {
        mrc p15, 0, r, c9, c1, 0
        ldr m, =0xfffff000
    }
    return r & m;
}
