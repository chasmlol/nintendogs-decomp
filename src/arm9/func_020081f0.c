#include "ctx.h"

extern void func_02008250(u32 a, u32 b, u32 c);

void func_020081f0(u32 a)
{
    void (*fp)(u32, u32, u32) = func_02008250;
    fp(0, 1, a);
}
