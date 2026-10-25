#include "ctx.h"

void func_020d1cd8(u8 *p)
{
    u8 *q = p + 0x60;
    *(u32 *)(q + 8) = 0;
    *(u32 *)q = 0x4b0;
}
