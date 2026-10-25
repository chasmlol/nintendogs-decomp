#include "ctx.h"

void func_02008520(u32 a, u32 b, u32 c);

void func_02008508(u32 param_1)
{
    void (*fp)(u32, u32, u32) = func_02008520;
    fp(0, 0, param_1);
}
