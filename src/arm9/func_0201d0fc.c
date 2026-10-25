#include "ctx.h"

extern void func_0201d1f0(u32 p);
extern void func_02035c98(u32 p, int q);
extern int func_0203567c(u32 p);
extern void func_0202fcc0(u32 p);

void func_0201d0fc(u32 param_1)
{
    int iVar1;

    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0202fcc0(param_1);
        return;
    }
    return;
}
