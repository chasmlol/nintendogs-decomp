#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264d4(int a);
extern void func_020255a4(int a);
extern void func_0202db24(int a, int b);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216a170(int param_1)
{
    u32 v = 0x1a4;
    u16 *p = (u16 *)(param_1 + 0x100);
    p[41] = v;
    SwapByte(9, (vu8 *)(param_1 + 0x93));
    SwapByte(3, (vu8 *)(param_1 + 0x91));
    func_020264d4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 0);
}
