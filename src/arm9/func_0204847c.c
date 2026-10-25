#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02028124(u8 *p);
void func_02024e40(u8 *p, s32 a, s32 b);
s32 func_0203567c(u8 *p);
void func_02048680(u8 *p, s32 a, s32 b);

void func_0204847c(u8 *param_1)
{
    s32 x;
    s32 r;

    x = func_02028124(param_1);
    func_02024e40(param_1, 11, -FX_Mul(x, 93));
    r = func_0203567c(param_1);
    func_02048680(param_1, 0, r);
}
