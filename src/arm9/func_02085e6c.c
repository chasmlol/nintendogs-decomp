#include "ctx.h"

u32 func_02085e6c(u8 *param_1, u16 *param_2, u32 param_3)
{
    u32 uVar1 = param_1[0x17];
    u16 c = *param_2;
    if (c == 0) {
        return uVar1;
    }
    param_3 = param_3 + uVar1;
    do {
        if (c == 10) {
            uVar1 = uVar1 + param_3;
        }
        param_2 = param_2 + 1;
        c = *param_2;
    } while (c != 0);
    return uVar1;
}
