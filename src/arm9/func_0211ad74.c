#include "ctx.h"

extern void func_02112798(u32 a, u32 b, u32 c);

void func_0211ad74(void)
{
    void (*fp)(u32, u32, u32) = func_02112798;
    fp(0, 1, 0);
}
