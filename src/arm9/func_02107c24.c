#include "ctx.h"

extern void func_020fddc0(u32 a);

void func_02107c24(void)
{
    void (*fp)(u32) = func_020fddc0;
    fp(0x21);
}
