#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *);
extern u8 func_02025bb0(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov006_02165c34(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0x11;
    SwapByte(5, param_1 + 147);
    func_020266f8(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
