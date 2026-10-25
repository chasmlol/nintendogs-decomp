#include "ctx.h"

u32 func_0207ce9c(u8 *p, u8 *q)
{
    u32 r;
    if (q == NULL) {
        r = *(u32 *)(p + 4);
    } else {
        r = *(u32 *)(q + *(u16 *)(p + 10));
    }
    return r;
}
