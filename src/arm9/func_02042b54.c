#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_02042b54(u32 param_1)
{
    u8 *q;
    q = data_0214f464;
    if (*(s8 *)(q + 9) == -1) {
        SwapByte(param_1, (vu8 *)(q + 9));
        *(u32 *)(data_0214f464 + 0x40) = 1;
    }
}
