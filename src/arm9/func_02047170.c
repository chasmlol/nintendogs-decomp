#include "ctx.h"

extern s32 func_0204754c(void *p, s32 v);
extern s32 func_0203567c(void *p);
extern void func_0204fc38(void *p);

void func_02047170(void *param_1)
{
    s32 iVar1;
    iVar1 = func_0204754c(param_1, 1);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0204fc38(param_1);
        return;
    }
}
