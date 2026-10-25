#pragma avoid_byte strb
#include "ctx.h"
extern void func_01ff832c(s32 a, u8 *b, u8 *c, u8 *d);
u32 func_0202508c(u8 *param_1, s32 param_2, s32 param_3, s32 param_4)
{
    s16 x;
    s16 y;
    u32 ok;
    u32 zero;
    u32 old;
    u8 *t;
    x = *(s16 *)(param_1 + 0x152);
    y = *(s16 *)(param_1 + 0x162);
    if (y != x) goto zA;
    if (*(s16 *)(param_1 + 0x14e) >= param_2) {
        ok = 1;
        goto tA;
    }
zA:
    ok = 0;
tA:
    if (ok == 0) goto ret0;
    if (y != x) goto zB;
    if (*(s16 *)(param_1 + 0x14e) <= param_3) {
        ok = 1;
        goto tB;
    }
zB:
    ok = 0;
tB:
    if (ok == 0) goto ret0;
    if (*(u8 *)(param_1 + 0xac) == 0) goto callB;
    *(s32 *)(param_1 + 0x260) = (s32)(((s64)*(s32 *)(param_1 + 0x1a4) * param_4 + 0x800) >> 12);
    *(s32 *)(param_1 + 0x264) = (s32)(((s64)*(s32 *)(param_1 + 0x1a8) * param_4 + 0x800) >> 12);
    *(s32 *)(param_1 + 0x268) = (s32)(((s64)*(s32 *)(param_1 + 0x1ac) * param_4 + 0x800) >> 12);
    zero = 0;
    t = param_1 + 172;
    *(u8 *)(t) = (u8)(zero);
    goto done;
callB:
    func_01ff832c(param_4, param_1 + 0x1a4, param_1 + 0x260, param_1 + 0x260);
done:
    return 1;
ret0:
    return 0;
}
