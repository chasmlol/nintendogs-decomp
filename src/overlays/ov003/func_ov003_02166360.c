#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u32 p);
extern u8 func_020255a4(u32 p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

u8 func_ov003_02166360(u8 *param_1)
{
    *(s16 *)(param_1 + 256 + 82) = (s16)0x115;
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_020264f4((u32)param_1);
    return func_020255a4((u32)param_1);
}
