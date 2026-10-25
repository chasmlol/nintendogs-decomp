#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02028124(u8 *p);
void func_02024ff0(u8 *p, s32 v);
s32 func_0203567c(u8 *p);
void func_0202fd7c(u8 *p);

void func_0200e820(u8 *param_1)
{
    s32 x;

    x = func_02028124(param_1);
    func_02024ff0(param_1, -FX_Mul(x, 102));
    *(s16 *)(param_1 + 0x152) = *(s16 *)(param_1 + 0x148);
    if (func_0203567c(param_1) != 0) {
        *(s16 *)(param_1 + 0x152) = 0;
        func_0202fd7c(param_1);
    }
}
