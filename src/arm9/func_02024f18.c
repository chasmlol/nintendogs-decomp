#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_01ff832c(s32 a, u8 *b, u8 *c, u8 *d);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u32 func_02024f18(u8 *param_1, s32 param_2, s32 param_3)
{
    int bVar2;
    s32 zero;
    if (*(s16 *)(param_1 + 0x162) == *(s16 *)(0x152 + param_1) && *(s16 *)(param_1 + 0x14e) >= param_2) {
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
    if (bVar2 == 0) {
        goto zero_ret;
    }
    if (param_1[0xac] != 0) {
        *(s32 *)(param_1 + 0x260) = (((s64)*(s32 *)(param_1 + 0x18c) * param_3 + 0x800) >> 12);
        *(s32 *)(param_1 + 0x264) = (((s64)*(s32 *)(0x190 + param_1) * param_3 + 0x800) >> 12);
        *(s32 *)(param_1 + 0x268) = (((s64)*(s32 *)(param_1 + 0x194) * param_3 + 0x800) >> 12);
        zero = 0;
        SwapByte(zero, (vu8 *)(172 + param_1));
    } else {
        func_01ff832c(param_3, param_1 + 0x18c, param_1 + 0x260, param_1 + 0x260);
    }
    return 1;
zero_ret:
    return 0;
}
