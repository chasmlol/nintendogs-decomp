#include "ctx.h"

int func_ov003_0217fe80(int p, int a, int b);
int func_02035770(int p, int v);
void func_0203e908(int p, int v);

void func_ov003_0217f0ac(int param_1)
{
    int iVar1;
    s16 a;

    a = (s16)(*(int *)((u8 *)param_1 + 0x484) + 5);
    iVar1 = func_ov003_0217fe80(param_1, a, 0);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_02035770(param_1, 0x22);
    if (iVar1 != 0) {
        func_0203e908(param_1, (s16)(*(int *)((u8 *)param_1 + 0x484) + 0x211));
        return;
    }
}
