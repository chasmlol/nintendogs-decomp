#include "ctx.h"

extern void func_ov003_0217f65c(u32 a, u32 b);

void func_ov003_0217f63c(u32 a)
{
    void (*fp)(u32, u32) = func_ov003_0217f65c;
    fp(a, 8);
}
