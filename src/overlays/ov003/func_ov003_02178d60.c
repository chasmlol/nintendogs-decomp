#include "ctx.h"

void func_ov003_02178d70(u32 a, u32 b);

void func_ov003_02178d60(u32 param_1)
{
    void (*fp)(u32, u32) = func_ov003_02178d70;
    fp(param_1, 0);
}
