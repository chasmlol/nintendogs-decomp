#include "ctx.h"

extern u8 *data_0215aea4[];

BOOL func_020dddb0(u32 param_1, s32 param_2)
{
    BOOL r = FALSE;
    u8 *o;
    u8 *e;
    if (param_1 > 2) {
        param_1 = 0;
    }
    o = data_0215aea4[param_1];
    e = o + 148 + param_2 * 24;
    if (*(s32 *)(o + 0x8c) != -5) {
        r = *(s32 *)(e + 0x10) > 27648;
    }
    return r;
}
