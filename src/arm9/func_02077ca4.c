#include "ctx.h"

extern s8 data_0212ab4c[];

s32 func_02077ca4(u8 *param_1)
{
    s32 v = data_0212ab4c[param_1[0]];
    if (v < 0) {
        return -1;
    }
    if (v != 0) {
        goto ret_v;
    }
    if (param_1[0] == 9) {
        v = (param_1[2] + 1) * 3;
        return v;
    }
    return -1;
ret_v:
    return v;
}
