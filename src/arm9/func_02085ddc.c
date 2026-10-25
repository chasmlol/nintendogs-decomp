#include "ctx.h"

extern u16 func_02085e20(s32 a);

s32 func_02085ddc(s32 param_1, s32 param_2)
{
    u16 uVar1;
    s32 base;
    base = param_1 + 8;
    if (param_2 < 0) {
        goto zero;
    }
    uVar1 = func_02085e20(param_1);
    if (param_2 < (s32)uVar1) {
        goto ret;
    }
zero:
    return 0;
ret:
    return param_2 * 6 + base;
}
