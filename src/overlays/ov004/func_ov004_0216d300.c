#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025bb0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov004_0216d300(u8 *param_1)
{
    u8 uVar1;

    *(u16 *)(param_1 + 0x152) = 0x151;
    SwapByte(10, (vu8 *)(param_1 + 147));
    SwapByte(1, (vu8 *)(param_1 + 152));
    func_02026bac(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
