#include "ctx.h"

extern u32 func_0207ceb0(u32 *a, u32 b);

u32 func_0207ce4c(u32 *param_1, s32 param_2)
{
    s32 i = 0;
    u32 r = func_0207ceb0(param_1, 0);
    while (r != 0) {
        if (i == param_2) {
            return r;
        }
        i = i + 1;
        r = func_0207ceb0(param_1, r);
    }
    return 0;
}
