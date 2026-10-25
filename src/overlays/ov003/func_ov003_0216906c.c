#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_020264f4(s32 p);
extern u8 func_020255a4(s32 p);
extern void func_0202db24(s32 p, s32 a);

void func_ov003_0216906c(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 25;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 6;
    SwapByte(1, (vu8 *)((u8 *)param_1 + 151));
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 1);
}
