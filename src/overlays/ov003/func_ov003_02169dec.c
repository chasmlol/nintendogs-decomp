#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264d4(s32 p);
extern void func_020255a4(s32 p);
extern void func_0202db24(s32 p, s32 a);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02169dec(s32 param_1)
{
    *(u16 *)((u32)((u8 *)param_1 + 256) + 82) = 0x1b9;
    SwapByte(13, (vu8 *)(param_1 + 147));
    SwapByte(3, (vu8 *)(param_1 + 146));
    func_020264d4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 3);
}
