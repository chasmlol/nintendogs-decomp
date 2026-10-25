#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *);
extern u8 func_020255a4(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov003_02168160(u8 *param_1)
{
    u8 uVar1;
    *(u16 *)(param_1 + 0x152) = 0xf7;
    SwapByte(10, param_1 + 147);
    SwapByte(1, param_1 + 151);
    func_02026bac(param_1);
    uVar1 = func_020255a4(param_1);
    return uVar1;
}
