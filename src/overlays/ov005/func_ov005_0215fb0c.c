#include "ctx.h"

extern s32 func_0203567c(u32);
extern void func_0203e908(u32, s16);

void func_ov005_0215fb0c(u32 param_1)
{
    s32 iVar1;
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x45c);
        return;
    }
}
