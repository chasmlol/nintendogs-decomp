#include "ctx.h"

extern void func_ov003_0218a84c(u32 a, u32 b, u32 c);

void func_ov003_0218a7d8(u32 x)
{
    void (*fp)(u32, u32, u32) = func_ov003_0218a84c;
    fp(x, 5, 0x57);
}
