#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 a);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216d068(u8 *param_1)
{
    *(u16 *)((u32)(param_1 + 256) + 82) = 0x25d;
    SwapByte(9, param_1 + 152);
    SwapByte(4, param_1 + 151);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 6);
}
