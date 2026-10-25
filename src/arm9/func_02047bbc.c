#include "ctx.h"

extern s32 func_02028124(int p);
extern int func_0202508c(int p, int a, int b, u32 c);
extern int func_0203567c(int p);
extern void func_020362f8(int p);
extern void func_0202fcc0(int p);

void func_02047bbc(int param_1)
{
    s32 uVar1;
    int iVar2;
    s64 v;

    uVar1 = func_02028124(param_1);
    v = (s64)uVar1 * (s64)92 + 0x800;
    iVar2 = func_0202508c(param_1, 0x1a, 0x2e, (u32)(v >> 12));
    if (iVar2 == 0) {
        uVar1 = func_02028124(param_1);
        v = (s64)uVar1 * (s64)118 + 0x800;
        func_0202508c(param_1, 0x35, 0x4f, (u32)(v >> 12));
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
        return;
    }
}
