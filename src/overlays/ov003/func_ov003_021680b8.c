#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_020255a4(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov003_021680b8(u8 *param_1)
{
    u8 uVar1;
    *(s16 *)(param_1 + 0x152) = 0xfa;
    (void)SwapByte(1, (vu8 *)(param_1 + 0x97));
    func_02026bac(param_1);
    uVar1 = func_020255a4(param_1);
    return uVar1;
}
