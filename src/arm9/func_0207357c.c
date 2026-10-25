#include "ctx.h"
u8 *func_0207357c(u8 *param_1, s32 param_2)
{
    u8 *r;
    if (param_2 < 0) {
        return NULL;
    }
    if ((u32)param_2 >= *(u32 *)(param_1 + 0x1c)) {
        return NULL;
    }
    r = param_1 + 32 + param_2 * 12;
    if (*(s32 *)(param_1 + 32 + param_2 * 12) == -1) {
        r = NULL;
    }
    return r;
}
