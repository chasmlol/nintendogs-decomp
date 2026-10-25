#include "ctx.h"

extern void func_020895a8(u32, u32, u32, u32, u32);

void func_0208962c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    func_020895a8(7, param_1 | (param_5 << 24), param_2, param_3, param_4);
}
