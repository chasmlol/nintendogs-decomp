#include "ctx.h"

static inline s32 FXM(s32 a, s32 b)
{
    s64 v = (s64)a * b + 0x800;
    return (s32)(v >> 12);
}
#define FX_Mul(a, b) FXM((a), (b))

s32 func_02028124(u8 *p);

s32 func_ov003_02199f9c(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 iVar4;
    s32 f;

    f = FX_Mul(func_02028124(param_1), 0x7cec);
    iVar4 = param_3 * 50 + param_2;
    if (iVar4 > f) {
        return 0;
    }
    f = FX_Mul(func_02028124(param_1), 0x701c);
    if (iVar4 > f) {
        return 1;
    }
    f = FX_Mul(func_02028124(param_1), 0x5014);
    iVar4 = param_3 * 30 + param_2;
    if (iVar4 > f) {
        return 2;
    }
    f = FX_Mul(func_02028124(param_1), 0x4010);
    if (iVar4 > f) {
        return 3;
    }
    f = FX_Mul(func_02028124(param_1), 0x280a);
    iVar4 = param_3 * 20 + param_2;
    if (iVar4 > f) {
        return 4;
    }
    f = FX_Mul(func_02028124(param_1), 0x1806);
    if (iVar4 > f) {
        return 5;
    }
    return 6;
}
