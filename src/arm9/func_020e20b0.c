#include "ctx.h"

extern u8 data_0215b768[];
extern void func_0207fd5c(u32 a, u32 b, u32 c);

void func_020e20b0(u32 param_1, u32 param_2)
{
    ((void (*)(u32, u32, u32))func_0207fd5c)((u32)data_0215b768, param_1 + param_2, 0);
}
