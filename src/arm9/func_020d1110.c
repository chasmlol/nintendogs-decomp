#include "ctx.h"

u32 func_020d1110(s32 *param_1)
{
    u8 *p;
    p = (u8 *)param_1[0] + 32;
    param_1[1] = param_1[1] - 1;
    if (param_1[1] < 0) {
        if (param_1[2] == 0) {
            param_1[2] = 0;
            param_1[1] = 0;
            return 0;
        }
        param_1[2] = param_1[2] - 1;
        param_1[1] = *(s32 *)(p + param_1[2] * 44 + 0x28) - 1;
    }
    return 1;
}
