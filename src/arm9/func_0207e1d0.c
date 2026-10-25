#include "ctx.h"

extern void func_0207dd14(u32 a, u32 b, u32 c);

void func_0207e1d0(u8 *p, u32 y)
{
    void (*fp)(u32, u32, u32) = func_0207dd14;
    fp(*(u32 *)(p + 4), y, *(u32 *)(p + 8));
}
