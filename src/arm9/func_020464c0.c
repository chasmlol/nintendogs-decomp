#include "ctx.h"

u32 func_020469d0(u32 p, u32 a, u32 b);
u32 func_0203579c(u32 p, u32 b);
void func_0203e908(u32 p, u32 b);

void func_020464c0(u32 param_1)
{
    u32 iVar1;

    iVar1 = func_020469d0(param_1, 0, 0);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203579c(param_1, 0x5e);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x2e6);
        return;
    }
}
