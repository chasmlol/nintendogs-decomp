#pragma avoid_byte strb
#include "ctx.h"

extern u16 *data_0215942c;
extern u32 *data_0214f464;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

static inline void SwapR1(vu8 *p, u32 v)
{
    *(u8 *)(p) = (u8)(v);
}

u32 func_0202f344(u8 *param_1, u32 param_2)
{
    s32 sVal;
    s32 hVal;
    s32 f;
    s32 act;
    u32 t;
    u32 sel;

    if (*data_0215942c == 0x11 && *(u8 *)(*(u8 **)(param_1 + 0x9e8) + 0x72) == 4) {
        return 0;
    }
    switch (param_2) {
    case 0:
        t = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = t;
        sel = (u16)((t << 16) >> 30);
        switch (sel) {
        case 0:
            *(s16 *)(param_1 + 0xea) = 0x225;
            return 1;
        case 1:
            *(s16 *)(param_1 + 0xea) = 0x226;
            return 1;
        case 2:
        case 3:
            break;
        default:
            goto ret0;
        }
        *(s16 *)(param_1 + 0xea) = 0x224;
        sVal = *(s16 *)(param_1 + 0xf0);
        if (sVal < 4) goto a2;
        if (sVal <= 8) {
            f = 1;
            goto j1;
        }
    a2:
        if (sVal == 87) {
            f = 1;
            goto j1;
        }
        hVal = *(s16 *)(param_1 + 0xea);
        if (hVal < 15) goto b2;
        if (hVal <= 75) {
            f = 1;
            goto j1;
        }
    b2:
        if (hVal < 281) goto b3;
        if (hVal <= 316) {
            f = 1;
            goto j1;
        }
    b3:
        f = 0;
    j1:
        if (f != 0) {
            act = 0;
            goto jt;
        }
        hVal = *(s16 *)(param_1 + 0xea);
        if (hVal < 1144) goto c2;
        if (hVal <= 1150) {
            act = 0;
            goto jt;
        }
    c2:
        if (hVal < 1223) goto c3;
        if (hVal <= 1226) {
            act = 0;
            goto jt;
        }
    c3:
        if (sVal == 83) {
            act = 0;
            goto jt;
        }
        if (sVal == 84) {
            act = 0;
            goto jt;
        }
        act = 1;
    jt:
        if (act == 0) goto ret1;
        SwapR1((vu8 *)(param_1 + 0xa8), 0);
        *(u16 *)(param_1 + 0x112) = 0;
        *(s16 *)(param_1 + 0xf0) = 11;
        SwapByte(3, (vu8 *)(param_1 + 0xa5));
    ret1:
        return 1;
    case 1:
        *(s16 *)(param_1 + 0xea) = 0x22f;
        return 1;
    case 2:
        *(s16 *)(param_1 + 0xea) = 0x233;
        return 1;
    case 3:
        *(s16 *)(param_1 + 0xea) = 0x236;
        return 1;
    case 4:
        t = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = t;
        sel = (u16)((t << 16) >> 31);
        if (sel == 0) goto c4a;
        if (sel != 1) goto ret0;
        goto c4b;
    c4a:
        *(s16 *)(param_1 + 0xea) = 0x23b;
        return 1;
    c4b:
        *(s16 *)(param_1 + 0xea) = 0x23c;
        return 1;
    case 5:
        *(s16 *)(param_1 + 0xea) = 0x243;
        return 1;
    case 6:
        *(s16 *)(param_1 + 0xea) = 0x244;
        return 1;
    case 7:
        return 0;
    case 8:
        return 0;
    default:
        goto ret0;
    }
ret0:
    return 0;
}
