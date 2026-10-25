#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025e34(u32 p);
extern u8 func_02025bb0(u32 p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

u8 func_ov003_0216f1f4(u8 *param_1)
{
    *(s16 *)(param_1 + 256 + 82) = (s16)0x165;
    SwapByte(2, (vu8 *)(param_1 + 147));
    func_02025e34((u32)param_1);
    return func_02025bb0((u32)param_1);
}
