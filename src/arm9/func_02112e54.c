#include "ctx.h"

extern u32 data_0215be48;

u32 func_02112e54(s32 i)
{
    u8 *q = (u8 *)data_0215be48 + i * 660;
    q = q + 0x1000;
    return *(u32 *)(q + 0xdf4);
}
