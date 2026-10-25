#include "ctx.h"

void func_0207a834(u32 *param_1, u32 *param_2, u32 param_3, u32 param_4)
{
    if ((param_4 & 4) == 0) {
        param_1[1] = param_2[0];
        param_1[2] = param_2[1];
        param_1[3] = param_2[2];
    } else {
        *param_1 = *param_1 | 1;
    }
    *param_1 = *param_1 | 0x18;
}
