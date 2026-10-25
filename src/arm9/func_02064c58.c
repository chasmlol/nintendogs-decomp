#include "ctx.h"

extern s32 func_02064098(s32 a, s32 b);
extern void func_0206431c(s32 a, s32 b);
extern s32 func_020641c8(s32 a, s32 b);

s32 func_02064c58(s32 param_1)
{
    s32 r;
    r = func_02064098(1, 5);
    if (r == 0) {
        func_0206431c(11, param_1);
        r = func_020641c8(11, 0);
        if (r == 0) {
            r = 2;
        }
        return r;
    }
    return r;
}
