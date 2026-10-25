#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(int a);
extern void func_02025bb0(int a);
extern void func_02023654(int a, int b, int c);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0205a4d8(int param_1)
{
    u32 v = 0x13;
    u16 *p = (u16 *)(param_1 + 0x100);
    p[41] = v;
    SwapByte(7, (vu8 *)(param_1 + 0x93));
    SwapByte(9, (vu8 *)(param_1 + 0x98));
    func_02026aac(param_1);
    func_02025bb0(param_1);
    func_02023654(param_1, 0x37, 1);
}
