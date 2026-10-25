#include "ctx.h"

extern void func_02089660(u32 a, u32 b, u32 c, u32 d);

void func_02089b0c(u32 param_1, u32 param_2)
{
    ((void (*)(u32, u32, u32, u32))func_02089660)(param_1, 6, param_2, 2);
}
