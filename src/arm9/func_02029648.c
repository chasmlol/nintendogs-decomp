#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_0214f464;
extern u8 *data_0214f460;

extern s32 func_020bc14c(void);
extern s32 func_020aaec4(u8 *g, u8 *p, s32 v);

s32 func_02029648(u8 *p)
{
    s32 cv;
    s32 iv3;
    s32 b;

    if (((*(u16 *)0x04000304 & 0x8000) >> 15) != 0) {
        goto fail;
    }
    cv = *(s8 *)(p + 0x88);
    if (cv != func_020bc14c()) {
        goto fail;
    }
    if (cv != *(s8 *)(data_0214f464 + 7)) {
        goto fail;
    }
    iv3 = *(s32 *)(*(u8 **)(p + 0x9e8) + 8);
    b = FX_Mul(iv3, iv3);
    if (func_020aaec4(data_0214f460, p + 780 + *(s32 *)(p + 0x484) * 12, FX_Mul(b, 820)) != 0) {
        *(s16 *)(p + 234) = (s16)(*(s32 *)(p + 0x484) + 540);
        return 1;
    }
    iv3 = *(s32 *)(*(u8 **)(p + 0x9e8) + 8);
    b = FX_Mul(iv3, iv3);
    if (func_020aaec4(data_0214f460, p + 804 + *(s32 *)(p + 0x484) * 12, FX_Mul(b, 410)) != 0) {
        *(s16 *)(p + 234) = (s16)(*(s32 *)(p + 0x484) + 542);
        return 1;
    }
    iv3 = *(s32 *)(*(u8 **)(p + 0x9e8) + 8);
    b = FX_Mul(iv3, iv3);
    if (func_020aaec4(data_0214f460, p + 864, FX_Mul(b, 2050)) != 0) {
        *(s16 *)(p + 234) = (s16)(*(s32 *)(p + 0x484) + 531);
        return 1;
    }
fail:
    return 0;
}
