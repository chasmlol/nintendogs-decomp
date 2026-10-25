#include "ctx.h"

BOOL func_02094f58(u8 *p)
{
    BOOL r;
    u32 b = *(u8 *)(p + 0x72);
    r = 0;
    if (b >= 5) {
        r = 1;
    }
    return r;
}
