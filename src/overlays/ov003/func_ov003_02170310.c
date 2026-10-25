#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026938(u8 *p);
extern void func_02025b30(u8 *p);
extern void func_020340f4(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02170310(u8 *param_1)
{
    *(u16 *)((u32)(param_1 + 256) + 82) = 20;
    SwapByte(5, (vu8 *)(param_1 + 147));
    SwapByte(1, (vu8 *)(param_1 + 152));
    func_02026938(param_1);
    func_02025b30(param_1);
    func_020340f4(param_1);
}
