#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025df4(u8 *);
extern void func_02025918(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0216f738(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x148;
    SwapByte(5, param_1 + 147);
    func_02025df4(param_1);
    func_02025918(param_1);
    SwapByte(2, param_1 + 178); return;
}
