#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

/* frame: 0 l28, 4 u24, 8 u20, 12 i1c, 16 u18, 20 u14 */
typedef struct { s32 l28; u32 u24; u32 u20; s32 i1c; u32 u18; u32 u14; } Fr;
typedef struct { u32 w[3]; } T3;

extern s32 func_ov004_0216e5b0(s32 a);
extern void func_02067e34(void *a, void *b, void *c);
extern s32 func_02067c30(void *a);
extern s32 func_02067898(s32 a, s32 b);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);
extern u8 *data_0215942c;
extern u16 data_0213b84c[];


/* X: the first gate (sVar1 in 4..8, 87, ea in 15..75 or 0x119..316); value in bv */
#define GATE_X(bv, sv, iv4, n)                                                       \
    {                                                                                \
        if (sv < 4) goto g30_##n;                                                    \
        if (sv > 8) goto g30_##n;                                                    \
        bv = 1;                                                                      \
        goto g70_##n;                                                                \
    g30_##n:                                                                         \
        if (sv == 0x57) {                                                            \
            bv = 1;                                                                  \
            goto g70_##n;                                                            \
        }                                                                            \
        iv4 = *(s16 *)(p + 0xea);                                                    \
        if (iv4 < 15) goto g54_##n;                                                  \
        if (iv4 > 75) goto g54_##n;                                                  \
        bv = 1;                                                                      \
        goto g70_##n;                                                                \
    g54_##n:                                                                         \
        if (iv4 < 0x119) goto g6c_##n;                                               \
        if (iv4 > 316) goto g6c_##n;                                                 \
        bv = 1;                                                                      \
        goto g70_##n;                                                                \
    g6c_##n:                                                                         \
        bv = 0;                                                                      \
    g70_##n:;                                                                        \
    }

/* Y: the second gate, value in bv (1 = keep going) */
#define GATE_Y(bv, sv, iv4, n)                                                       \
    {                                                                                \
        iv4 = *(s16 *)(p + 0xea);                                                    \
        if (iv4 < 0x478) goto y9c_##n;                                               \
        if (iv4 <= 0x47e) {                                                          \
            bv = 0;                                                                  \
            goto yd0_##n;                                                            \
        }                                                                            \
    y9c_##n:                                                                         \
        if (iv4 < 0x4c7) goto yb8_##n;                                               \
        if (iv4 <= 0x4ca) {                                                          \
            bv = 0;                                                                  \
            goto yd0_##n;                                                            \
        }                                                                            \
    yb8_##n:                                                                         \
        if (sv == 83) {                                                              \
            bv = 0;                                                                  \
            goto yd0_##n;                                                            \
        }                                                                            \
        if (sv == 84) bv = 0;                                                        \
        else bv = 1;                                                                 \
    yd0_##n:;                                                                        \
    }

/* the 0x260 / 0xfa table test and the 0xd2 swap + clamp, shared by the three copies */
#define TAIL_BODY(F_, bv, sv, iv, iv4, n)                                            \
    {                                                                                \
        iv = func_02067898(iv, iv4);                                                 \
        func_01ff832c(iv >> 6, &(F_).l28, p + 0x260, p + 0x260);                     \
        sv = *(s16 *)(p + 0xf0);                                                     \
        GATE_X(bv, sv, iv4, n##x);                                                   \
        if (bv) {                                                                    \
            bv = 0;                                                                  \
        } else {                                                                     \
            GATE_Y(bv, sv, iv4, n##y);                                               \
        }                                                                            \
        if ((bv) && (data_0213b84c[*(s16 *)(p + 0xfa)] <= data_0213b84c[6])) {       \
            *(s16 *)(p + 0xfa) = 6;                                                  \
        }                                                                            \
        {                                                                            \
            u8 one = 1;                                                              \
            iv = (*(s16 *)(*(s32 *)(p + 0x9e8) + 0x22) + 5) * 0x10000 >> 0x10;       \
            p[0xd2] = one;                                                           \
            if (iv < 0) iv = 0;                                                      \
            if (iv > 0x2710) iv = 0x2710;                                            \
            *(s16 *)(*(s32 *)(p + 0x9e8) + 0x22) = (s16)iv;                          \
        }                                                                            \
    }

void func_0202819c(u8 *p)
{
    Fr F;
    s32 iVar3;
    s32 iVar4;
    s32 bVar2;
    s16 sVar1;

    iVar3 = func_ov004_0216e5b0(*(s8 *)(p + 0x88));
    sVar1 = *(s16 *)(p + 0xf0);
    GATE_X(bVar2, sVar1, iVar4, a1);
    if (bVar2) {
        bVar2 = 0;
    } else {
        GATE_Y(bVar2, sVar1, iVar4, a2);
    }
    if (bVar2) {
        iVar4 = *(s16 *)(p + 0xea);
        if (!(iVar4 >= 0x4a5 && iVar4 <= 0x4a6) && iVar3 != 0) {
            *(T3 *)&F.i1c = *(T3 *)(iVar3 + 0xa8);
            func_02067e34(&F.i1c, p + 0x2d0, &F.l28);
            iVar4 = func_02067c30(&F.l28);
            iVar3 = iVar4 - *(s32 *)(iVar3 + 0xd8) * 2;
            if (iVar3 > 0) {
                bVar2 = 0;
                F.u24 = 0;
                if (*(u16 *)data_0215942c == 9) {
                    TAIL_BODY(F, bVar2, sVar1, iVar3, iVar4, b1);
                } else {
                    {
                        s32 q = *(s16 *)(p + 0xea);
                        if (q >= 0x480 && q <= 0x4d2) bVar2 = 1;
                    }
                    if (bVar2) {
                        TAIL_BODY(F, bVar2, sVar1, iVar3, iVar4, b2);
                    } else if (iVar3 > 0x5000) {
                        TAIL_BODY(F, bVar2, sVar1, iVar3, iVar4, b3);
                    }
                }
            } else {
                u8 one = 1;
                iVar3 = (*(s16 *)(*(s32 *)(p + 0x9e8) + 0x22) - 1) * 0x10000 >> 0x10;
                p[0xd2] = one;
                if (iVar3 < 0) iVar3 = 0;
                if (iVar3 > 0x2710) iVar3 = 0x2710;
                *(s16 *)(*(s32 *)(p + 0x9e8) + 0x22) = (s16)iVar3;
            }
            *(T3 *)(p + 0x490) = *(T3 *)&F.l28;
        }
    }
    return;
}
