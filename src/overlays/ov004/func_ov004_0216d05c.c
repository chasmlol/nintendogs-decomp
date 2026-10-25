#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026b88(u8 *p);
extern u8 func_020254ec(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

u8 func_ov004_0216d05c(u8 *param_1)
{
    *(vu16 *)(param_1 + 0x152) = 0x17e;
    SwapByte(5, (vu8 *)(param_1 + 147));
    func_02026b88(param_1);
    return func_020254ec(param_1);
}
