#include "ctx.h"

extern int func_02036578(u8 *p);
extern void func_0204d8f4(u8 *p, int a);
extern void func_02035be8(u8 *p);
extern int func_020289d0(u8 *p, int a, int b);
extern int func_0203592c(u8 *p, int a);
extern int func_020357c8(u8 *p, int a);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_0204599c(u8 *param_1)
{
    int bVar1;
    int iVar2;
    int iVar3;

    iVar2 = func_02036578(param_1);
    func_0204d8f4(param_1, iVar2);
    func_02035be8(param_1);
    iVar3 = func_020289d0(param_1, 0, 1);
    if (iVar3 != 0) {
        return;
    }
    bVar1 = func_0203592c(param_1, 0);
    if (bVar1) {
        return;
    }
    iVar3 = func_020357c8(param_1, 0);
    if (iVar3 != 0) {
        return;
    }
    if (iVar2 != 0 && *(s16 *)(iVar2 + 0xea) == 0x2fd) {
        return;
    }
    func_020362f8(param_1);
    func_0202fcc0(param_1);
}
