#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025758(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_02059fb4(u8 *param_1)
{
    u8 old;
    *(u16 *)(param_1 + 0x152) = 183;
    old = SwapByte(21, (vu8 *)(param_1 + 0x93));
    (void)old;
    func_02026bac(param_1);
    return func_02025758(param_1);
}
