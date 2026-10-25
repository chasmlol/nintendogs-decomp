#include "ctx.h"

void func_02002940(u32 a, u32 b);

void func_02002764(u32 param_1)
{
    void (*fp)(u32, u32) = func_02002940;
    fp(2, (u16)param_1);
}
