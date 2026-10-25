#include "ctx.h"

extern int func_0203567c(int p);
extern int func_ov003_0217fe80(int p, int a, int b);
extern void func_0203e908(int p, s16 v);

void func_ov003_0217f3ac(int param_1)
{
    int iVar1;
    int iVar2;

    iVar1 = func_0203567c(param_1);
    iVar2 = func_ov003_0217fe80(param_1, (*(int *)(param_1 + 0x484) + 7) * 0x10000 >> 0x10, 0);
    if (iVar2 != 0) {
        return;
    }
    if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x484) == 0) {
            func_0203e908(param_1, 0x20d);
            return;
        }
        func_0203e908(param_1, 0x20e);
        return;
    }
}
