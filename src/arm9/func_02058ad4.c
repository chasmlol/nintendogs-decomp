#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025bb0(u8 *p);
extern void func_0202c0ec(u8 *p);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_02058ad4(u8 *param_1)
{
    *(u16 *)((u32)(param_1 + 256) + 82) = 268;
    SwapByte(1, param_1 + 151);
    func_02026bac(param_1);
    func_02025bb0(param_1);
    func_0202c0ec(param_1);
}
