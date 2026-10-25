#include "ctx.h"

void func_02066c20(s32 *param_1, s32 *param_2, u32 *param_3)
{
    s64 t;
    s32 v0 = param_1[0];
    s32 v1 = param_1[1];
    s32 v2 = param_1[2];
    t = (s64)v0 * param_2[0] + (s64)v1 * param_2[3] + (s64)v2 * param_2[6];
    param_3[0] = ((u32)t >> 12) | ((u32)(t >> 32) << 20);
    param_3[0] = param_3[0] + param_2[9];
    t = (s64)v0 * param_2[1] + (s64)v1 * param_2[4] + (s64)v2 * param_2[7];
    param_3[1] = ((u32)t >> 12) | ((u32)(t >> 32) << 20);
    param_3[1] = param_3[1] + param_2[10];
    t = (s64)v0 * param_2[2] + (s64)v1 * param_2[5] + (s64)v2 * param_2[8];
    param_3[2] = ((u32)t >> 12) | ((u32)(t >> 32) << 20);
    param_3[2] = param_3[2] + param_2[11];
}
