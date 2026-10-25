#include "ctx.h"

void func_0201d1f0(u32 a);
void func_02035c98(u32 a, u32 b);
s32 func_0203567c(u32 a);
void func_0202fcc0(u32 a);

void func_0201d138(u32 param_1)
{
    s32 iVar1;

    func_0201d1f0(param_1);
    func_02035c98(param_1, 1);
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0202fcc0(param_1);
        return;
    }
    return;
}
