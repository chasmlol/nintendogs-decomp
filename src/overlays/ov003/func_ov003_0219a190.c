#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);

static inline s32 FXS(u8 *p, s32 c)
{
    return FX_Mul(func_02028124(p), c);
}

s32 func_ov003_0219a190(u8 *param_1, s32 param_2)
{
    if (param_2 > FXS(param_1, 0xa028)) {
        return 0;
    }
    if (param_2 > FXS(param_1, 0x9826)) {
        return 1;
    }
    if (param_2 > FXS(param_1, 0x8020)) {
        return 2;
    }
    if (param_2 > FXS(param_1, 0x681a)) {
        return 3;
    }
    if (param_2 > FXS(param_1, 0x4812)) {
        return 4;
    }
    if (param_2 > FXS(param_1, 0x1338)) {
        return 5;
    }
    return 6;
}
