#include "ctx.h"

void func_ov003_02186ccc(u32 a, u32 b);

void func_ov003_02186b2c(u32 param_1)
{
    void (*fp)(u32, u32) = func_ov003_02186ccc;
    fp(param_1, 0);
}
