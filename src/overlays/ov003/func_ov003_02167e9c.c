#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_020255a4(u8 *a);

static inline void SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
}

u8 func_ov003_02167e9c(u8 *param_1)
{
    u16 k = 0x103;
    vu16 *q = (vu16 *)(param_1 + 256);
    q[41] = k;
    SwapByte(10, (vu8 *)(param_1 + 147));
    SwapByte(1, (vu8 *)(param_1 + 151));
    func_02026bac(param_1);
    return func_020255a4(param_1);
}
