#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_01ff832c(s32 a, void *b, void *c, void *d);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02024ff0(u8 *param_1, s32 param_2)
{
    u8 *q;
    if (param_1[0xac] != 0) {
        *(s32 *)(param_1 + 0x260) = (s32)(((s64)*(s32 *)(param_1 + 0x18c) * param_2 + 0x800) >> 12);
        q = param_1 + 0xac;
        *(s32 *)(param_1 + 0x264) = (s32)(((s64)*(s32 *)(param_1 + 0x190) * param_2 + 0x800) >> 12);
        *(s32 *)(param_1 + 0x268) = (s32)(((s64)*(s32 *)(param_1 + 0x194) * param_2 + 0x800) >> 12);
        SwapByte(0, (vu8 *)q); return;
    }
    func_01ff832c(param_2, param_1 + 0x18c, param_1 + 0x260, param_1 + 0x260); return;
}
