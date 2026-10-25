#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_020264f4(int a);
extern void func_020255a4(int a);
extern void func_02023654(int a, int b, int c);
extern void func_0202db24(int a, int b);

void func_ov003_0216ae18(int param_1)
{
    u16 k = 35;
    u8 *q = (u8 *)param_1 + 256;
    *(u16 *)(q + 82) = k;
    SwapByte(4, (u8 *)param_1 + 151);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 0x17, 1);
    func_0202db24(param_1, 1);
}
