#include "ctx.h"

extern u32 func_02028124(u8 *p);
extern void func_ov003_0218381c(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);

void func_ov003_02180f80(u8 *param_1)
{
    u32 uVar1;
    u32 uVar2;
    u32 x1;
    u32 x2;

    uVar1 = func_02028124(param_1);
    uVar2 = func_02028124(param_1);
    x1 = -(u32)((((s64)(s32)uVar2 * (s64)(-217)) + 0x800) >> 12);
    x2 = -(u32)((((s64)(s32)uVar1 * (s64)(-168)) + 0x800) >> 12);
    func_ov003_0218381c(param_1, 1, 0xec, 0xb, 0x22, x1, 0x23, 0x3e, x2);
}
