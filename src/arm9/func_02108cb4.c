#include "ctx.h"

extern int data_0215be48;
extern void func_0210e248(int a);
extern void func_0210e230(int a);
extern void func_020fddc0(int a);

void func_02108cb4(int param_1, int param_2, int param_3)
{
    int iVar2;
    int uVar1;
    int v;

    iVar2 = data_0215be48 + 0x1d20;
    *(int *)(iVar2 + 0xc) = param_3;
    *(int *)(iVar2 + 8) = param_2;
    uVar1 = 2;
    if (param_1 <= 8) {
        uVar1 = 0;
    }
    else if (param_1 <= 11) {
        uVar1 = 1;
    }
    func_0210e248(uVar1);
    v = *(int *)(data_0215be48 + 0xa8);
    if (v > 10) {
        goto HI;
    }
    if (v < 9) {
        goto LO;
    }
    if (v == 9) {
        goto ACT;
    }
    if (v == 10) {
        goto ACT;
    }
    return;
LO:
    if (v > 4) {
        return;
    }
    if (v < 0) {
        return;
    }
    if (v == 0) {
        goto ACT;
    }
    if (v == 4) {
        goto ACT;
    }
    return;
HI:
    if (v != 14) {
        return;
    }
ACT:
    func_0210e230(0);
    func_020fddc0(0x26);
}
