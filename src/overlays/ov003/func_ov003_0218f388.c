#include "ctx.h"

extern void func_ov003_0218f4a8(u32 a, u32 b, u32 c);

void func_ov003_0218f388(u32 a)
{
    void (*fp)(u32, u32, u32) = func_ov003_0218f4a8;
    fp(a, 0, 0xffffffff);
}
