#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 v);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0216ac08(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x26;
    SwapByte(4, (vu8 *)(p + 0x97));
    func_020264f4(p);
    func_020255a4(p);
    func_0202db24(p, 1);
}
