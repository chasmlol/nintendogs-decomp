#include "ctx.h"

extern u8 *data_0215be38;
extern u32 data_02144d70[];
extern u8 data_02144d7c[];
extern u8 data_02144d88[];
extern u8 data_02144d94[];
extern u8 data_027c0bbc[];
extern u8 data_02133d64[];

extern void func_020eb780(s32 a);
extern void func_0205f050();
extern s32 func_02088014(u8 *a, u8 *b);
extern void func_02087ea0(u8 *a, u32 b, u32 c);
extern void func_020e9c94(s32 a);
extern s32 func_0207df48(u8 *a);
extern void func_0207dfcc(u32 a, u32 b, u32 c);
extern void func_02087fcc(u8 *a);
extern void func_0208010c(u32 a, s32 b);
extern u32 func_0208f2d0(u32 a, u32 b);
extern void func_0208f3fc(u32 a);
extern u32 func_0208fb00(u32 a, u32 b, u32 c);
extern void func_0208f7e4(u32 a, u32 b);
extern void func_0208f820(u32 a, s32 b);
extern void func_0208f7d0(u32 a, s32 b);
extern void func_0208f588(u8 *a, u32 b);

static inline BOOL BitSet(u8 *p, u32 m)
{
    return (*(vu32 *)(p + 0xc) & m) ? TRUE : FALSE;
}

void func_020eba24(void)
{
    u8 *g;
    u8 *rec;
    u8 *g1;
    s16 idx;
    s32 b1;
    s32 b2;
    s32 r;
    u32 o;
    u8 buf0[64];
    u8 buf1[64];
    u8 buf2[64];

    g = data_0215be38;
    idx = *(s16 *)(g + 0x174);
    if (idx < 0) {
        goto LOOP;
    }
    if (*(s16 *)g == 0) {
        goto P0;
    }
    if (*(s16 *)g == 1) {
        goto P1;
    }
    return;
P0:
    rec = g + 0x30 + idx * 84;
    b1 = BitSet(rec, 0x10);
    if (b1 == 0) {
        goto P0B;
    }
    b2 = BitSet(rec, 1);
    if (b2 != 0) {
        return;
    }
    *(u32 *)(rec + 0x4c) = *(u32 *)(rec + 0x44);
    func_0207dfcc(*(u32 *)(rec + 0x4c), data_02144d70[idx], *(u32 *)(rec + 0x44) + 96);
    func_02087fcc(rec);
    func_0208010c(*(u32 *)(rec + 0x4c), 10176);
    func_0205f050(buf0, 64, data_02144d7c, data_02144d70[idx], *(u32 *)(rec + 0x48));
    r = func_0207df48(buf0);
    if (r == 0) {
        return;
    }
    func_020e9c94(r);
    return;
P0B:
    {
        s32 i12 = idx * 12;
        u8 *g2;
        u8 *p300;
        u8 *p336;
        u32 v5;
        g2 = *(u8 * volatile *)&data_0215be38;
        p300 = g2 + 300;
        v5 = *(u32 *)(p300 + i12);
        p300 = p300 + i12;
        i12 = idx * 12;
        p336 = g2 + 336;
        p336 = p336 + i12;
        func_0205f050(buf1, 64, data_02144d88, data_02144d70[idx], v5);
        *(s32 *)(p300 + 4) = func_0207df48(buf1);
        *(u32 *)(p300 + 8) = func_0208f2d0(*(u32 *)(p336 + 8), *(u32 *)(p300 + 4));
        func_0208f3fc(*(u32 *)(p300 + 8));
        *(s16 *)(data_0215be38 + 2) = idx;
        *(s16 *)data_0215be38 = 1;
        return;
    }
P1:
    {
        s32 i12 = idx * 12;
        u8 *p336 = g + 336;
        u8 *rp = p336 + i12;
        *(u32 *)(rp + 4) = func_0208fb00(*(u32 *)(rp + 8), *(u32 *)(p336 + i12), *(u32 *)(g + i12 + 0x134));
        if (*(u32 *)(rp + 4) != 0) {
            u32 c0 = data_027c0bbc[0];
            u32 c1 = data_027c0bbc[1];
            u32 c2 = data_027c0bbc[2];
            func_0208f7e4(*(u32 *)(rp + 4), (u16)(c0 | (c1 << 5) | (c2 << 10)));
        }
        func_0208f820(*(u32 *)(rp + 4), 0x7fff);
        func_0208f7d0(*(u32 *)(rp + 4), 3);
        o = *(u32 *)(rp + 4);
        *(u16 *)(o + 0x20) = *(u16 *)(o + 0x20) | 8;
        *(u16 *)(o + 0x84) = 0;
        *(u16 *)(o + 0x86) = 0;
        g1 = data_0215be38;
        if (*(u32 *)(g1 + 0x2c) != 0) {
            ((void (*)(s32, s32, s32))*(u32 *)(g1 + 0x2c))(0, idx, *(s16 *)(g1 + idx * 8 + 0x184));
        }
        func_0208f588(data_0215be38 + 4, *(u32 *)(rp + 4));
        *(u32 *)(data_0215be38 + idx * 4 + 0x178) = 0;
        *(s16 *)(data_0215be38 + 0x174) = -1;
        return;
    }
LOOP:
    {
        s16 i = 0;
        s32 zero = 0;
        do {
            if (*(u32 *)(data_0215be38 + i * 4 + 0x178) != 0) {
                u8 *gq1;
                u8 *rec;
                u8 *base;
                u32 t;
                u8 *gq2;
                u8 *gq3;
                u8 *pq;
                if (*(u32 *)(data_0215be38 + i * 12 + 0x154) != 0) {
                    func_020eb780(i);
                    *(u32 *)(data_0215be38 + (u32)i * 4 + 0x178) = 1;
                }
                *(s16 *)(data_0215be38 + 0x174) = i;
                *(s16 *)data_0215be38 = 0;
                gq1 = data_0215be38;
                rec = gq1 + 0x30 + i * 84;
                base = data_02133d64 + *(s16 *)(gq1 + i * 8 + 0x184) * 168;
                *(u32 *)(rec + 0x48) = *(u32 *)(base + *(u8 *)(gq1 + i * 8 + 0x187) * 4 + 0x90);
                func_0205f050(buf2, 64, data_02144d94, *(u32 *)(rec + 0x48));
                if (func_02088014(rec, buf2) != 0) {
                    func_02087ea0(rec, *(u32 *)(rec + 0x44) + 96, *(u32 *)(rec + 0x24) - *(u32 *)(rec + 0x20));
                }
                gq2 = data_0215be38;
                t = *(u8 *)(gq2 + i * 8 + 0x187);
                *(u32 *)(gq2 + i * 12 + 0x12c) = *(u32 *)(base + t * 4 + 0x9c);
                gq3 = data_0215be38;
                pq = gq3 + 336;
                *(u32 *)(pq + i * 12) = *(u32 *)(gq3 + i * 8 + 0x188);
                *(u32 *)(pq + i * 12 + 4) = zero;
                i = 3;
            }
            i = (s16)(i + 1);
        } while (i < 3);
        return;
    }
}
