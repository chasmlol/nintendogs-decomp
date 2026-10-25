#include "ctx.h"

#define FX_MUL(a, b) ((s32)((((s64)(s32)(a)) * (b) + 0x800) >> 12))

extern s32 func_02028124(u32 a);
extern int func_02024d40(u32 a, u32 b, u32 c, s32 d);
extern void func_0201d1f0(u32 a);
extern void func_02035c98(u32 a, int b);
extern int func_0203567c(u32 a);
extern void func_0202fcc0(u32 a);

void func_0201ca70(u32 param_1)
{
    s32 uVar1;
    int iVar2;

    uVar1 = func_02028124(param_1);
    iVar2 = func_02024d40(param_1, 0xb, 0x24, -FX_MUL(uVar1, 163));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        func_02024d40(param_1, 0x2e, 0x50, -FX_MUL(uVar1, 94));
    }
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0202fcc0(param_1);
    }
}
