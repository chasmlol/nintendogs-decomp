#include "ctx.h"

s32 func_02028014(u8 *p, s32 b)
{
    u8 *base = *(u8 **)(p + 0x9e8);
    s32 idx = (s32)((u32)(b + 5) << 16) >> 15;
    return (s16)*(s16 *)(base + idx + 0x50);
}
