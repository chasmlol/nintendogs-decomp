#include "ctx.h"

void func_020fddc0(u32 a);

void func_021082d8(void)
{
    void (*fp)(u32) = func_020fddc0;
    fp(10);
}
