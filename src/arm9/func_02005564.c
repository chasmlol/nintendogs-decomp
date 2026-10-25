#include "ctx.h"

void func_02005564(u8 *p, u16 a, u16 b, u16 c, u32 d, u32 e)
{
    *(u32 *)(p + 0x20) = 4;
    *(u16 *)(p + 0x24) = a;
    *(u16 *)(p + 0x26) = b;
    *(u16 *)(p + 0x28) = c;
    *(u16 *)(p + 0x2a) = d;
    *(u16 *)(p + 0x2c) = e;
}
