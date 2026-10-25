#include "ctx.h"

extern u32 data_0215be48;

void func_0210a2a0(u16 param_1)
{
    u8 *obj = (u8 *)data_0215be48;
    u8 *q = obj + 0xc4;
    if (*(u32 *)(obj + 0xb8) == 2) {
        *(u16 *)(q + 0x334 - 0xc4) = 1;
        *(u16 *)(q + 0x336 - 0xc4) = param_1;
    }
}
