#include "ctx.h"

void func_02003c10(u32 a);

void func_02113f5c(u32 *param_1)
{
    void (*fp)(u32) = func_02003c10;
    *param_1 = 0;
    fp(16);
}
