#include "ctx.h"

void func_02008a6c(u32 a, u32 b);

void func_02008a44(u32 param_1)
{
    void (*fp)(u32, u32) = func_02008a6c;
    fp(1, param_1);
}
