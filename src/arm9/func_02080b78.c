#include "ctx.h"

u32 func_02080b78(u32 x)
{
    asm {
        loop:
        subs x, x, #4
        bhs loop
    }
    return x;
}
