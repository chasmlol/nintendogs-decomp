#include "ctx.h"

extern u8 data_0212ae78[];

u32 func_0208a69c(s32 param_1)
{
    s32 v = param_1;
    s32 k;
    u8 b;
    if (param_1 < -723) {
        v = -723;
    } else if (v > 0) {
        v = 0;
    }
    b = data_0212ae78[v + 723];
    if (v < -240) {
        k = 3;
    } else if (v < -120) {
        k = 2;
    } else if (v < -60) {
        k = 1;
    } else {
        k = 0;
    }
    return (u16)(b | (k << 8));
}
