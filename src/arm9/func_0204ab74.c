#include "ctx.h"

extern int func_02036578(int p);
extern void func_0204d8f4(int p, int q);
extern void func_02035be8(int p);
extern int func_020289d0(int p, int a, int b);
extern int func_0203592c(int p, int a);
extern int func_020357c8(int p, int a);
extern void func_020362f8(int p);
extern void func_0202fcc0(int p);

void func_0204ab74(int param_1)
{
    int iVar2;
    int iVar3;

    iVar2 = func_02036578(param_1);
    func_0204d8f4(param_1, iVar2);
    func_02035be8(param_1);
    iVar3 = func_020289d0(param_1, 0, 1);
    if (iVar3 != 0) {
        return;
    }
    iVar3 = func_0203592c(param_1, 0);
    if (iVar3 != 0) {
        return;
    }
    iVar3 = func_020357c8(param_1, 0);
    if (iVar3 != 0) {
        return;
    }
    if (iVar2 != 0) {
        s32 f;
        if (*(s16 *)(iVar2 + 0xea) < 0x289) goto Z;
        if (*(s16 *)(iVar2 + 0xea) <= 0x28a) {
            f = 1;
            goto J;
        }
Z:
        f = 0;
J:
        if (f != 0) {
            return;
        }
    }
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
