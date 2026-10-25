#include "ctx.h"

#define FX_Mul(a, b) ((u32)((((s64)(a) * (b)) + 0x800) >> 12))

extern s32 func_02028124(u32 p);
extern void func_02024d40(u32 p, u32 a, u32 b, u32 c);
extern void func_0201d1f0(u32 p);
extern void func_02035c98(u32 p, u32 a);
extern s32 func_0203567c(u32 p);
extern void func_0202fcc0(u32 p);

void func_0201cc94(u32 param_1)
{
    s32 uVar1;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    func_02024d40(param_1, 30, 49, -FX_Mul(uVar1, 258));
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0202fcc0(param_1);
    }
}
