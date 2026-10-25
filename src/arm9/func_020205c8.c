#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_02026c24(s32 a);
extern u8 func_02025548(s32 a);

u8 func_020205c8(s32 param_1)
{
    u8 uVar1;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 104;
    SwapByte(10, (vu8 *)((u8 *)param_1 + 147));
    func_02026c24(param_1);
    uVar1 = func_02025548(param_1);
    return uVar1;
}
