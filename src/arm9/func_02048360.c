#include "ctx.h"

void func_020488e4(u32 a, u32 b);

void func_02048360(u32 param_1)
{
    void (*fp)(u32, u32) = func_020488e4;
    fp(param_1, 1);
}
