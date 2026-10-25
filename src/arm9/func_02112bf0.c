#include "ctx.h"

extern u32 data_0215be48;

s32 func_02112bf0(s32 a, s32 b)
{
    u8 *q = (u8 *)(a * 660 + data_0215be48) + 0x1000;
    u8 *e = *(u8 **)(q + 0xdf4);
    return ((s32)*(s16 *)(e + b * 8 + 8) << 20) >> 20;
}
