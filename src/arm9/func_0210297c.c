#include "ctx.h"

extern int data_0215be48;
extern void func_02112798(int a, int b, int c);

void func_0210297c(int param_1)
{
    u32 uVar2;
    int iVar1;
    u32 uVar3;
    u16 uVar4;

    iVar1 = data_0215be48 + 0x5028;
    *(int *)(iVar1 + 0x218) = param_1;
    *(u32 *)(iVar1 + 0x21c) = 0;
    uVar3 = 0;
    uVar2 = 3;
    uVar4 = 0xffff;
    if (param_1 == 1) {
        goto P1;
    }
    if (param_1 == 2) {
        uVar3 = 1;
        uVar2 = 1;
        uVar4 = 0x25;
    }
    goto STORE;
P1:
    uVar3 = 1;
    uVar4 = 0x26;
STORE:
    *(u32 *)(iVar1 + 0x220) = uVar3;
    *(u32 *)(iVar1 + 0x224) = uVar2;
    *(u16 *)(iVar1 + 0x228) = uVar4;
    func_02112798(3, 0x25, 0);
    func_02112798(1, 0x25, 0);
    func_02112798(3, 0x26, 0);
    func_02112798(1, 0x26, 0);
}
