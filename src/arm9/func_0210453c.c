#include "ctx.h"

extern void func_020a0e04(u32 a);

void func_0210453c(void)
{
    void (*fp)(u32) = func_020a0e04;
    fp(5);
}
