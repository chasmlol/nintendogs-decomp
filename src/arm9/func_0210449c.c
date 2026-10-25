#include "ctx.h"

extern void func_020a1a40(u32 a);

void func_0210449c(void)
{
    void (*fp)(u32) = func_020a1a40;
    fp(21);
}
