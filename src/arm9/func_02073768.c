#include "ctx.h"

extern u32 func_0207385c(u32 p, u32 tag);
extern void func_02073758(u32 p);

u32 func_02073768(u32 param_1, u32 *param_2)
{
    u32 p = func_0207385c(param_1, 0x43484152);
    if (p != 0) {
        func_02073758(p + 8);
        *param_2 = p + 8;
        return 1;
    }
    *param_2 = 0;
    return 0;
}
