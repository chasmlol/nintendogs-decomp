#include "ctx.h"

s32 func_02064098(u32 a, u32 b, u32 c, s32 d);
void func_0206431c(u32 a, u32 b);
s32 func_020641c8(u32 a, u32 b);

s32 func_020650e8(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    s32 r;

    r = func_02064098(1, 1, param_3, param_4);
    if (r == 0) {
        func_0206431c(4, param_1);
        r = func_020641c8(4, 0);
        if (r == 0) {
            r = 2;
        }
        return r;
    }
    return r;
}
