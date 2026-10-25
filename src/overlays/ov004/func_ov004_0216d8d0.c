#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *);
extern u8 func_02025548(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov004_0216d8d0(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 8;
    SwapByte(3, param_1 + 147);
    func_02026bac(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
