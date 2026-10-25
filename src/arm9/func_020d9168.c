#include "ctx.h"

void func_020d055c(u32 a, u32 b);

void func_020d9168(u32 param_1, u8 param_2)
{
    void (*fp)(u32, u32) = func_020d055c;
    fp(param_1, (u8)(param_2 + 1));
}
