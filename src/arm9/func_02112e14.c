#include "ctx.h"

extern u32 data_0215be48;

u32 func_02112e14(s32 i)
{
    u8 *r = *(u8 **)&data_0215be48 + i * 660;
    u8 *q = r + 0x1000;
    return *(u32 *)(q + 0xe04);
}
