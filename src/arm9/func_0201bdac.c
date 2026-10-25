#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02028124(u8 *p);
s32 func_02024d40(u8 *p, u32 a, u32 b, s32 c);

void func_0201bdac(u8 *param_1, s32 param_2)
{
    s32 x;

    x = func_02028124(param_1);
    if (func_02024d40(param_1, 11, 36, param_2 * FX_Mul(x, 163)) == 0) {
        x = func_02028124(param_1);
        func_02024d40(param_1, 46, 80, param_2 * FX_Mul(x, 94));
    }
}
