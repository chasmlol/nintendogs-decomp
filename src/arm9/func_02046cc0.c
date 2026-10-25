#include "ctx.h"

extern void func_02046d24(u32 a, u32 b, u32 c, u32 d);

void func_02046cc0(u32 a)
{
    void (*fp)(u32, u32, u32, u32) = func_02046d24;
    fp(a, 0xff40, 0x16, 0x30);
}
