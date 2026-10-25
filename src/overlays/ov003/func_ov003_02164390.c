#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025dd4(u32 p);
extern void func_02025d14(u32 p);

static inline void SwapByteRd1(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02164390(u32 param_1)
{
    u8 *p = (u8 *)param_1;
    *(vu16 *)(p + 0x152) = 0x156;
    *(vu16 *)(p + 0x156) = 1;
    SwapByteRd1(12, (vu8 *)(p + 0x93));
    SwapByteRd1(1, (vu8 *)(p + 0x98));
    SwapByteRd1(1, (vu8 *)(p + 0x97));
    func_02025dd4(param_1);
    func_02025d14(param_1);
    *(vu32 *)((u8 *)p + 0x948) = *(vu32 *)((u8 *)p + 0x948) | 4;
}
