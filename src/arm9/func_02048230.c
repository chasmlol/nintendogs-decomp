#include "ctx.h"

extern s32 func_02028124(int p);
extern void func_02024e40(int p, int a, s32 v);
extern int func_0203567c(int p);
extern void func_02048680(int p, int a, int b);

void func_02048230(int param_1)
{
    s32 uVar1;
    int iVar2;
    s64 v;

    uVar1 = func_02028124(param_1);
    v = (s64)uVar1 * (s64)93 + 0x800;
    func_02024e40(param_1, 0xb, -(s32)(u32)(v >> 12));
    iVar2 = func_0203567c(param_1);
    func_02048680(param_1, 1, iVar2);
}
