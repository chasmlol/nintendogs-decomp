#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02049304(u8 *p, s32 *out, s32 a, s32 b, s32 c, s32 d);
s32 func_02028130(u8 *p);
void func_0203e908(u8 *p, s32 v);

void func_02048f44(u8 *param_1)
{
    s32 local;
    s32 uVar2;

    local = 0;
    if (func_02049304(param_1, &local, 0, 183, 186, 668) != 0) {
        return;
    }
    uVar2 = func_02028130(param_1);
    if (local < FX_Mul(uVar2, 0x300c)) {
        func_0203e908(param_1, 0x297);
    }
}
