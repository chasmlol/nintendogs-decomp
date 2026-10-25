#include "ctx.h"
extern u32 *func_0207385c(u32 p, u32 tag);
extern void func_020737c8(u32 p);
u32 func_020737d8(u32 param_1, u32 *param_2)
{
    u32 t;
    t = (u32)func_0207385c(param_1, 0x504c5454);
    if (t != 0) {
        func_020737c8(t + 8);
        *param_2 = t + 8;
        return 1;
    }
    *param_2 = 0;
    return 0;
}
