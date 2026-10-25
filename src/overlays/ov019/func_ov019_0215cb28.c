#include "ctx.h"

u32 func_ov019_0215cb28(u8 *param_1)
{
    s32 d;
    if (param_1 != NULL) {
        d = *(s32 *)(param_1 + 0x40) - *(s32 *)(param_1 + 0x50);
        return (u32)((((s64)d * 0xb36) + 0x800) >> 12);
    }
    return 0;
}
