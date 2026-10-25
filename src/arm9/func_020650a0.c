#include "ctx.h"

s32 func_02064098(s32 a, s32 b, s32 c, s32 d);
void func_0206431c(s32 a, s32 b);
s32 func_020641c8(s32 a, s32 b);

s32 func_020650a0(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    s32 iVar1;

    iVar1 = func_02064098(1, 1, param_3, param_4);
    if (iVar1 != 0) {
        return iVar1;
    }
    func_0206431c(5, param_1);
    iVar1 = func_020641c8(5, 0);
    if (iVar1 == 0) {
        iVar1 = 2;
    }
    return iVar1;
}
