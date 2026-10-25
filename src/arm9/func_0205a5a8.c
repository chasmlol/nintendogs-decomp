#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_0202675c(s32 a);
extern u8 func_02025c0c(s32 a);

u8 func_0205a5a8(s32 param_1)
{
    u8 uVar1;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 18;
    SwapByte(7, (vu8 *)((u8 *)param_1 + 147));
    func_0202675c(param_1);
    uVar1 = func_02025c0c(param_1);
    return uVar1;
}
