#include "ctx.h"

extern void func_02008520(u32 a, u32 b, u32 c);

void func_020084d8(u32 x)
{
    void (*fp)(u32, u32, u32) = func_02008520;
    fp(2, 0, x);
}
