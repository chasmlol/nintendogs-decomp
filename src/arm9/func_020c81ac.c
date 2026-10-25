#include "ctx.h"

u32 func_020c81ac(s32 *param_1, s32 param_2, s32 *param_3)
{
    if (param_1[1] < param_2) {
        param_3[1] = param_3[1] + (param_2 - param_1[1]);
        return 1;
    }
    return 0;
}
