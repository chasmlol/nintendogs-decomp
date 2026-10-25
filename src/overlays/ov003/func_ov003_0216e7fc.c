#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

u8 func_ov003_0216e7fc(u8 *param_1)
{
    *(vu16 *)(param_1 + 0x152) = 0x27;
    SwapByte(9, (vu8 *)(param_1 + 147));
    func_02026c24(param_1);
    return func_02025548(param_1);
}
