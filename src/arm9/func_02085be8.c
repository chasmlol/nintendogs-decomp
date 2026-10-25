#include "ctx.h"

s32 func_02085be8(s32 param_1, s32 param_2, ...)
{
    u32 uv;
    s32 r;
    u16 h = *(u16 *)&param_1;
    s16 sv = *(s16 *)&param_1;
    r = ((s32)sv << 20) >> 20;
    uv = ((u32)h << 18) >> 30;
    if (uv != 1) {
        if (uv == 2) {
            r = r - param_2;
        }
        return r;
    }
    return r - (param_2 + 1) / 2;
}
