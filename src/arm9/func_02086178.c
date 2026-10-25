#include "ctx.h"
s32 func_02086178(u32 a, s32 b, ...)
{
    u32 k = ((u32)*(u16 *)&a << 16) >> 30;
    if (k == 1) {
        return (b + 1) / 2;
    }
    if (k != 2) {
        b = 0;
    }
    return b;
}
