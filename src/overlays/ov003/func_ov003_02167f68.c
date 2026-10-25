#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_02026bac(s32 a);
extern u8 func_020255a4(s32 a);

u8 func_ov003_02167f68(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 338) = 0x100;
    SwapByte(1, (vu8 *)(param_1 + 0x97));
    func_02026bac(param_1);
    return func_020255a4(param_1);
}
