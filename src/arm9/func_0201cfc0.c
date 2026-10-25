#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02028124(u8 *p);
void func_0202518c(u8 *p, u32 a, s32 v);
void func_0201d1f0(u8 *p);
void func_02035c98(u8 *p, u32 v);
s32 func_0203567c(u8 *p);
void func_0202fcc0(u8 *p);

void func_0201cfc0(u8 *param_1)
{
    s32 x;

    x = func_02028124(param_1);
    func_0202518c(param_1, 18, -FX_Mul(x, -273));
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    if (func_0203567c(param_1) != 0) {
        func_0202fcc0(param_1);
    }
}
