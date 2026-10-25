#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *);
extern u8 func_02025bb0(u8 *);
extern void func_0202c0ec(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02058a94(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x10d;
    SwapByte(1, param_1 + 151);
    func_02026bac(param_1);
    func_02025bb0(param_1);
    func_0202c0ec(param_1);
}
