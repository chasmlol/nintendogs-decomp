#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

static inline void SwapByte(u32 v, vu8 *p) { *(u8 *)(p) = (u8)(v); }

s32 func_0204496c(void)
{
    u8 *p;

    p = data_0214f464;
    if (*(s8 *)(p + 19) == 3) {
        SwapByte(1, (vu8 *)(p + 19));
    }
    return *(s8 *)(data_0214f464 + 19);
}
