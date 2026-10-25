#include "ctx.h"

extern void func_020462d4(void);

void func_020462b4(u32 a)
{
    void (*fp)(u32, u32) = (void (*)(u32, u32))func_020462d4;
    fp(a, 1);
}
