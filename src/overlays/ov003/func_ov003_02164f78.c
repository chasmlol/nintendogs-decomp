#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025e34(int a);
extern void func_02025548(int a);
extern void func_02034198(int a);
extern void func_ov003_0216df24(int a);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02164f78(int param_1)
{
    u32 v = 0;
    u16 *p = (u16 *)(param_1 + 0x100);
    p[41] = v;
    SwapByte(7, (vu8 *)(param_1 + 0x93));
    SwapByte(9, (vu8 *)(param_1 + 0x98));
    func_02025e34(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    func_ov003_0216df24(param_1);
}
