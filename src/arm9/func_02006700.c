#include "ctx.h"

extern u32 data_0214f008;

u32 func_02006700(u32 param_1, u32 param_2)
{
    u32 r = 0;
    u8 *p = (u8 *)data_0214f008;
    u32 *t = *(u32 **)(p + 0x28);
    if (t != NULL) {
        if (param_1 < *(u16 *)(p + 10)) {
            t[param_1] = param_2;
            r = 1;
        }
    }
    return r;
}
