#include "ctx.h"

extern u8 *func_0207385c(u8 *p, u32 tag);

u32 func_02073828(u8 *param_1, u32 *param_2)
{
    u8 *piVar1 = func_0207385c(param_1, 0x5343524e);
    u32 r;
    if (piVar1 != 0) {
        piVar1 = piVar1 + 8;
        *param_2 = (u32)piVar1;
        r = 1;
    } else {
        *param_2 = 0;
        r = 0;
    }
    return r;
}
