#include "ctx.h"
extern s32 func_02064098(u32 a, u32 b);
extern void func_0206431c(u32 a, u32 b);
extern s32 func_020641c8(u32 a, u32 b);
s32 func_02065058(u32 param_1)
{
    s32 iVar1;
    iVar1 = func_02064098(1, 2);
    if (iVar1 == 0) {
        func_0206431c(6, param_1);
        iVar1 = func_020641c8(6, 0);
        if (iVar1 == 0) {
            iVar1 = 2;
        }
        return iVar1;
    }
    return iVar1;
}
