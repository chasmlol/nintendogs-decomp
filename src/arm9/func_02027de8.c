#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(vu8 *p, u32 v)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02027de8(u8 *param_1, s32 param_2, s32 param_3)
{
    s16 s;
    u32 idx;
    idx = param_2 + 14;
    s = (s16)(param_3 + *(s16 *)(*(u8 **)(param_1 + 0x9e8) + (((s32)(idx << 16)) >> 15) + 24));
    SwapByte(param_1 + 210, 1);
    if (s < 0) {
        s = 0;
    }
    if (s > 10000) {
        s = 10000;
    }
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + (((s32)(idx * 0x10000)) >> 15) + 24) = s;
}
