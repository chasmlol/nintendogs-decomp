#include "ctx.h"

extern void func_020ad7d8(u32 a, u32 b, u32 c);

void func_020ad7b4(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32) = func_020ad7d8;
    fp(a, 11, b);
}
