#include "ctx.h"

extern s32 func_02028124(u32 a);
extern void func_0202518c(u32 a, u32 b, s32 c);
extern void func_0201d1f0(u32 a);
extern void func_02035c98(u32 a, int b);
extern int func_0203567c(u32 a);
extern void func_0202fcc0(u32 a);

#define FX_MUL(a, b) ((s32)((((s64)(s32)(a)) * (b) + 0x800) >> 12))

void func_0201d040(u32 param_1)
{
    s32 uVar1;

    uVar1 = func_02028124(param_1);
    func_0202518c(param_1, 0x12, -FX_MUL(uVar1, -273));
    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    if (func_0203567c(param_1) != 0) {
        func_0202fcc0(param_1);
    }
}
