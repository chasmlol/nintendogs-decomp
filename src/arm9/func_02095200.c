#include "ctx.h"

void func_02095200(u8 *param_1, s32 param_2, u16 param_3)
{
    if (param_2 == 0) goto body0;
    if (param_2 == 1) goto body1;
    if (param_2 == 2) {
        *(u16 *)(param_1 + 0x6c) = param_3;
    }
    return;
body0:
    *(u16 *)(param_1 + 0x68) = param_3;
    return;
body1:
    *(u16 *)(param_1 + 0x6a) = param_3;
    return;
}
