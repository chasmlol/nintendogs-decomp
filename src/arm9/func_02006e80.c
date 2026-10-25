#include "ctx.h"

extern s16 data_02126868[];

s32 func_02006e80(s32 x)
{
    s32 q;
    s32 v;
    s64 p;
    if (x <= 0) {
        return 0;
    }
    if (x >= 4096) {
        return 4096;
    }
    q = (s32)(((u32)(x << 19)) >> 16) >> 4;
    v = data_02126868[q * 2 + 1];
    p = (s64)v * 2048 + 2048;
    return 2048 - (s32)(u32)(p >> 12);
}
