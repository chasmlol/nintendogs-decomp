#include "ctx.h"

extern int data_0215bf9c;
extern int data_02147fc0;
extern void func_0206c7bc(u32 a, u32 b, u32 c);

void func_0210a854(int param_1)
{
    int iVar1;
    int *piVar2;
    vu16 z;

    piVar2 = (int *)data_0215bf9c;
    iVar1 = *piVar2;
    if (iVar1 == param_1) {
        return;
    }
    if (iVar1 == 0) {
        goto zero;
    }
    if (iVar1 != 0) {
        iVar1 = piVar2[2];
        if (iVar1 != 0 && iVar1 != 5 && iVar1 != 6) {
            piVar2[2] = 5;
        }
    }
    piVar2[1] = param_1;
    return;
zero:
    z = 0;
    func_0206c7bc(z, (u32)(piVar2 + 4), 0x144);
    *piVar2 = param_1;
    piVar2[1] = 0;
    piVar2[2] = 1;
    piVar2[3] = ((int *)&data_02147fc0)[param_1];
    ((void (*)(int *))*(int *)piVar2[3])(piVar2 + 4);
}
