#include "ctx.h"

extern s32 func_02064098(s32 a, s32 b, u32 c, u32 d);
extern void func_0206431c(u32 a, u32 b);
extern s32 func_020641c8(u32 a, u32 b, u32 c);

s32 func_02064db4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar1;
    iVar1 = func_02064098(1, 2, param_3, param_4);
    if (iVar1 == 0) {
        func_0206431c(8, param_1);
        iVar1 = func_020641c8(8, 1, param_2);
        if (iVar1 == 0) {
            iVar1 = 2;
        }
        return iVar1;
    }
    return iVar1;
}
