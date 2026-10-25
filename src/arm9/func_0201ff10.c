#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_0201ff10(u8 *param_1)
{
    u8 r;
    *(vu16 *)(param_1 + 338) = 0x113;
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_02026c24(param_1);
    r = func_02025548(param_1);
    return r;
}
