#include "ctx.h"

extern void func_02089660(u32 a, u32 b, u32 c, u32 d);

void func_02089af4(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32, u32) = func_02089660;
    fp(a, 4, b, 1);
}
