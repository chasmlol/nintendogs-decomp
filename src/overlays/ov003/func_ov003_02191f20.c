#include "ctx.h"

void func_ov003_02191f30(u32 a, u32 b);

void func_ov003_02191f20(u32 param_1)
{
    void (*fp)(u32, u32) = func_ov003_02191f30;
    fp(param_1, 0x154);
}
