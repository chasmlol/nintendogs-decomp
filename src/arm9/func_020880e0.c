#include "ctx.h"

u32 func_02087854(u32 *a, u32 b, u32 c, u32 d);

u32 func_020880e0(u32 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    param_1[2] = param_2;
    param_1[13] = param_5;
    param_1[11] = param_3;
    param_1[12] = param_4;
    if (func_02087854(param_1, 7, param_3, param_4) != 0) {
        param_1[3] |= 0x10;
        param_1[3] &= 0xffffffdf;
        return 1;
    }
    return 0;
}
