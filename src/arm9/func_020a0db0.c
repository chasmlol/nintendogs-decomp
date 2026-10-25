#include "ctx.h"

extern u8 data_02159074[];
extern u8 data_0212fdc5[];
extern s32 func_020a219c(u32 a, u32 b, u32 c, u32 d);

s32 func_020a0db0(u32 p0, u32 p1, u32 p2)
{
    u32 idx = *(u16 *)(data_02159074 + 24) * 6;
    u32 v = data_0212fdc5[idx];
    if (v == 255) {
        return -1;
    }
    return func_020a219c(v, p0, p1, p2);
}
