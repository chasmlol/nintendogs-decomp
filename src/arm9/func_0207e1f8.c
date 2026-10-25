#include "ctx.h"

extern void func_0207d51c(u32 a, u32 b, u32 c);

void func_0207e1f8(u32 *p, u32 b)
{
    void (*fp)(u32, u32, u32) = func_0207d51c;
    fp(p[1], b, p[2]);
}
