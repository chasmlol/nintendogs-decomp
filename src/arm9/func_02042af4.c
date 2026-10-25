#pragma avoid_byte strb
#include "ctx.h"

extern u8 *volatile data_0214f464;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02042af4(s32 param_1)
{
    u8 *p = data_0214f464;
    s32 v;
    if (*(s8 *)(p + 9) != -1) {
        return;
    }
    if (param_1 < 0 || param_1 >= 3) {
        v = 0;
    } else {
        v = *(s32 *)(p + param_1 * 4 + 0x54);
    }
    if (v == 0) {
        return;
    }
    SwapByte((u32)param_1, (vu8 *)(p + 9));
    *(u32 *)(data_0214f464 + 0x40) = 1;
}
