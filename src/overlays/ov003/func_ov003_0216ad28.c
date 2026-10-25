#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern void func_020264f4(s32 a);
extern u8 func_020255a4(s32 a);
extern void func_02023654(s32 a, s32 b, s32 c);
extern void func_0202db24(s32 a, s32 b);

void func_ov003_0216ad28(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x37;
    SwapByte(4, (vu8 *)((u8 *)param_1 + 151));
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 0x18, 2);
    func_0202db24(param_1, 3);
}
