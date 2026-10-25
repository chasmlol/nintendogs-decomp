#include "ctx.h"

extern void func_020c7c24(void);

void func_020c2d64(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_020c7c24;
    fp(a, b, 0xfffffffd);
}
