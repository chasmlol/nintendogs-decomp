#include "ctx.h"

extern void func_020c79b8(u32 a, u32 b, u32 c);

void func_020eb4c0(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32) = func_020c79b8;
    fp(a, b, 0xc00);
}
