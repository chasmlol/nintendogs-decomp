#include "ctx.h"

extern s32 func_02064098(s32 a, s32 b);
extern void func_0206431c(s32 a, void *p);
extern s32 func_020641c8(s32 a, s32 b);

s32 func_02064f68(void *param_1)
{
    s32 iVar1;
    iVar1 = func_02064098(1, 2);
    if (iVar1 == 0) {
        func_0206431c(2, param_1);
        iVar1 = func_020641c8(2, 0);
        if (iVar1 == 0) {
            iVar1 = 2;
        }
        return iVar1;
    }
    return iVar1;
}
