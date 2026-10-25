#include "ctx.h"

extern void func_02008250(u32 a, u32 b, u32 c);

void func_020081d8(u32 a)
{
    void (*fp)(u32, u32, u32) = func_02008250;
    fp(1, 1, a);
}
