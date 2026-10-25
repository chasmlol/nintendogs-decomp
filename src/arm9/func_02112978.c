#include "ctx.h"

extern u8 *data_0215be48;

void func_02112978(s32 a, s32 b, u16 c, u16 d)
{
    u8 *q = data_0215be48 + 0x283c;
    q = q + (a << 11);
    q = q + (b << 4);
    *(u16 *)(q + 6) = c;
    *(u16 *)(q + 8) = d;
}
