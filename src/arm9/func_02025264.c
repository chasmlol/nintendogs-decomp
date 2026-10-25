#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_01ff832c(s32 a, void *b, void *c, void *d);

u32 func_02025264(u8 *param_1, s32 param_2, s32 param_3)
{
    s32 bVar2;
    u32 z;
    u8 old;
    vu8 *q;
    if (*(s16 *)(param_1 + 0x162) != *(s16 *)(param_1 + 0x152)) {
        goto zero;
    }
    if (*(s16 *)(param_1 + 0x14e) >= param_2) {
        bVar2 = 1;
        goto test;
    }
zero:
    bVar2 = 0;
test:
    if (bVar2 == 0) {
        goto ret0;
    }
    if (param_1[0xac] != 0) {
        *(s32 *)(param_1 + 0x260) = (s32)(((s64)*(s32 *)(param_1 + 0x1a4) * param_3 + 0x800) >> 12);
        *(s32 *)(param_1 + 0x264) = (s32)(((s64)*(s32 *)(param_1 + 0x1a8) * param_3 + 0x800) >> 12);
        *(s32 *)(param_1 + 0x268) = (s32)(((s64)*(s32 *)(param_1 + 0x1ac) * param_3 + 0x800) >> 12);
        z = 0;
        q = (vu8 *)(param_1 + 0xac);
        *(u8 *)(q) = (u8)(z);
    } else {
        func_01ff832c(param_3, param_1 + 0x1a4, param_1 + 0x260, param_1 + 0x260);
    }
    return 1;
ret0:
    return 0;
}
