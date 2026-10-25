#include "ctx.h"

extern void func_02008250(u32 a, u32 b, u32 c);

void func_02008208(u32 x)
{
    void (*fp)(u32, u32, u32) = func_02008250;
    fp(2, 0, x);
}
