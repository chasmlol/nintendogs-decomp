#include "ctx.h"

extern void func_020488e4(u32 a, u32 b);

void func_02047a08(u32 x)
{
    void (*fp)(u32, u32) = func_020488e4;
    fp(x, 4);
}
