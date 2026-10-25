#include "ctx.h"

extern s16 data_0212a968[];

s32 func_0206787c(s32 v);

u16 func_0206824c(s32 param_1)
{
    s32 iVar2;

    if (param_1 >= 0) {
        if (param_1 > 4096) {
            iVar2 = func_0206787c(param_1);
            return (u16)(0x4000 - data_0212a968[iVar2 >> 5]);
        }
        if (param_1 < 4096) {
            return ((u16 *)data_0212a968)[param_1 >> 5];
        }
        return 0x2000;
    }
    if (param_1 < -4096) {
        iVar2 = func_0206787c(-param_1);
        return (u16)(data_0212a968[iVar2 >> 5] - 0x4000);
    }
    if (param_1 <= -4096) {
        return 0xe000;
    }
    return (u16)(-data_0212a968[(-param_1) >> 5]);
}
