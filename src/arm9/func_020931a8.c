#include "ctx.h"

extern u32 data_02159034;

u32 func_020931a8(s16 i)
{
    u8 *q = (u8 *)data_02159034 + i * 24;
    q = q + 0x1000;
    return *(u32 *)(q + 0x4f4) + 4;
}
