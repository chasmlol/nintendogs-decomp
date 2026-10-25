#include "ctx.h"

void func_ov003_02192830(u32 a, u32 b, u32 c);

void func_ov003_0219281c(u32 param_1)
{
    void (*fp)(u32, u32, u32) = func_ov003_02192830;
    fp(param_1, 0, 0x300);
}
