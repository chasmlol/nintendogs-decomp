#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025a84(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0216f568(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x14d;
    SwapByte(8, (vu8 *)(param_1 + 147));
    SwapByte(1, (vu8 *)(param_1 + 152));
    func_02026bac(param_1);
    func_02025a84(param_1);
}
