#include "ctx.h"

extern void func_02046d24(u32 a, u32 b, u32 c, u32 d);

void func_02046cf4(u32 a)
{
    void (*fp)(u32, u32, u32, u32) = func_02046d24;
    fp(a, 0xff00, 0x12, 0x2d);
}
