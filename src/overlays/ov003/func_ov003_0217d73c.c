#include "ctx.h"

void func_ov003_0217dd00(u32 a, u32 b, u32 c);

void func_ov003_0217d73c(u32 param_1)
{
    void (*fp)(u32, u32, u32) = func_ov003_0217dd00;
    fp(param_1, 7, 0x337);
}
