#include "ctx.h"

extern void func_020d7308(u32 a);

void func_020d8178(void)
{
    void (*fp)(u32) = func_020d7308;
    fp(3);
}
