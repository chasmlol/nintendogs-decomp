#include "ctx.h"

extern int func_0206cdb8(int a, int b, int c);
extern void WaitByLoop(int n);

void func_020660bc(int param_1, int param_2)
{
    int iVar1;

    iVar1 = func_0206cdb8(0xe, param_1, 0);
    if (iVar1 == 0) {
        return;
    }
    do {
        WaitByLoop(param_2);
        iVar1 = func_0206cdb8(0xe, param_1, 0);
    } while (iVar1 != 0);
}
