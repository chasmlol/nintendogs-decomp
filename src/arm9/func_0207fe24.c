#include "ctx.h"

u32 func_0207fe24(u8 *p)
{
    u8 *n = *(u8 **)(p + 0x7c);
    u8 *m = *(u8 **)(n + 0x10);
    if (m == NULL) {
        *(u32 *)(p + 0x80) = 0;
    } else {
        *(u32 *)(m + 0xc) = 0;
    }
    *(u8 **)(p + 0x7c) = m;
    return (u32)n;
}
