#include "ctx.h"

extern void func_020e6f78(u32 a, u32 b, u32 c);

void func_020e6f48(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32) = func_020e6f78;
    fp(a, b, 0x42);
}
