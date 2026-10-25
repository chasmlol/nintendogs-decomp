#include "ctx.h"

extern void func_0208817c(u32 a, u32 b, u32 c, u32 d);

void func_02087ea0(u32 a, u32 b, u32 c)
{
    void (*fp)(u32, u32, u32, u32) = func_0208817c;
    fp(a, b, c, 1);
}
