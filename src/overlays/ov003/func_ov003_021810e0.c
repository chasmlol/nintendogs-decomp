#include "ctx.h"

s32 func_02028124(u8 *a);
void func_ov003_02183d00(u8 *a, u32 b, u32 c, s32 d);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_021810e0(u8 *param_1)
{
    s32 r = func_02028124(param_1);
    s32 fx = FX_Mul(r, 26);
    func_ov003_02183d00(param_1, 5, 244, -fx);
}
