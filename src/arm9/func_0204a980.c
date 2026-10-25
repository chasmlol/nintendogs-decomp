#include "ctx.h"

extern int func_02036578(int a);
extern void func_0204d2c8(int a, int b);
extern void func_02035be8(int a);
extern int func_020289d0(int a, int b, int c);
extern int func_0203592c(int a, int b);
extern int func_020357c8(int a, int b);
extern void func_020362f8(int a);
extern void func_0202fcc0(int a);

void func_0204a980(int param_1)
{
    int iVar2;

    iVar2 = func_02036578(param_1);
    func_0204d2c8(param_1, iVar2);
    func_02035be8(param_1);
    if (func_020289d0(param_1, 0, 1) != 0) {
        return;
    }
    if (func_0203592c(param_1, 0) != 0) {
        return;
    }
    if (func_020357c8(param_1, 0) != 0) {
        return;
    }
    if (iVar2 != 0) {
        int bVar1;
        s16 sVar3;
        sVar3 = *(s16 *)(iVar2 + 0xea);
        if (sVar3 < 0x289) {
            goto zero;
        }
        if (sVar3 <= 0x28a) {
            bVar1 = 1;
            goto test;
        }
zero:
        bVar1 = 0;
test:
        if (bVar1) {
            return;
        }
    }
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
