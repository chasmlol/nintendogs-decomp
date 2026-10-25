#include "ctx.h"
extern s32 func_0206fd4c(void);
s32 func_0206fb74(s32 param_1)
{
    s32 d;
    s32 t;
    d = func_0206fd4c();
    t = param_1 / d + (param_1 % d != 0);
    return (((t & 0x1f) != 0) + (t >> 5)) * 4;
}
