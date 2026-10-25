#include "ctx.h"

extern void func_0207d774(int a, u32 b, int c);
extern void func_0207d6b0(int a, u32 b, int c);

void func_0207d51c(int param_1, u32 param_2, int param_3)
{
    u32 uVar1;

    if (param_2 == 0) {
        param_2 = 1;
    }
    uVar1 = (param_2 + 3) & 0xfffffffc;
    if (param_3 >= 0) {
        func_0207d774(param_1, uVar1, param_3);
        return;
    }
    func_0207d6b0(param_1, uVar1, -param_3);
}
