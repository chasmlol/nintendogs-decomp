#include "ctx.h"

extern void func_0207f134(u32 a, u32 b, u32 c, u32 d);

void func_0207f124(u32 a, u32 b, u32 c)
{
    void (*fp)(u32, u32, u32, u32) = func_0207f134;
    fp(a, b, c, 0);
}
