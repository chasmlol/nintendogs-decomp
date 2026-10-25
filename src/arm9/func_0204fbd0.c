#include "ctx.h"

u32 func_02036578(u32 a);
u32 func_020449bc(void);
u32 func_0202fd7c(u32 a);
void func_0203e908(u32 a, u32 b);

u32 func_0204fbd0(u32 param_1)
{
    u32 a = func_02036578(param_1);
    u32 b = func_020449bc();
    if ((b & 0x40) == 0) {
        return func_0202fd7c(param_1);
    }
    if (a != 0) {
        func_0203e908(param_1, 0x2fd);
        return 1;
    }
    return 0;
}
