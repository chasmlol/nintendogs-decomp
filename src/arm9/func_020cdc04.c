#include "ctx.h"

extern u8 data_02126868[];

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_020cdc04(s32 *param_1, s32 *param_2, s32 param_3, s32 param_4, u16 param_5)
{
    s32 u3;
    s32 i4 = param_4 >> 4;
    s32 j4 = i4 * 2;
    s32 i5 = (s32)(param_5 >> 4) * 2;
    u3 = FX_Mul(param_3, *(s16 *)(data_02126868 + (j4 + 1) * 2));
    param_1[0] = param_2[0] + FX_Mul(u3, *(s16 *)(data_02126868 + i5 * 2));
    param_1[1] = param_2[1] + FX_Mul(param_3, *(s16 *)(data_02126868 + j4 * 2));
    param_1[2] = param_2[2] + FX_Mul(u3, *(s16 *)(data_02126868 + (i5 + 1) * 2));
}
