#include "ctx.h"

s32 func_02069be4(void)
{
    s32 v = (s32)(*(u16 *)0x0400100a & 0x3c) >> 2;
    return (v << 14) + 0x6200000;
}
