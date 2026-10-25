#include "ctx.h"

extern s32 func_0204754c(u32, u32);
extern s32 func_0203567c(u32);
extern void func_0203e908(u32, s16);

void func_02047504(u32 param_1)
{
    s32 iVar1;
    iVar1 = func_0204754c(param_1, 0);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x2ce);
        return;
    }
}
