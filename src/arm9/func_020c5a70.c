#include "ctx.h"

extern void func_020c5b00(u32 a, u32 b, u32 c);

void func_020c5a70(u32 x, u32 y)
{
    void (*fp)(u32, u32, u32) = func_020c5b00;
    fp(x, y, 8);
}
