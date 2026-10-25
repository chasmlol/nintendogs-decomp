#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02039588(u8 *p);
extern u32 func_02027708(u32 v);
extern void func_0203e908(u8 *p, s32 v);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u32 func_02058728(u8 *param_1, u32 param_2)
{
    s32 iVar1 = func_02039588(param_1);
    if (iVar1 == 0 && param_2 != 0) {
        u32 r = func_02027708(param_2);
        SwapByte(r, (vu8 *)(param_1 + 0x8a));
        func_0203e908(param_1, 0x303);
        return 1;
    }
    return 0;
}
