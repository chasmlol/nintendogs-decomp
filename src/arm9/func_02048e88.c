#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02028124(u8 *p);
s32 func_0202508c(u8 *p, u32 a, u32 b, s32 c);
void func_02025264(u8 *p, u32 a, s32 b);
s32 func_0203567c(u8 *p);
void func_020362f8(u8 *p);
void func_0202fcc0(u8 *p);

void func_02048e88(u8 *param_1)
{
    s32 x;

    x = func_02028124(param_1);
    if (func_0202508c(param_1, 10, 20, FX_Mul(x, 40)) == 0) {
        x = func_02028124(param_1);
        func_02025264(param_1, 21, FX_Mul(x, 102));
    }
    if (func_0203567c(param_1) != 0) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
    }
}
