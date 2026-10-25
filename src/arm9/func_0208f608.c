#pragma avoid_byte strb
#include "ctx.h"

u32 func_020038b8(u32 *a, u32 b);
void func_01ffe28c(void);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0208f608(u32 *param_1)
{
    u8 *base;
    u32 z;

    base = (u8 *)func_020038b8(param_1, 28);
    SwapByte(255, (vu8 *)base);
    z = 0;
    SwapByte(z, (vu8 *)(base + 1));
    SwapByte(z, (vu8 *)(base + 2));
    SwapByte(z, (vu8 *)(base + 3));
    *(u32 *)(base + 4) = z;
    *(u32 *)(base + 8) = (u32)base;
    *(u32 *)(base + 12) = (u32)base;
    *(u32 *)(base + 16) = z;
    *(u32 *)(base + 20) = z;
    *(u32 *)(base + 24) = (u32)func_01ffe28c;
}
