#include "ctx.h"

extern u32 data_0215aea4;

s32 func_020e1f90(s32 i)
{
    u8 *q = *(u8 **)&data_0215aea4;
    return *(s32 *)(q + i * 24 + 0xa8) + 100;
}
