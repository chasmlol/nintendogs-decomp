#include "ctx.h"

extern u32 data_0215be48;

s32 func_02112bc0(s32 param_1, s32 param_2)
{
    u8 *p = (u8 *)(*(u32 *)&data_0215be48 + param_1 * 660);
    u8 *q = *(u8 **)(p + 0x1000 + 0xdf4);
    return ((s32)*(s16 *)(q + param_2 * 8 + 10) << 20) >> 20;
}
