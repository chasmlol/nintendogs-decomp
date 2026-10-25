#include "ctx.h"

extern void func_020488e4(u32 a, u32 b);

void func_0204787c(u32 a)
{
    void (*fp)(u32, u32) = func_020488e4;
    fp(a, 4);
}
