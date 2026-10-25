#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern s32 func_02024e40(u8 *p, u32 a, s32 b);
extern void func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern void func_020488e4(u8 *p, u32 a);

void func_0204788c(u8 *param_1)
{
    s32 uVar1;
    s32 iVar2;
    uVar1 = func_02028124(param_1);
    iVar2 = func_02024e40(param_1, 0x16, FX_Mul(uVar1, 93));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 0x17, 0x2c, FX_Mul(uVar1, 186));
    }
    func_020488e4(param_1, 1);
}
