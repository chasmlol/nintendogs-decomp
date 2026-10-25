#include "ctx.h"

extern void func_020732dc(int a, int b, int c, int d);
extern void func_02073628(int *a, int b, int c);

void func_0207337c(int param_1, int param_2)
{
    int iVar1;
    int iVar2;
    u32 t;

    iVar2 = *(int *)(param_1 + 0x10c);
    iVar1 = (iVar2 << 0x1e) >> 0x1f;
    if (iVar1 == 0) {
        func_020732dc(param_1, iVar1, param_2, iVar2);
        return;
    }
    if (param_2 == 0) {
        func_020732dc(param_1, iVar1, param_2, iVar2);
        return;
    }
    func_02073628((int *)(param_1 + 0xe4), 0, param_2);
    t = *(u32 *)(param_1 + 0x10c);
    *(u32 *)(param_1 + 0x10c) = t | 8;
    *(u32 *)(param_1 + 0x14c) = 0;
}
