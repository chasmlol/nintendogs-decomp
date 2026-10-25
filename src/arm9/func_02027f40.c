#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02027f40(u8 *param_1, s32 param_2, s32 param_3)
{
    SwapByte(1, (vu8 *)(param_1 + 210));
    if (param_3 < 0) {
        param_3 = 0;
    }
    if (param_3 > 10000) {
        param_3 = 10000;
    }
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + (((s32)(s16)param_2) << 1) + 0x18) = (s16)param_3;
}
