#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02009f38(s32 *param_1, s32 *param_2)
{
    s32 x = FX_Mul(param_1[0], param_2[0]);
    s32 y = FX_Mul(param_1[2], param_2[2]);
    return (x + y) > 0;
}
