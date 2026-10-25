#include "ctx.h"

extern void func_020488e4(void);

void func_02047fd0(u32 a)
{
    void (*fp)(u32, u32) = (void (*)(u32, u32))func_020488e4;
    fp(a, 4);
}
