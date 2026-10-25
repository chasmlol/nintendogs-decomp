#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_02025df4(s32 a);
extern u32 func_02025918(s32 a);

void func_ov003_0216f62c(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 332;
    SwapByte(14, (vu8 *)((u8 *)param_1 + 147));
    func_02025df4(param_1);
    func_02025918(param_1);
    SwapByte(2, (vu8 *)((u8 *)param_1 + 178)); return;
}
