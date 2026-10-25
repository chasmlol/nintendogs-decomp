#include "ctx.h"

void func_ov003_02188db0(u32 a, u32 b, u32 c);

void func_ov003_02188d40(u32 param_1)
{
    void (*fp)(u32, u32, u32) = func_ov003_02188db0;
    fp(param_1, 5, 0);
}
