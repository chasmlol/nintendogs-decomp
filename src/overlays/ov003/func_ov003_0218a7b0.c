#include "ctx.h"

void func_ov003_0218a84c(u32 a, u32 b, u32 c);

void func_ov003_0218a7b0(u32 param_1)
{
    void (*fp)(u32, u32, u32) = func_ov003_0218a84c;
    fp(param_1, 7, 0x7f);
}
