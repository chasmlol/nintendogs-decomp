#include "ctx.h"

u16 func_0207d294(void *p, u16 v)
{
    u8 *q = (u8 *)p + 0x24;
    u16 old = *(u16 *)(q + 0x10);
    *(u16 *)(q + 0x10) = v;
    return old;
}
