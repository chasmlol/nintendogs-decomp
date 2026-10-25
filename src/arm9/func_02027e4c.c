#include "ctx.h"

s32 func_02027e4c(u8 *p, s32 n)
{
    s32 t = ((s32)(n + 14) << 16) >> 15;
    u8 *q = *(u8 **)(p + 0x9e8);
    return *(s16 *)(q + t + 24);
}
