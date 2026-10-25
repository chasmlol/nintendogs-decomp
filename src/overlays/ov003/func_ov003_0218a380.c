#include "ctx.h"

extern void func_ov003_0218a3cc(u32 a, u32 b, u32 c);

void func_ov003_0218a380(u32 a)
{
    void (*fp)(u32, u32, u32) = func_ov003_0218a3cc;
    fp(a, 3, 31);
}
