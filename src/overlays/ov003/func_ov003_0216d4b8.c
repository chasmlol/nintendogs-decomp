#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(int p);
extern void func_020255a4(int p);
extern void func_0202db24(int p, int a);

/* swpb cannot be written in C; this helper holds the one asm instruction and is inlined at the call sites */
static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216d4b8(int param_1)
{
    u16 *p;
    u16 v;

    v = 0x22b;
    p = (u16 *)(param_1 + 256);
    p[41] = v;
    SwapByte(9, (vu8 *)(param_1 + 152));
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 3);
}
