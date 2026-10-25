#include "ctx.h"

void func_020cf9c8(u8 *p, u32 a, u16 b, u32 c)
{
    *(u32 *)(p + 0x30) = a;
    *(u16 *)(p + 0x3c) = b;
    *(u32 *)(p + 0x44) = c;
}
