#include "ctx.h"

extern s32 func_02064140(void *p);
extern void func_0206431c(s32 a, void *p);
extern s32 func_020641c8(s32 a, s32 b);

s32 func_02064fb0(void *param_1)
{
    s32 iVar1;
    iVar1 = func_02064140(param_1);
    if (iVar1 == 0) {
        func_0206431c(1, param_1);
        iVar1 = func_020641c8(1, 0);
        if (iVar1 == 0) {
            iVar1 = 2;
        }
        return iVar1;
    }
    return iVar1;
}
