#include "ctx.h"

extern void func_020c7434(void);

void func_020f36e8(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32, u32) = (void (*)(u32, u32, u32, u32))func_020c7434;
    fp(a, b, 0xd9d, 0);
}
