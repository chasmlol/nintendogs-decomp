#include "ctx.h"

extern u8 *data_0215be48;

u32 func_02112e34(s32 param_1)
{
    u8 *q = data_0215be48 + param_1 * 660;
    u8 *r = q + 0x1000;
    return *(vu32 *)(r + 0xdf8);
}
