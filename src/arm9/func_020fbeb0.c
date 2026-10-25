#include "ctx.h"

extern void func_02069fb8(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_020fbeb0(u32 param_1)
{
    func_02069fb8(0x04001050, 4, 0x3b, param_1, 0x10 - param_1);
}
