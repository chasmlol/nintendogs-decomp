#include "ctx.h"

void func_020c1e9c(u8 *param_1, s32 param_2)
{
    u8 *o = *(u8 **)(param_1 + 0x214);
    u16 k = (u16)(s16)(*(s16 *)(param_1 + 148) - 56);
    if (k <= 1) {
        *(s32 *)(o + 8) = *(s32 *)(o + 8) - param_2 / 20;
    } else {
        *(s32 *)(o + 8) = *(s32 *)(o + 8) - param_2 / 30;
    }
    if (*(s32 *)(o + 8) < 0) {
        *(s32 *)(o + 8) = 0;
    }
}
