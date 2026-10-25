#include "ctx.h"

extern u8 *data_0215be48;

void func_02112798(u32 a, u32 b, u32 c)
{
    u8 *q = data_0215be48 + (a << 11) + (b << 4) + 0x2000;
    *(u32 *)(q + 0x83c) = c;
}
