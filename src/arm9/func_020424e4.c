#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

void func_020424e4(u32 param_1)
{
    s16 i;
    if (*(s8 *)(data_0214f464 + param_1 + 22) == -1) return;
    i = 0;
    do {
        s32 c = *(s8 *)(data_0214f464 + i + 22);
        s32 x = *(s8 *)((u32)param_1 + (u32)data_0214f464 + 22);
        if (c > x) *(s8 *)(data_0214f464 + i + 22) = c - 1;
        i = (s16)(i + 1);
    } while (i < 3);
    *(s8 *)(data_0214f464 + 21) = *(s8 *)(data_0214f464 + 21) - 1;
    *(s8 *)(data_0214f464 + param_1 + 22) = -1;
}
