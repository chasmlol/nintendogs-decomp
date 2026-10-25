#include "ctx.h"

void func_020e7a48(u32 a, u32 b, u32 c);

void func_020e7a38(u32 param_1, u32 param_2)
{
    void (*fp)(u32, u32, u32) = func_020e7a48;
    fp(param_1, param_2, 0x43);
}
