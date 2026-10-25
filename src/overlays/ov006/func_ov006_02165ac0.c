#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u32 p);
extern u8 func_02025bb0(u32 p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

u8 func_ov006_02165ac0(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 17;
    SwapByte(1, (vu8 *)(param_1 + 171));
    func_020266f8((u32)param_1);
    return func_02025bb0((u32)param_1);
}
