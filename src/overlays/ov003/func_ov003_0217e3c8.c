#include "ctx.h"

extern void func_0203942c(int a);
extern int func_02037450(int a, int b);
extern void func_02035c98(int a, int b);
extern int func_020289d0(int a, int b, int c);
extern int func_020357c8(int a, int b);
extern s32 func_02028124(int a);
extern void func_0202fcc0(int a);

void func_ov003_0217e3c8(int param_1)
{
    int iVar1;
    int iVar2;

    func_0203942c(param_1);
    iVar1 = func_02037450(param_1, 0x392);
    func_02035c98(param_1, 1);
    if (*(u16 *)(param_1 + 0xfc) > 0x28) {
        if (func_020289d0(param_1, 0, 1) != 0) {
            return;
        }
    }
    iVar2 = func_020357c8(param_1, 0);
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_02028124(param_1);
    if (iVar1 < iVar2 * 0x40) {
        func_0202fcc0(param_1);
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) > 400) {
        func_0202fcc0(param_1);
    }
}
