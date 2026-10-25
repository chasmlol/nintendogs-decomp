#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(s32 p);
extern void func_020256a0(s32 p);
extern void func_0202c0ec(s32 p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02059158(s32 param_1)
{
    *(u16 *)((u32)((u8 *)param_1 + 256) + 82) = 0x51;
    SwapByte(1, (vu8 *)(param_1 + 0x97));
    func_02026bac(param_1);
    func_020256a0(param_1);
    func_0202c0ec(param_1);
}
