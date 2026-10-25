#include "ctx.h"

extern void func_020a1a40(u32 a);

void func_02104188(void)
{
    void (*fp)(u32) = func_020a1a40;
    fp(78);
}
