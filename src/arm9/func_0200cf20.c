#include "ctx.h"

BOOL func_0200cf20(u8 *param_1)
{
    s32 a = *(s32 *)(param_1 + 0x26c) - *(s32 *)(param_1 + 0x2a0);
    s32 b = *(s32 *)(param_1 + 0x26c) - *(s32 *)(param_1 + 0x2e8);
    s32 c = *(s32 *)(param_1 + 0x274) - *(s32 *)(param_1 + 0x2a8);
    s32 d = *(s32 *)(param_1 + 0x274) - *(s32 *)(param_1 + 0x2f0);
    s64 t1 = (s64)a * b + 0x800;
    s64 t2 = (s64)c * d + 0x800;
    s32 sum = (s32)((u32)(t1 >> 12) + (u32)(t2 >> 12));
    return sum <= 0;
}
