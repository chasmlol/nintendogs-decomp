#include "ctx.h"

extern int data_02155c5c;
extern int *func_0207ca70(int *a);
extern int func_0207ca1c(int a);
extern void func_0207cae0(int *a);

void func_0207c990(void)
{
    int *piVar1;
    int *piVar2;
    int iVar3;

    piVar1 = (int *)&data_02155c5c;
    piVar2 = func_0207ca70(piVar1);
    iVar3 = func_0207ca1c((int)piVar1);
    if (iVar3 != 0) {
        do {
            func_0207cae0(piVar2);
            piVar1[4] = piVar1[4] - piVar2[3];
            piVar2 = func_0207ca70(piVar1);
            iVar3 = func_0207ca1c((int)piVar1);
        } while (iVar3 != 0);
    }
}
