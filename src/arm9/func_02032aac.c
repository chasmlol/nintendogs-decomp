#include "ctx.h"

BOOL func_02032aac(u8 *param_1, s32 param_2)
{
    u32 r = 0;
    if (param_2 < 0) {
        return r;
    }
    if (param_2 >= 3) {
        return r;
    }
    return (*(u32 *)(param_1 + 0x924) & (1 << param_2)) != 0;
}
