#include "ctx.h"
extern s16 data_02126868[];
s32 func_02006ee8(s32 param_1)
{
    s32 t;
    u16 t16;
    s32 v;
    s64 w;
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 >= 0x1000) {
        return 0x1000;
    }
    t = (s32)((u32)param_1 << 15) >> 12;
    t16 = (u16)(t - 0x4000);
    v = data_02126868[(t16 >> 4) * 2];
    w = (s64)v * 2048 + 2048;
    return (s32)(u32)(w >> 12) + 2048;
}
