#include "ctx.h"

s32 func_02028124(u8 *p);
void func_ov003_02183d00(u8 *p, u32 a, u32 b, s32 c);

void func_ov003_02180f2c(u8 *param_1)
{
    s32 x;
    s32 v;
    x = func_02028124(param_1);
    v = (s32)((((s64)x * 26) + 0x800) >> 12);
    func_ov003_02183d00(param_1, 2, 241, -v);
}
