#include "ctx.h"

typedef void (*StateFn)(u8 *p);

static inline u8 SwapByte(vu8 *p, u32 v)
{
    u8 old;
    asm { swpb old, v, [p] }
    return old;
}

static inline void SwapR0(vu8 *p, u32 v)
{
    asm { swpb r0, v, [p] }
}

static inline void SwapR1(vu8 *p, u32 v)
{
    asm { swpb r1, v, [p] }
}

static inline void SwapR2(vu8 *p, u32 v)
{
    asm { swpb r2, v, [p] }
}

extern s32 data_0213a8d4[];
extern u8 data_0214f464[];
extern s8 data_0213cde7[];
extern s32 data_0213b7d0[];
extern StateFn data_021376c4[];
extern s8 data_021371d4[];
extern u8 data_02136c78[];
extern u8 data_02136c7a[];

void func_0203b794(u8 *p)
{
    s32 i;
    s32 st;
    s32 ea;
    s32 bv;
    s32 t;
    s32 uVar5;
    s8 *ap;
    u8 *bp;

    if (*(s16 *)(p + 0xec) == *(s16 *)(p + 0xea)) {
        return;
    }
    *(u16 *)(p + 0xfc) = 0;
    i = 0;
    do {
        *(s32 *)(p + i * 4 + 0x464) = 0;
        i = (s16)(i + 1);
    } while (i < 8);
    *(s16 *)(p + 0xee) = *(s16 *)(p + 0xec);
    *(s16 *)(p + 0xec) = *(s16 *)(p + 0xea);
    st = *(s16 *)(p + 0xf0);
    bv = 0;
    if (st > 12 && st < 111) {
        bv = 1;
    }
    if (bv != 0) {
        u32 uVar2 = (u16)(st - 12);
        s32 a = *(u8 *)(p + 0xa5);
        if (uVar2 < 79) {
            goto LA;
        }
        if (uVar2 < 99) {
            t = a * 10 + data_0213a8d4[79];
            goto LB;
        }
    LA:
        t = a * 10 + data_0213a8d4[uVar2];
    LB:
        if (t != 0 && *(s16 *)(p + 0xee) == *(s16 *)(t + 8)) {
            SwapR1((vu8 *)(p + 0xa8), 0);
            *(u16 *)(p + 0x112) = 0;
            *(s16 *)(p + 0xf0) = 111;
            SwapR2((vu8 *)(p + 0xa5), 0);
            SwapR2((vu8 *)(p + 0xa3), 0);
            if (*(s8 *)(p + 0x88) == *(s8 *)(*(u8 **)data_0214f464 + 7) &&
                *(u8 *)(t + 4) == 0) {
                s32 ss = *(s16 *)(p + 0xf0);
                s32 f1;
                uVar5 = (u8)(s16)data_0213b7d0[data_0213cde7[*(s16 *)(p + 0x152) * 8]];
                if (ss >= 4 && ss <= 8) {
                    f1 = 1;
                    goto J1;
                }
                if (ss == 87) {
                    f1 = 1;
                    goto J1;
                }
                ea = *(s16 *)(p + 0xea);
                if (ea >= 15 && ea <= 75) {
                    f1 = 1;
                    goto J1;
                }
                if (ea >= 281 && ea <= 316) {
                    f1 = 1;
                    goto J1;
                }
                f1 = 0;
            J1:
                if (f1) {
                    ss = 0;
                } else {
                    ea = *(s16 *)(p + 0xea);
                    if (ea >= 0x478 && ea <= 0x47e) {
                        ss = 0;
                    } else if (ea >= 0x4c7 && ea <= 0x4ca) {
                        ss = 0;
                    } else if (ss == 83) {
                        ss = 0;
                    } else if (ss == 84) {
                        ss = 0;
                    } else {
                        ss = 1;
                    }
                }
                if (ss) {
                    SwapR0((vu8 *)(p + 0xa8), 0);
                    *(u16 *)(p + 0x112) = 0;
                    *(s16 *)(p + 0xf0) = 11;
                    SwapR0((vu8 *)(p + 0xa5), uVar5);
                }
                *(u16 *)(p + 0x13e) = 10;
            }
        }
    }
    *(u16 *)(p + 0x154) = 0;
    *(u16 *)(p + 0x156) = 0;
    *(u16 *)(p + 0x158) = 0;
    SwapR2((vu8 *)(p + 0x8f), 0);
    SwapR2((vu8 *)(p + 0x90), 0);
    SwapR2((vu8 *)(p + 0x91), 0);
    SwapR2((vu8 *)(p + 0x92), 0);
    SwapR2((vu8 *)(p + 0x93), 0);
    SwapR2((vu8 *)(p + 0x97), 0);
    SwapR2((vu8 *)(p + 0x98), 0);
    SwapR2((vu8 *)(p + 0x99), 0);
    SwapR2((vu8 *)(p + 0x9e), 0);
    *(u16 *)(p + 0x12e) = 0;
    *(s32 *)(p + 0x25c) = -328;
    SwapR0((vu8 *)(p + 0xab), 0);
    SwapR0((vu8 *)(p + 0xa4), 0);
    *(s32 *)(p + 0x948) = 0;
    SwapR0((vu8 *)(p + 0xb9), 0);

    {
        s32 b2;
        s32 eb;
        s32 ee;
        eb = *(s16 *)(p + 0xea);
        if (eb >= 0 && eb <= 227) {
            b2 = 1;
            goto K1;
        }
        b2 = 0;
    K1:
        if (b2 != 0) {
            b2 = 1;
            goto KE;
        }
        if (eb < 792 || eb > 827) {
            goto KZ;
        }
        ee = *(s16 *)(p + 0xee);
        if (ee >= 0 && ee <= 227) {
            b2 = 1;
            goto K2;
        }
        b2 = 0;
    K2:
        if (b2 != 0) {
            b2 = 1;
            goto KE;
        }
    KZ:
        b2 = 0;
    KE:
        if (b2 == 0) {
            SwapR0((vu8 *)(p + 0x8c), *(s8 *)(p + 0x8b));
        }
    }
    (data_021376c4[*(s16 *)(p + 0xea)])(p);
    *(s16 *)(p + 0x148) = *(s16 *)(p + 0x152);
    ap = data_021371d4;
    bp = data_02136c78;
    SwapR0((vu8 *)(p + 0x94), *(s8 *)(p + 0x93));
    ea = *(s16 *)(p + 0xea);
    {
        s32 idx = ap[ea];
        s32 t3 = *(s16 *)(bp + idx * 8);
        s32 hit;
        if (t3 < 0) {
            goto BODY;
        }
        if (*(s16 *)(*(s32 *)(p + 0x9e8) + 0x1e) >= 10000) {
            hit = 1;
            goto JH;
        }
        hit = (*(s16 *)(*(s32 *)(p + 0x9e8) + 0x20) >= 10000);
    JH:
        if (hit != 0) {
            goto SKIP;
        }
    BODY:
        {
            s32 v = (s16)(t3 + *(s16 *)(*(s32 *)(p + 0x9e8) + 0x18));
            SwapR0((vu8 *)(p + 0xd2), 1);
            if (v < 0) {
                v = 0;
            }
            if (v > 10000) {
                v = 10000;
            }
            *(s16 *)(*(s32 *)(p + 0x9e8) + 0x18) = v;
        }
    SKIP:
        ;
    }
    {
        s32 idx2 = data_021371d4[*(s16 *)(p + 0xea)];
        s32 t4 = *(s16 *)(data_02136c7a + idx2 * 8);
        s32 v2 = (s16)(t4 + *(s16 *)(*(s32 *)(p + 0x9e8) + 0x1a));
        SwapR0((vu8 *)(p + 0xd2), 1);
        if (v2 < 0) {
            v2 = 0;
        }
        if (v2 > 10000) {
            v2 = 10000;
        }
        *(s16 *)(*(s32 *)(p + 0x9e8) + 0x1a) = v2;
    }
}
