#include "ctx.h"

extern void func_0207e1ac(u32 a, u32 b);

void func_02077dc4(u32 a, u8 *p)
{
    void (*fp)(u32, u32) = func_0207e1ac;
    fp(a, (u32)p[0x18] * 0x38);
}
