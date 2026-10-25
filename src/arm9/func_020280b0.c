#include "ctx.h"

u8 func_020280b0(u8 *p, u32 i)
{
    u8 *q = *(u8 **)(p + 0x9e8);
    q += i;
    return q[0x10];
}
