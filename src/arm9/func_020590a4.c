#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u32 func_020256a0(u8 *p);
extern void func_0202c0ec(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020590a4(u8 *param_1)
{
    s16 k;
    u8 *q;
    k = 122;
    q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    SwapByte(1, (vu8 *)(param_1 + 151));
    func_02026bac(param_1);
    func_020256a0(param_1);
    func_0202c0ec(param_1);
}
