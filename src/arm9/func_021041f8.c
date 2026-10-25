#include "ctx.h"

extern void func_0209fe4c(int a);
extern void func_020a0e04(int a);

void func_021041f8(int param_1)
{
    func_0209fe4c(0x31);
    if (param_1 < 3) {
        func_020a0e04(0x10);
        return;
    }
    if (param_1 < 7) {
        func_020a0e04(0xe);
        return;
    }
    func_020a0e04(0xf);
}
