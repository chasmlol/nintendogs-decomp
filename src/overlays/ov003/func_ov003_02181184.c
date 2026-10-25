#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u32 p);
extern void func_ov003_0218381c(u32 p, u32 a, u32 b, u32 c, u32 d, s32 e, u32 f, u32 g, s32 h);

void func_ov003_02181184(u32 param_1)
{
    s32 uVar1;
    s32 uVar2;

    uVar1 = func_02028124(param_1);
    uVar2 = func_02028124(param_1);
    func_ov003_0218381c(param_1, 1, 0xf0, 0x17, 0x27, FX_Mul(uVar2, 115), 0x2d, 0x45, FX_Mul(uVar1, 122));
}
