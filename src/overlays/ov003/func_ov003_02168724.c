#pragma avoid_byte strb
#include "ctx.h"

void func_020264f4(int a);
void func_020255a4(int a);
void func_0202db24(int a, int b);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02168724(int param_1)
{
    s16 k;
    u8 *q;
    k = 118;
    q = (u8 *)param_1 + 256;
    *(vu16 *)(q + 82) = k;
    SwapByte(1, (vu8 *)(param_1 + 151));
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 5);
}
