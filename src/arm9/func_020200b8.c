#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u32 p);
extern u8 func_02025548(u32 p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

u8 func_020200b8(u8 *param_1)
{
    u8 *q;
    s16 val = 348;
    q = param_1 + 256;
    *(s16 *)(q + 82) = val;
    q = param_1 + 147;
    SwapByte(5, (vu8 *)q);
    func_02026c24((u32)param_1);
    return func_02025548((u32)param_1);
}
