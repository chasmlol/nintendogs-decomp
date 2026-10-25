#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov003_021662f0(u8 *param_1)
{
    *(vu16 *)(param_1 + 256 + 82) = 0x117;
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
