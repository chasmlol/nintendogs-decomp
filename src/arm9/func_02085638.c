#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02085638(s32 *param_1, s32 *param_2)
{
    param_2[5] = param_2[5] + FX_Mul(*(s16 *)((u8 *)param_1 + 12), param_1[0] - param_2[5]);
    param_2[6] = param_2[6] + FX_Mul(*(s16 *)((u8 *)param_1 + 12), param_1[1] - param_2[6]);
    param_2[7] = param_2[7] + FX_Mul(*(s16 *)((u8 *)param_1 + 12), param_1[2] - param_2[7]);
}
