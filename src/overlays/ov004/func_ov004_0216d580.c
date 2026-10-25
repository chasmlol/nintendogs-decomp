#pragma avoid_byte strb
#include "ctx.h"

extern void func_020268dc(u8 *p);
extern void func_02025bb0(u8 *p);
extern void func_ov004_0216c504(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov004_0216d580(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x15;
    SwapByte(5, (vu8 *)(param_1 + 0x93));
    func_020268dc(param_1);
    func_02025bb0(param_1);
    func_ov004_0216c504(param_1);
}
