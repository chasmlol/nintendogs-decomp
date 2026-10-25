#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *);
extern u8 func_02025c5c(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_0201e254(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0x16d;
    SwapByte(4, param_1 + 151);
    func_020266f8(param_1);
    uVar1 = func_02025c5c(param_1);
    return uVar1;
}
