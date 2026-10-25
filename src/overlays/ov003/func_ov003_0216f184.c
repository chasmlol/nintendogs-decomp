#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_02025e34(s32 a);
extern u8 func_02025bb0(s32 a);

u8 func_ov003_0216f184(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x167;
    SwapByte(2, (vu8 *)((u8 *)param_1 + 147));
    func_02025e34(param_1);
    return func_02025bb0(param_1);
}
