#include "ctx.h"

extern u16 data_021594d8;

u32 func_020d5fa0(u32 param_1)
{
    u16 g = data_021594d8;
    if (g == 0) {
        return 0;
    }
    do {
        param_1 = (u16)(param_1 + 1);
        if (param_1 > 16) {
            param_1 = 1;
        }
    } while ((g & (1 << (param_1 - 1))) == 0);
    return param_1;
}
