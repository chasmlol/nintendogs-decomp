#include "ctx.h"

extern void func_020a37d0(u32 a, u32 b, u32 c);

void func_020a302c(void)
{
    void (*fp)(u32, u32, u32) = func_020a37d0;
    fp(0x4f, 2, 0);
}
