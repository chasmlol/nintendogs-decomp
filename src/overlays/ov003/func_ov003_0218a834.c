#include "ctx.h"

extern void func_ov003_0218a84c(u32 a, u32 b, u32 c);

void func_ov003_0218a834(u32 a)
{
    void (*fp)(u32, u32, u32) = func_ov003_0218a84c;
    fp(a, 0, 0x1ff);
}
