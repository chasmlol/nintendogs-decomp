#include "ctx.h"

void func_02038128(void *p, u16 v)
{
    u8 *q = (u8 *)p + 0x100;
    *(u16 *)(q + 0x48) = v + 0x11;
}
