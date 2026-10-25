#include "ctx.h"
BOOL func_02009eb8(s32 *param_1, s32 *param_2)
{
    s64 w1 = (s64)param_1[2] * param_2[2] + 0x800;
    s64 w2 = (s64)param_1[0] * param_2[0] + 0x800;
    s64 w3 = (s64)param_1[1] * param_2[1] + 0x800;
    s32 t2 = (s32)(u32)(w2 >> 12);
    s32 t3 = (s32)(u32)(w3 >> 12);
    s32 s1 = (s32)(u32)(w1 >> 12);
    s32 s = s1 + (t2 + t3);
    return s > 0;
}
