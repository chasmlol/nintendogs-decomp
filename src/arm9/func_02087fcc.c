#include "ctx.h"

u32 func_02087854(u32 *a, u32 b, u32 c, u32 d);

u32 func_02087fcc(u32 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 ok = func_02087854(param_1, 8, param_3, param_4);
    if (ok != 0) {
        param_1[2] = 0;
        param_1[4] = 14;
        param_1[3] &= 0xffffffcf;
        return 1;
    }
    return 0;
}
