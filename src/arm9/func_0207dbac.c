#include "ctx.h"

s32 func_0207dbac(u8 *param_1)
{
    u32 *q = (u32 *)(param_1 + 36);
    u32 d = *(u32 *)(param_1 + 0x1c) - q[1];
    if (d != 0) {
        return 0;
    }
    *(u32 *)(param_1 + 0x1c) = q[0];
    q[1] = *(u32 *)(param_1 + 0x1c);
    return *(u32 *)(param_1 + 0x1c) - (u32)param_1;
}
