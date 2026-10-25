#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_020264f4(s32 a);
extern u8 func_020255a4(s32 a);

u8 func_ov005_021658ac(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x2d;
    SwapByte(5, (vu8 *)((u8 *)param_1 + 147));
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
