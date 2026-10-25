#pragma avoid_byte strb
#include "ctx.h"

static inline u32 SwapByteInPlace(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
    return v;
}

void func_020bd868(u8 *param_1)
{
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) & ~1;
    SwapByteInPlace(*(u8 *)(param_1 + 1) & ~1, (vu8 *)(param_1 + 1)); return;
}
