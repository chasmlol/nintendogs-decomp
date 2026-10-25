#include "ctx.h"

void func_02046d24(u32 a, u32 b, u32 c, u32 d);

void func_02046c74(u32 param_1)
{
    void (*fp)(u32, u32, u32, u32) = func_02046d24;
    fp(param_1, 0xc0, 0x16, 0x2d);
}
