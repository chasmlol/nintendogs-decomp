#include "ctx.h"

u32 func_020708d0(u32 *p)
{
    u8 *q = (u8 *)p[0];
    u32 r;
    if (q == NULL) {
        return 0xffffffff;
    }
    r = *(u16 *)(q + 0x34);
    if (r != 1) {
        return 0xffffffff;
    }
    return *(u16 *)(q + 0x38);
}
