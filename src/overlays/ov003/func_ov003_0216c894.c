#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);
extern void func_0202db24(u8 *p, s32 n);

static inline void SwapOld(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216c894(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 26;
    *(u16 *)(param_1 + 0x154) = 48;
    SwapOld(9, (vu8 *)(param_1 + 147));
    SwapOld(9, (vu8 *)(param_1 + 152));
    SwapByte(3, (vu8 *)(param_1 + 151));
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 9, 1);
    func_0202db24(param_1, 1);
}
