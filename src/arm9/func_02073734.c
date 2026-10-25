#include "ctx.h"

u32 func_02073734(u16 *p)
{
    u32 r;
    if ((p[1] & 1) != 0) {
        r = *(u32 *)(p + 2) + (u32)p[0] * 16;
    } else {
        r = *(u32 *)(p + 2) + (u32)p[0] * 8;
    }
    return r;
}
