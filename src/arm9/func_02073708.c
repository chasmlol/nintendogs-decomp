#include "ctx.h"

u32 func_02073708(u16 *param_1, u32 param_2)
{
    u32 r;
    if (param_2 >= *param_1) {
        return 0;
    }
    if (param_1[1] & 1) {
        r = *(u32 *)(param_1 + 2) + param_2 * 16;
    } else {
        r = *(u32 *)(param_1 + 2) + param_2 * 8;
    }
    return r;
}
