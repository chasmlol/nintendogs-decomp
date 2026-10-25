#include "ctx.h"

extern void func_0206be94(u32 a);

void func_0206a0dc(u32 a)
{
    *(vu32 *)0x04000400 = 0x16;
    ((void (*)(u32))func_0206be94)(a);
}
