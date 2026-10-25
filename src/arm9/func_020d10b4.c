#include "ctx.h"

u32 func_020d10b4(u8 *param_1)
{
    s32 v = *(s32 *)(param_1 + 8);
    if (v > 0) {
        *(s32 *)(param_1 + 8) = v - 1;
        *(s32 *)(param_1 + 4) = 0;
        return 1;
    }
    return 0;
}
