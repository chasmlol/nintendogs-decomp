#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u32 p);
extern u8 func_02025c5c(u32 p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

u8 func_0201e28c(u8 *param_1)
{
    u32 st = 364;
    u8 *q = param_1 + 256;
    u8 *a;
    *(u16 *)(q + 82) = (u16)st;
    a = param_1 + 147;
    SwapByte(5, (vu8 *)a);
    func_020266f8((u32)param_1);
    return func_02025c5c((u32)param_1);
}
