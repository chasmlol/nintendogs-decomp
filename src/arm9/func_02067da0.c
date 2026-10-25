#include "ctx.h"

u32 func_02067da0(s16 *param_1, s16 *param_2)
{
    s32 uVar2 = (s32)param_1[0] * (s32)param_2[0] + (s32)param_1[1] * (s32)param_2[1];
    s32 uVar1 = (s32)param_1[2] * (s32)param_2[2] + 0x800;
    s64 s = (s64)uVar2 + (s64)uVar1;
    return (u32)(s >> 12);
}
