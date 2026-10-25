#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026994(u8 *p);
extern u8 func_02025bb0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov004_0216d4a4(u8 *param_1)
{
    *(vu16 *)(param_1 + 0x152) = 0x142;
    SwapByte(1, param_1 + 0xab);
    func_02026994(param_1);
    return func_02025bb0(param_1);
}
