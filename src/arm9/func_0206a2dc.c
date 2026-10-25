#include "ctx.h"

extern void func_0206c7d4(u32 a, u32 b, u32 c);

void func_0206a2dc(u32 x)
{
    void (*fp)(u32, u32, u32) = func_0206c7d4;
    fp(x, 0x04000380, 0x40);
}
