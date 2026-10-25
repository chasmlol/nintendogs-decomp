#include "ctx.h"

#define FX(a, b) ((s32)((((s64)(a) * (b)) + 0x800) >> 12))

s32 func_020cdecc(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    s32 uVar5 = FX(param_5, param_5);
    s32 uVar6 = FX(uVar5, param_5);
    s32 t1 = (uVar6 - uVar5) / 2;
    s32 t2 = (param_5 + (uVar6 * -3 + uVar5 * 4)) / 2;
    s32 t3 = ((uVar5 * 2 - uVar6) - param_5) / 2;
    s32 t4 = (uVar6 * 3 + uVar5 * -5 + 0x2000) / 2;
    s32 a = FX(t1, param_4);
    s32 b = FX(t2, param_3);
    s32 c = FX(t3, param_1);
    s32 d = FX(t4, param_2);
    return a + (b + (c + d));
}
