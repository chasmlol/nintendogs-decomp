#include "ctx.h"

extern void func_020d8ef4(u32 a, u32 b, u32 c);

void func_020d8ed4(u32 param_1, u32 param_2)
{
    ((void (*)(u32, u32, u32))func_020d8ef4)(param_1, param_2, 0x71);
}
