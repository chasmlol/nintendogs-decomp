#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u32 p);
extern u8 func_02025a84(u32 p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

u8 func_02020698(u8 *param_1)
{
    s16 val = 41;
    u8 *q = param_1 + 256;
    *(s16 *)(q + 82) = val;
    q = param_1 + 147;
    SwapByte(10, (vu8 *)q);
    func_02026c24((u32)param_1);
    return func_02025a84((u32)param_1);
}
