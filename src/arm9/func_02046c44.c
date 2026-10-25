#include "ctx.h"

extern void func_02046d24(u32 a, u32 b, u32 c, u32 d);

void func_02046c44(u32 x)
{
    void (*fp)(u32, u32, u32, u32) = func_02046d24;
    fp(x, 0x100, 0x16, 0x3a);
}
