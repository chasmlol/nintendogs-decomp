#include "ctx.h"

extern int func_020469d0(int p, int a, int b);
extern void func_020467c0(int p);

void func_02046784(int param_1)
{
    int iVar1;

    *(u16 *)(param_1 + 0x12e) = 0x8000;
    iVar1 = func_020469d0(param_1, 0, 1);
    if (iVar1 == 0) {
        func_020467c0(param_1);
        return;
    }
    return;
}
