#pragma avoid_byte strb
#include "ctx.h"

void func_02026c24(u8 *a);
void func_02025548(u8 *a);
void func_02023654(u8 *a, s32 b, s32 c);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0201fac8(u8 *param_1)
{
    *(vu16 *)(param_1 + 0x152) = 95;
    SwapByte(2, param_1 + 151);
    func_02026c24(param_1);
    func_02025548(param_1);
    func_02023654(param_1, 0x2e, 2);
}
