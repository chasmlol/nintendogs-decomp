#include "ctx.h"

extern s32 func_0203567c(s32 p);
extern void func_0203e908(s32 p, s16 v);

void func_ov005_0215fa5c(s32 param_1)
{
    s32 iVar1;
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x452);
        return;
    }
}
