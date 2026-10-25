#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

static inline u8 SwapOld(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02044c48(u32 param_1)
{
    u8 *p;
    p = data_0214f464;
    if ((s8)p[7] == -1) {
        SwapOld(param_1, (vu8 *)(p + 8));
        param_1 = SwapOld((u32)(s32)*(s8 *)(p + 8), (vu8 *)(p + 7));
    }
    return;
}
