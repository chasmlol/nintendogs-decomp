#include "ctx.h"

void func_02003d90(u32 a);

void func_020f7a14(void)
{
    void (*fp)(u32) = func_02003d90;
    fp(0x14);
}
