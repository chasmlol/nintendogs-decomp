#include "ctx.h"

u32 func_02070888(u8 **p)
{
    u8 *q = *p;
    u32 r;
    if (q == NULL) {
        return 0xffffffff;
    }
    if (*(u16 *)(q + 0x34) != 2) {
        r = 0xffffffff;
    } else {
        r = *(u16 *)(q + 0x3a);
    }
    return r;
}
