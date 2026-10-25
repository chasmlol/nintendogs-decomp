#include "ctx.h"

extern void func_020c5b00(u32 a, u32 b, u32 c);

void func_020c5ad0(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32) = func_020c5b00;
    fp(a, b, 2);
}
