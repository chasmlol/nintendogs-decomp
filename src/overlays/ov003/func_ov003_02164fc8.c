#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025e34(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02034198(u8 *p);
extern void func_ov003_0216df24(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02164fc8(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0;
    SwapByte(7, (vu8 *)(param_1 + 0x93));
    SwapByte(9, (vu8 *)(param_1 + 0x98));
    SwapByte(1, (vu8 *)(param_1 + 0x97));
    func_02025e34(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    func_ov003_0216df24(param_1);
}
