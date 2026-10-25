#pragma avoid_byte strb
#include "ctx.h"

void func_02026bac(u8 *a);
void func_02025bb0(u8 *a);
void func_0202c0ec(u8 *a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02058a58(u8 *param_1)
{
    *(vu16 *)(param_1 + 338) = 268;
    SwapByte(1, (vu8 *)(param_1 + 151));
    func_02026bac(param_1);
    func_02025bb0(param_1);
    func_0202c0ec(param_1);
}
