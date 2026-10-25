#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(u8 *p);
extern void func_02025bb0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02170024(u8 *param_1)
{
    *(u16 *)((u32)(param_1 + 256) + 82) = 19;
    SwapByte(5, (vu8 *)(param_1 + 147));
    SwapByte(6, (vu8 *)(param_1 + 152));
    SwapByte(2, (vu8 *)(param_1 + 151));
    func_02026aac(param_1);
    func_02025bb0(param_1);
}
