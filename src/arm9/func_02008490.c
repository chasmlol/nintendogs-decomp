#include "ctx.h"

extern void func_02008520(u32 a, u32 b, u32 c);

void func_02008490(u32 param_1)
{
    ((void (*)(u32, u32, u32))func_02008520)(2, 1, param_1);
}
