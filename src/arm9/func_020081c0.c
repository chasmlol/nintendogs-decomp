#include "ctx.h"

extern void func_02008250(void);

void func_020081c0(u32 a)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_02008250;
    fp(2, 1, a);
}
