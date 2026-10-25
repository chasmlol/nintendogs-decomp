#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0205a1d0(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 8;
    SwapByte(5, (vu8 *)(param_1 + 0x93));
    func_02026494(param_1);
    func_02025548(param_1);
    func_02023654(param_1, 0x39, 1);
}
