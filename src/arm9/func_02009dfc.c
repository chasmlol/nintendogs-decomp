#include "ctx.h"

#define FX(a, b) ((s32)((((s64)(a) * (b)) + 0x800) >> 12))

u32 func_02009dfc(s32 *param_1, s32 *param_2, s32 *param_3)
{
    s32 A = FX(param_1[0], param_2[0]) + FX(param_1[2], param_2[2]);
    s32 B;
    if (A > 0) {
        return 0;
    }
    B = FX(param_1[0], param_3[0]) + FX(param_1[2], param_3[2]);
    if (B > 0) {
        return 1;
    }
    return 2;
}
