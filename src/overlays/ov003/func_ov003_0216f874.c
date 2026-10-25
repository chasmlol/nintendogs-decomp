#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *p);
extern void func_02025974(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

static inline u32 SwapRet(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
    return v;
}

void func_ov003_0216f874(u8 *param_1)
{
    *(u16 *)((u32)(param_1 + 256) + 82) = 0x142;
    SwapByte(7, (vu8 *)(param_1 + 147));
    SwapByte(5, (vu8 *)(param_1 + 152));
    SwapByte(1, (vu8 *)(param_1 + 171));
    func_020266f8(param_1);
    func_02025974(param_1);
    SwapRet(2, (vu8 *)(param_1 + 178)); return;
}
