#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(int p);
extern void func_02025bb0(int p);
extern void func_02023654(int p, int a, int b);

/* swpb cannot be written in C; this helper holds the one asm instruction and is inlined at the call sites */
static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0205a9e0(int param_1)
{
    u16 *p;
    u16 v;

    v = 0x13;
    p = (u16 *)(param_1 + 256);
    p[41] = v;
    SwapByte(5, (vu8 *)(param_1 + 147));
    SwapByte(9, (vu8 *)(param_1 + 152));
    func_02026aac(param_1);
    func_02025bb0(param_1);
    func_02023654(param_1, 0x3d, 1);
}
