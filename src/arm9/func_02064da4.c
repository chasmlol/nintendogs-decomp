#include "ctx.h"

extern void func_02064db4(u32 a, u32 b);

void func_02064da4(u32 x)
{
    void (*fp)(u32, u32) = func_02064db4;
    fp(x, 1);
}
