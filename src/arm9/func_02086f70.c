#include "ctx.h"

s32 func_02086f70(u8 *param_1, u8 *param_2, s32 param_3)
{
    s32 i = 0;
    if (param_3 <= 0) {
        goto ret0;
    }
    do {
        u32 x = param_1[i] - 65;
        u32 y = param_2[i] - 65;
        if (x <= 25) {
            x = x + 32;
        }
        if (y <= 25) {
            y = y + 32;
        }
        if (x != y) {
            return (s32)(x - y);
        }
        i = i + 1;
    } while (i < param_3);
ret0:
    return 0;
}
