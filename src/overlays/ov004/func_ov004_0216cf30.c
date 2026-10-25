#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_02026b88(s32 a);
extern u8 func_02025548(s32 a);

u8 func_ov004_0216cf30(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x11e;
    *(u16 *)((u8 *)param_1 + 256 + 84) = 58;
    SwapByte(1, (vu8 *)((u8 *)param_1 + 151));
    func_02026b88(param_1);
    return func_02025548(param_1);
}
