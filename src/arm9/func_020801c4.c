#include "ctx.h"

void func_020801c4(u32 i, u32 v)
{
    u8 *q = (u8 *)(0x2700000 + (i << 2));
    *(u32 *)(q + 0xFF000 + 0xdc4) = v;
}
