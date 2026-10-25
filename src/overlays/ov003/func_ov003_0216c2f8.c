#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);
extern void func_0202db24(u8 *p, s32 x);

static inline void SwapOld(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216c2f8(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x71;
    SwapOld(9, p + 0x93);
    SwapOld(9, p + 0x98);
    SwapByte(3, p + 0x97);
    func_020264f4(p);
    func_020255a4(p);
    func_02023654(p, 6, 1);
    func_0202db24(p, 6);
}
