#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264d4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, u32 v);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02169e88(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x1ad;
    SwapByte(9, (vu8 *)(param_1 + 0x93));
    SwapByte(3, (vu8 *)(param_1 + 0x92));
    func_020264d4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 1);
}
