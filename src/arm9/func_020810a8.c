#include "ctx.h"

extern void func_02081be8(u32 a, u8 *b);

void func_020810a8(u8 *p, u32 y)
{
    void (*fp)(u32, u8 *) = func_02081be8;
    fp(y, p + 0x14);
}
