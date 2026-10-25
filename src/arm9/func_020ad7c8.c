#include "ctx.h"

void func_020ad7d8(u32 a, u32 b, u32 c);

void func_020ad7c8(u32 param_1, u32 param_2)
{
    void (*fp)(u32, u32, u32) = func_020ad7d8;
    fp(param_1, param_2, 0xffffffff);
}
