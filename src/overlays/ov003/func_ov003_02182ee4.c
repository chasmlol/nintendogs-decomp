#include "ctx.h"

u32 func_02028124(u32 p);
void func_ov003_02183a9c(u32 p, int a, int b, int c, int d, int e);

void func_ov003_02182ee4(u32 param_1)
{
    u32 uVar1;
    s64 v;
    u32 r;

    uVar1 = func_02028124(param_1);
    v = (s64)(s32)uVar1 * (s64)0x102 + 0x800;
    r = (u32)(v >> 12);
    func_ov003_02183a9c(param_1, 3, 0xf2, 0x1e, 0x31, -(s32)r);
}
