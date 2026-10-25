#include "ctx.h"
extern u32 data_0215be48;

void func_02112dc4(s32 a, s32 b, u32 c)
{
    u8 *q = (u8 *)(a * 660 + data_0215be48) + 0x1000;
    u8 *e = *(u8 **)(q + 0xdf4);
    *(u32 *)(e + b * 8 + 0xc) = c;
}
