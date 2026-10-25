#pragma avoid_byte strb
#include "ctx.h"

void func_02025860(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
    vu8 *q;
    u32 v;
    *(s32 *)(param_1 + 0x920) = (s32)(u32)((((s64)4100 * (s64)x) + 0x800) >> 12);
    q = (__typeof__(q))((u32)(param_1) + (175));
    v = (__typeof__(v))(2);
    *(u8 *)(q) = (u8)(v);
    return;
}
