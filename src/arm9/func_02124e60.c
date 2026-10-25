#include "ctx.h"

u32 func_02124e60(s32 *param_1, s32 param_2)
{
    u32 b = 0;
    if (param_2 == 0) {
        goto m0;
    }
    if (param_2 == 1) {
        goto m1;
    }
    if (param_2 == 2) {
        param_1[3] = 2;
        b = 1;
    }
    goto end;
m0:
    param_1[3] = 0;
    b = 1;
    goto end;
m1:
    b = 1;
    param_1[3] = 1;
end:
    if (param_1[3] >= param_1[1]) {
        b = 0;
        param_1[3] = -1;
    }
    return b;
}
