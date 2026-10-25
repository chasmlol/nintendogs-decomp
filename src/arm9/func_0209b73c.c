#include "ctx.h"

s32 func_0209b73c(s32 param_1)
{
    if (param_1 == 0) goto zero;
    param_1 = -(*(s32 *)param_1 >> 10);
    if (param_1 < -128) {
        return -128;
    }
    if (param_1 > 127) {
        param_1 = 127;
    }
    return param_1;
zero:
    return 0;
}
