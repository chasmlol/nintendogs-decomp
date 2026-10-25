#include "ctx.h"

extern u32 data_02159034;

void func_02093dd4(u16 param_1)
{
    u32 b = data_02159034;
    u8 *q = (u8 *)(b + 0x1000);
    u8 *e = *(u8 **)(q + 0x41c);
    *(u16 *)(e + 126) = param_1;
    *(u16 *)(e + 0x6ae) |= 1;
}
