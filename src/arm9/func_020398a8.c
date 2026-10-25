#pragma avoid_byte strb
#include "ctx.h"

extern void func_02039a28(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);

static inline u8 SwapAt(u8 *base)
{
    vu8 *p;
    u32 v;
    u8 old;
    p = (__typeof__(p))((u32)(base) + (151));
    v = 5;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020398a8(u8 *p)
{
    SwapAt(p);
    func_02039a28(p, 2, 5, 3, 20, 300);
}
