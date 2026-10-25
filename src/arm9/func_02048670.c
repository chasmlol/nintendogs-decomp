#include "ctx.h"

extern void func_020488e4(u32 a, u32 b);

void func_02048670(u32 a)
{
    void (*fp)(u32, u32) = func_020488e4;
    fp(a, 0);
}
