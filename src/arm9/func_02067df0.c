#include "ctx.h"

u32 func_02067df0(s32 *param_1, s32 *param_2)
{
    s64 v = (s64)param_1[0] * param_2[0] + (s64)param_1[1] * param_2[1] + (s64)param_1[2] * param_2[2] + 0x800;
    return (u32)(v >> 12);
}
