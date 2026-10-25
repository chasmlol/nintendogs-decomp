#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_ov019_0215cb74(u8 *param_1)
{
    if (param_1 != NULL) {
        return FX_Mul(*(s32 *)(param_1 + 0x3c) - *(s32 *)(param_1 + 0x4c), 0xb36);
    }
    return 0;
}
