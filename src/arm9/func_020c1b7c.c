#include "ctx.h"

void func_020c7434(u32 a, u32 b, u32 c, u32 d);

void func_020c1b7c(u32 param_1, u32 param_2)
{
    void (*fp)(u32, u32, u32, u32) = func_020c7434;
    fp(param_1, param_2, 0, 0xffffffff);
}
