#include "ctx.h"

u32 func_02087e24(u32 *param_1, s32 param_2, s32 param_3)
{
    if (param_3 == 0) {
        goto b0;
    }
    if (param_3 == 1) {
        goto b1;
    }
    if (param_3 != 2) {
        goto ret0;
    }
    goto b2;
b0:
    param_2 = param_2 + (s32)param_1[8];
    goto clamp;
b1:
    param_2 = param_2 + (s32)param_1[10];
    goto clamp;
b2:
    param_2 = param_2 + (s32)param_1[9];
    goto clamp;
ret0:
    return 0;
clamp:
    if (param_2 < (s32)param_1[8]) {
        param_2 = (s32)param_1[8];
    }
    if (param_2 > (s32)param_1[9]) {
        param_2 = (s32)param_1[9];
    }
    param_1[10] = (u32)param_2;
    return 1;
}
