#include "ctx.h"

extern void func_02080b84(void);

void func_0206bec0(int param_1, u32 param_2, int param_3, int param_4)
{
    u32 uVar1;

    if (param_1 != 0) {
        return;
    }
    uVar1 = param_2 & 0xff000000;
    if (param_4 != 0) {
        if (param_4 == 0x800000) {
            param_2 = param_2 - param_3;
        }
    }
    else {
        param_2 = param_2 + param_3;
    }
    if ((((uVar1 != 0x4000000) && (uVar1 < 0x8000000)) && ((param_2 & 0xff000000) != 0x4000000)) &&
        ((param_2 & 0xff000000) < 0x8000000)) {
        return;
    }
    func_02080b84();
}
