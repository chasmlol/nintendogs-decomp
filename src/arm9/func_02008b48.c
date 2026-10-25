#include "ctx.h"

extern void func_02008b84(u32 a, u32 b);

void func_02008b48(u32 x)
{
    void (*fp)(u32, u32) = func_02008b84;
    fp(2, x);
}
