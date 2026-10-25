#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern u8 func_02025c5c(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_0205a5dc(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0x12;
    (void)SwapByte(7, (vu8 *)(param_1 + 0x93));
    func_0202675c(param_1);
    uVar1 = func_02025c5c(param_1);
    return uVar1;
}
