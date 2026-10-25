#include "ctx.h"

extern void func_02008250(u32 a, u32 b, u32 c);

void func_020081a8(u32 param_1)
{
    ((void (*)(u32, u32, u32))func_02008250)(0, 2, param_1);
}
