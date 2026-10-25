#include "ctx.h"

extern void func_02003d90(u32 a);

void func_021195f8(void)
{
    void (*fp)(u32) = func_02003d90;
    fp(10);
}
