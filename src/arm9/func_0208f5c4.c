#pragma avoid_byte strb
#include "ctx.h"

extern void func_01ffe28c(void);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0208f5c4(u8 *param_1, u8 param_2)
{
    u32 z;
    SwapByte(param_2, (vu8 *)param_1);
    z = 0;
    SwapByte(z, (vu8 *)(param_1 + 1));
    SwapByte(z, (vu8 *)(param_1 + 2));
    SwapByte(z, (vu8 *)(param_1 + 3));
    *(u32 *)(param_1 + 4) = z;
    *(u8 **)(param_1 + 8) = param_1;
    *(u8 **)(param_1 + 0xc) = param_1;
    *(u32 *)(param_1 + 0x10) = z;
    *(u32 *)(param_1 + 0x14) = z;
    *(void (**)(void))(param_1 + 0x18) = func_01ffe28c;
}
