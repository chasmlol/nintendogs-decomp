#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_020264d4(s32 a);
extern u8 func_020255a4(s32 a);
extern void func_0202db24(s32 a, s32 b);

void func_ov003_02169f6c(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x1d9;
    SwapByte(3, (vu8 *)((u8 *)param_1 + 145));
    func_020264d4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 7);
}
