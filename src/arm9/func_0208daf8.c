#include "ctx.h"

void func_0208f704(u32 a, u32 b);

void func_0208daf8(int param_1, u32 param_2)
{
    void (*fp)(u32, u32) = func_0208f704;
    fp(param_2, param_1 + 4);
}
