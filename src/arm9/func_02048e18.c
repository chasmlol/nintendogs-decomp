#include "ctx.h"

extern s32 func_02028124(int p);
extern void func_02025264(int p, int a, u32 b);
extern int func_0203567c(int p);
extern void func_020362f8(int p);
extern void func_0202fcc0(int p);

void func_02048e18(int param_1)
{
    s32 uVar1;
    int iVar2;
    s64 v;

    uVar1 = func_02028124(param_1);
    v = (s64)uVar1 * (s64)102 + 0x800;
    func_02025264(param_1, 0x15, (u32)(v >> 12));
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
        return;
    }
    return;
}
