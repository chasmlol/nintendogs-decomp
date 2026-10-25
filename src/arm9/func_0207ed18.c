#include "ctx.h"

extern u32 data_027c0004;
extern u32 data_02155c84;

u32 func_0207ed18(u32 param_1)
{
    s32 i;
    u32 *q;
    q = &data_027c0004;
    i = 0;
top:
    if ((param_1 & 1) == 0) {
        goto inc;
    }
    if (i >= 8 && i <= 11) {
        return *(u32 *)((u8 *)&data_02155c84 + (i - 8) * 12);
    }
    if (i >= 3 && i <= 6) {
        return *(u32 *)((u8 *)&data_02155c84 + (i + 1) * 12);
    }
    return *q;
inc:
    i = i + 1;
    param_1 = param_1 >> 1;
    q = q + 1;
    if (i < 22) {
        goto top;
    }
    return 0;
}
