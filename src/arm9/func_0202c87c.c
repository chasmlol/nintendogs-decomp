#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off

extern u8 *data_0214f464;
extern s16 data_0213bd6c[][9];
extern s16 data_0213bb00[][9];
extern void func_0202d6ec(void *p);
extern s32 func_0202dc50(void *p, s32 a, s32 b, u16 c, u8 d, s32 e);
extern s32 func_020bc14c(void);
extern void func_020bbe14(s32 a, s32 b);
extern u8 *func_020bc3c4(void);

#define RD8(p, o) (*(s8 *)((u8 *)(p) + (o)))
#define RD16(p, o) (*(s16 *)((u8 *)(p) + (o)))
#define CLEARA(p)                                   \
    do {                                            \
        *((u8 *)(p) + 0xa8) = 0;                    \
        *(u16 *)((u8 *)(p) + 0x112) = 0;            \
        RD16(p, 0xf0) = 111;                        \
        *((u8 *)(p) + 0xa5) = 0;                    \
        *((u8 *)(p) + 0xa3) = 0;                    \
    } while (0)
#define CLEARB(p) CLEARA(p)

s32 func_0202c87c(u8 *p, s32 param_2)
{
    s32 iVar5;
    s32 bVar3;
    s32 cVar1;
    s32 r;
    s32 fl;
    s32 iw;
    s32 spare;
    s16 row;
    u8 *obj;

    if (*(u16 *)(p + 0x112) != 0) {
        return 0;
    }
    iVar5 = RD16(p, 0xf0);
    switch (iVar5) {
    case 111:
        return 0;
    case 1:
        if (RD8(p, 0x88) != *(s8 *)(data_0214f464 + 7)) {
            func_0202d6ec(p);
            return 1;
        }
        CLEARA(p);
        return 0;
    case 2:
    case 3:
        CLEARA(p);
        return 0;
    case 4:
        cVar1 = RD8(p, 0x88);
        bVar3 = 1;
        r = func_020bc14c();
        if (cVar1 != r && cVar1 != *(s8 *)(data_0214f464 + 7)) {
            bVar3 = 0;
        }
        if (bVar3 == 0) {
            goto ret_ec;
        }
        switch (param_2) {
        default:
            func_020bbe14(5, cVar1);
            break;
        case 1:
            if (*(u16 *)((u8 *)p + 0xf2) == 0x1c) {
                func_020bbe14(11, cVar1);
            } else {
                func_020bbe14(7, cVar1);
            }
            break;
        case 2:
            func_020bbe14(9, cVar1);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            func_020bbe14(13, cVar1);
            break;
        }
        if (RD8(p, 0x88) == *(s8 *)(data_0214f464 + 7)) {
            obj = func_020bc3c4() + 136;
            *(s32 *)(obj + 0x6c) = 1;
        } else {
            obj = func_020bc3c4() + 136;
            *(s32 *)(obj + 0x6c) = 0;
        }
    ret_ec:
        RD16(p, 0xea) = param_2 + 0xec;
        return 1;
    case 5:
        RD16(p, 0xea) = param_2 + 0x122;
        CLEARB(p);
        return 1;
    case 6:
        RD16(p, 0xea) = param_2 + 0x12b;
        CLEARB(p);
        return 1;
    case 7:
        RD16(p, 0xea) = param_2 + 0x134;
        CLEARB(p);
        return 1;
    case 8:
        RD16(p, 0xea) = param_2 + 0x119;
        CLEARB(p);
        return 1;
    case 10:
        row = p[0xa5];
        RD16(p, 0xea) = data_0213bd6c[row][param_2];
        return 1;
    case 11:
        row = p[0xa5];
        r = data_0213bb00[row][param_2];
        if (r != -1) {
            RD16(p, 0xea) = r;
            r = 1;
        } else {
            r = 0;
        }
        if (r != 0) {
            return 1;
        }
        CLEARB(p);
        return 1;
    default:
        goto dflt;
    }
dflt:
    fl = 0;
    iw = RD16(p, 0xf0);
    if (iw > 12 && iw < 111) {
        fl = 1;
    }
    if (fl != 0) {
        p[0xa8] = 0;
        return func_0202dc50(p, 1, param_2, (u16)(RD16(p, 0xf0) - 12), p[0xa5], 1);
    }
    CLEARA(p);
    return 0;
}
