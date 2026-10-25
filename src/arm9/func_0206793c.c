#include "ctx.h"

#define FX_MulNR(a, b) ((s32)(((s64)(a) * (b)) >> 12))

void func_0206793c(s32 param_1, s32 *param_2, s32 *param_3, s32 *param_4)
{
    param_4[0] = param_3[0] + FX_MulNR(param_1, param_2[0]);
    param_4[1] = param_3[1] + FX_MulNR(param_1, param_2[1]);
    param_4[2] = param_3[2] + FX_MulNR(param_1, param_2[2]);
}
