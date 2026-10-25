#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern void func_02025c5c(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0205a708(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 18;
    SwapByte(7, (vu8 *)(param_1 + 147));
    func_0202675c(param_1);
    func_02025c5c(param_1);
    func_02023654(param_1, 54, 1);
}
