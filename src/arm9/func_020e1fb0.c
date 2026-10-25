#include "ctx.h"

extern u32 data_0215aea4;

s32 func_020e1fb0(s32 i)
{
    u8 *base = *(u8 **)&data_0215aea4;
    return *(s32 *)(base + i * 24 + 0xa8) + 4;
}
