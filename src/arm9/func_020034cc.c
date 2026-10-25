#include "ctx.h"

extern s32 func_0207dbac(u32);
extern s32 func_0207d0c4(u32);
extern void func_0207d394(s32, u32, s32);

void func_020034cc(u32 param_1)
{
    s32 iVar1;
    s32 iVar2;
    iVar1 = func_0207dbac(param_1);
    iVar2 = func_0207d0c4(param_1);
    func_0207d394(iVar2, param_1, iVar1);
}
