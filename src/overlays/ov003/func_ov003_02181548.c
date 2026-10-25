#include "ctx.h"

extern s32 func_02028124(u32 a);
extern void func_ov003_0218381c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);

#define FX_MUL(a, b) ((s32)((((s64)(s32)(a)) * (b) + 0x800) >> 12))

void func_ov003_02181548(u32 param_1)
{
    s32 uVar1;
    s32 uVar2;

    uVar1 = func_02028124(param_1);
    uVar2 = func_02028124(param_1);
    func_ov003_0218381c(param_1, 2, 0xf1, 0x17, 0x27, FX_MUL(uVar2, 0x73), 0x2d, 0x45,
                        FX_MUL(uVar1, 0x7a));
}
