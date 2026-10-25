#include "ctx.h"

extern s32 func_02028124(u32 a);
extern void func_0202508c(u32 a, u32 b, u32 c, s32 d);
extern int func_0204754c(u32 a, u32 b);
extern int func_0203567c(u32 a);
extern void func_0204fc38(u32 a);

#define FX_MUL(a, b) ((s32)((((s64)(s32)(a)) * (b) + 0x800) >> 12))

void func_020472bc(int param_1)
{
    s32 uVar1;
    int iVar2;

    uVar1 = func_02028124(param_1);
    func_0202508c(param_1, 9, 0x11, FX_MUL(uVar1, -630));
    iVar2 = func_0204754c(param_1, 1);
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0204fc38(param_1);
    }
}
