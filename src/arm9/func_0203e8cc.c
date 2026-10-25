#include "ctx.h"

void func_0203e8cc(u8 *param_1, s32 param_2, u16 param_3)
{
    *(u16 *)(param_1 + param_2 * 2 + 0x152) = param_3;
    if (param_2 == 0) {
        goto blk0;
    }
    if (param_2 == 2) {
        goto blk2;
    }
    return;
blk0:
    *(u16 *)(param_1 + 0x148) = param_3;
    return;
blk2:
    if ((s32)param_3 >= 20) {
        *(u16 *)(param_1 + 0x14c) = param_3;
    }
    return;
}
