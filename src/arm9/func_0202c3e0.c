#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off

extern u8 *data_0214f464;
extern u64 func_020bc14c(void);
extern void func_020bbe14(u32, s16);
extern u8 *func_020bc3c4(void);

static inline u32 InRange(u8 *p)
{
    u32 r = 0;
    s32 v = *(s16 *)(p + 0xf0);
    if (v > 12 && v < 111)
        r = 1;
    return r;
}

s32 func_0202c3e0(u8 *param_1, u32 param_2)
{
    u32 z;
    s32 iVar4;
    s32 ok;
    s8 cVar1;

    if (*(u16 *)(param_1 + 0x112) != 0) {
        return 0;
    }
    iVar4 = *(s16 *)(param_1 + 0xf0);
    switch (iVar4) {
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
        break;
    case 111:
        return 0;
    default:
        goto dflt;
    }
    cVar1 = *(s8 *)(param_1 + 0x88);
    ok = 1;
    if (cVar1 != (s32)func_020bc14c()) {
        if (cVar1 != *(s8 *)(data_0214f464 + 7)) {
            ok = 0;
        }
    }
    if (ok == 0) goto fin;
    switch (param_2) {
    case 0:
    case 3:
    default:
        func_020bbe14(5, cVar1);
        goto after;
    case 1:
        if (*(u16 *)(param_1 + 0xf2) == 0x1c) {
            func_020bbe14(11, cVar1);
        } else {
            func_020bbe14(7, cVar1);
        }
        goto after;
    case 2:
        func_020bbe14(9, cVar1);
        goto after;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        func_020bbe14(13, cVar1);
        break;
    }
after:
    if (*(s8 *)(param_1 + 0x88) == *(s8 *)(data_0214f464 + 7)) {
        u8 *q = func_020bc3c4() + 0x88;
        *(u32 *)(q + 0x6c) = 1;
    } else {
        u8 *q = func_020bc3c4() + 0x88;
        *(u32 *)(q + 0x6c) = 0;
    }
fin:
    return 0;
dflt:
    if (InRange(param_1) != 0)
        return 0;
    param_1[168] = 0;
    *(u16 *)(param_1 + 0x112) = 0;
    *(s16 *)(param_1 + 0xf0) = 111;
    param_1[165] = 0;
    param_1[163] = 0;
    return 0;
}
