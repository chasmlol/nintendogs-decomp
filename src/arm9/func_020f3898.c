#include "ctx.h"

extern void func_020c79b8(u32 a, u32 b, u32 c);

void func_020f3898(u32 x, u32 y)
{
    void (*fp)(u32, u32, u32) = func_020c79b8;
    fp(x, y, 0xd9d);
}
