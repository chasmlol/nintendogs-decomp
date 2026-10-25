#include "ctx.h"

extern u32 data_0214204c[];

s32 func_0209dd38(s32 param_1, s32 param_2, s32 param_3)
{
    s32 hi = 32767;
    u8 *e = (u8 *)(data_0214204c[param_1] + 8);
    s32 v;
    e = e + (param_2 << 3);
    v = *(s16 *)(e + 4) + (param_3 >> *(s8 *)(e + 1));
    if (v > hi) v = hi;
    else if (v < -32768) v = -32768;
    return v;
}
