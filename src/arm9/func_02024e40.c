#pragma avoid_byte strb
#include "ctx.h"

extern void func_01ff832c(s32 a, u8 *b, u8 *c, u8 *d);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

static inline u8 SwapP(vu8 *p, u32 v)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u32 func_02024e40(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 ok;
    if (*(s16 *)(param_1 + 256 + 98) != *(s16 *)(param_1 + 256 + 82)) {
        goto zero;
    }
    if (*(s16 *)(param_1 + 256 + 78) > param_2) {
        goto zero;
    }
    ok = 1;
    goto have;
zero:
    ok = 0;
have:
    if (ok == 0) {
        goto fail;
    }
    if (*(u8 *)(param_1 + 0xac) != 0) {
        *(s32 *)(param_1 + 0x260) = FX_Mul(*(s32 *)(param_1 + 0x18c), param_3);
        *(s32 *)(param_1 + 0x264) = FX_Mul(*(s32 *)(param_1 + 0x190), param_3);
        *(s32 *)(param_1 + 0x268) = FX_Mul(*(s32 *)(param_1 + 0x194), param_3);
        SwapP((vu8 *)(param_1 + 0xac), 0);
        goto done;
    }
    func_01ff832c(param_3, param_1 + 0x18c, param_1 + 0x260, param_1 + 0x260);
done:
    return 1;
fail:
    return 0;
}
