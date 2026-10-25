#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(int a);
extern void func_02025548(int a);
extern void func_02034198(int a);
extern void func_02023654(int a, int b, int c);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_021652a8(int param_1)
{
    u32 v = 0x143;
    u16 *p = (u16 *)(param_1 + 0x100);
    p[41] = v;
    SwapByte(5, (vu8 *)(param_1 + 0x93));
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    func_02023654(param_1, 0x25, 2);
}
