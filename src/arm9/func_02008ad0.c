#include "ctx.h"

extern void func_02008af8(u32 a, u32 b);

void func_02008ad0(u32 a)
{
    void (*fp)(u32, u32) = func_02008af8;
    fp(1, a);
}
