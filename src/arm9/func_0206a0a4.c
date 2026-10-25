#include "ctx.h"

extern void func_0206be70(u32 a);

void func_0206a0a4(u32 a)
{
    void (*fp)(u32) = func_0206be70;
    *(vu32 *)0x04000400 = 25;
    fp(a);
}
