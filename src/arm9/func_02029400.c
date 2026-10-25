#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02029534(u8 *p, s32 a, u32 b);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02029400(u8 *param_1)
{
    s32 r = func_02029534(param_1, (s16)(-*(s16 *)(param_1 + 240)), *(u8 *)(param_1 + 0xa5));
    if (r != 0) {
        SwapByte(0, (vu8 *)(param_1 + 168));
        *(s16 *)(param_1 + 240) = (s16)(-*(s16 *)(param_1 + 240));
    }
}
