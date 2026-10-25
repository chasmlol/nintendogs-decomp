#include "ctx.h"

extern void func_0203942c(int a);
extern void func_02037450(int a, int b);
extern int func_020289d0(int a, int b, int c);
extern void func_0202fd7c(int a);

void func_0200eb98(int param_1)
{
    int iVar1;
    u32 zero;

    zero = 0;
    *(u16 *)(param_1 + 0x108) = *(u16 *)(param_1 + 0x108) + 1;
    *(u32 *)(param_1 + 0x26c) = zero;
    *(u32 *)(param_1 + 0x270) = zero;
    *(u32 *)(param_1 + 0x274) = zero;
    func_0203942c(param_1);
    func_02037450(param_1, 0x392);
    iVar1 = func_020289d0(param_1, 0, 1);
    if (iVar1 != 0) {
        return;
    }
    if ((*(s8 *)(param_1 + 0xa0) != 0) && (*(u16 *)(param_1 + 0x108) <= 0x64)) {
        return;
    }
    func_0202fd7c(param_1);
}
