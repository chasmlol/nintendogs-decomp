#include "ctx.h"

void func_02112798(int a, int b, int c);

void func_02109ac0(int param_1)
{
    int iVar1;

    iVar1 = 0;
    do {
        func_02112798(2, (u16)(iVar1 + 5), 0);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    switch (param_1) {
    case 1:
        func_02112798(2, 5, 1);
        break;
    case 2:
        func_02112798(2, 6, 1);
        break;
    }
}
