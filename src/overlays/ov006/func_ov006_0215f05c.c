#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02035770(u8 *p, s32 v);
void func_02025eb4(u8 *p);
s32 func_0203579c(u8 *p, s32 v);
s32 func_02028124(u8 *p);
void func_ov006_0215f0e8(u8 *p);

void func_ov006_0215f05c(u8 *param_1)
{
    s32 x;

    if (func_02035770(param_1, 1) != 0) {
        func_02025eb4(param_1);
    }
    if (func_0203579c(param_1, 1) != 0) {
        x = func_02028124(param_1);
        *(s32 *)(param_1 + 0x25c) = FX_Mul(x, -32);
        *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -12;
    }
    func_ov006_0215f0e8(param_1);
}
