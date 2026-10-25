#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u32 p);
extern void func_02025974(u32 p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

static inline u32 SwapRet(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
    return v;
}

void func_ov003_0216f988(u32 param_1)
{
    u32 k = 317;

    *(u16 *)((u32)(param_1 + 256) + 82) = (u16)k;
    SwapByte(7, (vu8 *)(param_1 + 147));
    SwapByte(5, (vu8 *)(param_1 + 152));
    SwapByte(1, (vu8 *)(param_1 + 171));
    func_0202675c(param_1);
    func_02025974(param_1);
    SwapRet(2, (vu8 *)(param_1 + 178)); return;
}
