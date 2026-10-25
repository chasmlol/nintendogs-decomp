#include "ctx.h"

void func_02074e0c(s32 *param_1, s32 *param_2, s32 param_3, s32 param_4)
{
    if (param_4 == 0) {
        goto scaled;
    }
    param_1[0] = param_1[0] + param_3;
    param_1[1] = param_1[1] + param_3;
    param_1[2] = param_1[2] + param_3;
    return;
scaled:
    param_1[0] = param_1[0] + ((param_3 * param_2[0]) >> 12);
    param_1[1] = param_1[1] + ((param_3 * param_2[1]) >> 12);
    param_1[2] = param_1[2] + ((param_3 * param_2[2]) >> 12);
}
