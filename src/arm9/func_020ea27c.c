#include "ctx.h"

extern void func_020ea29c(u32 a, u32 b, u32 c);

void func_020ea27c(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32) = func_020ea29c;
    fp(a, b, 108);
}
