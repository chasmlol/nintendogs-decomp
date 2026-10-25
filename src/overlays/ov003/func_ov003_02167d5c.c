#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u32 p);
extern u8 func_020255a4(u32 p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

u8 func_ov003_02167d5c(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 264;
    SwapByte(1, (vu8 *)(param_1 + 151));
    func_02026bac((u32)param_1);
    return func_020255a4((u32)param_1);
}
