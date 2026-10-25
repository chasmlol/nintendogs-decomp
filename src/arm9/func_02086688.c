#include "ctx.h"
s32 func_02086688(s32 param_1, s32 param_2)
{
    u32 x;
    u32 t;
    s32 iv;
    s32 r;
    x = *(u16 *)&param_1;
    iv = ((s32)*(s16 *)&param_1 << 20) >> 20;
    t = (x << 18) >> 30;
    if (t == 1) {
        goto one;
    }
    if (t == 2) {
        iv = iv - param_2;
    }
    return iv;
one:
    r = param_2 + 1;
    r += (u32)r >> 31;
    return iv - (r >> 1);
}
