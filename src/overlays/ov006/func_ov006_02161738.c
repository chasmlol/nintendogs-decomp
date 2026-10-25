#include "ctx.h"

typedef struct { s32 x, y, z; } VecFx32;
typedef struct { u32 w[3]; } T3;

#define SW(p, o) (*(s32 *)((u8 *)(p) + (o)))
#define UW(p, o) (*(u32 *)((u8 *)(p) + (o)))
#define UH(p, o) (*(u16 *)((u8 *)(p) + (o)))
#define SH(p, o) (*(s16 *)((u8 *)(p) + (o)))
#define PP(p, o) (*(u8 **)((u8 *)(p) + (o)))
#define FX(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
#define C3(dst, src) (*(T3 *)(dst) = *(T3 *)(src))

extern u8 *data_0214f464;
extern u8 *data_02159444;
extern VecFx32 data_ov006_02165da8;
extern u8 *data_0214f460;
extern u8 *data_02159428;
extern u8 *data_0214f45c;
extern s8 data_ov006_02165da0[];
extern u8 *data_0215be34;
extern void func_ov006_02161fe8(void);

extern s32 func_01ffdb08(s32 a);
extern s32 func_02027e4c(s32 a, s32 b);
extern void func_020aafe0(u8 *a, s32 *b, VecFx32 *c);
extern s32 func_0206782c(s32 a);
extern s32 func_01ff8958(s32 a, s32 b);
extern u8 *func_0200c498(s32 a, s32 b);
extern u32 func_ov006_0216215c(u32 a, s32 b);
extern s32 func_020aaf38(u8 *a, s32 *b, u32 c);
extern s32 func_02009bd0(s32 *a, s32 *b);
extern u8 *func_020364a8(s32 a);
extern u32 *func_ov006_02163288(s32 a);
extern void func_020aafac(u8 *a, VecFx32 *b, VecFx32 *c, VecFx32 *d);
extern s32 func_02009f90(VecFx32 *a, VecFx32 *b, s32 c, VecFx32 *d, u32 *e, s32 f, s32 g, s32 h, s32 i);
extern void func_02067e68(VecFx32 *a, VecFx32 *b, s32 *c);
extern void func_02067e34(VecFx32 *a, s32 *b, VecFx32 *c);
extern void func_01ff89d0(VecFx32 *a);
extern void func_01ff832c(s32 a, VecFx32 *b, s32 *c, s32 *d);
extern u32 *func_0208122c(s32 a, s32 b, s32 *c);
extern void func_02081198(s32 a, s32 b, void *c);
extern u8 *func_020bc3c4(void);
extern void func_0208ec84(u8 *a, s32 *b, VecFx32 *c);
extern void func_020a0b98(s32 a, VecFx32 *b);

void func_ov006_02161738(void)
{
    s32 i;
    s32 best;
    u8 *ent;
    u8 *q;
    u8 *A;
    u8 *X;
    u8 *P;
    s32 lim;
    s32 s;
    s32 t;
    s32 fa;
    s32 fc;
    s32 c7;
    s32 c74;
    s32 cc;
    u32 uv;

    best = 0x02710000;
    ent = (u8 *)func_01ffdb08(*(s8 *)(data_0214f464 + 6));
    UH(data_0214f464, 0x30) = SH(data_0214f464, 0x2e);
    UH(data_0214f464, 0x2e) = 0;
    if ((UH(data_02159444, 0x84) & 1) == 0) goto L1b4;

    {
        VecFx32 v28;
        lim = func_02027e4c((s32)ent, 0) << 12;
        v28 = data_ov006_02165da8;
        func_020aafe0(data_0214f460, (s32 *)(data_0214f464 + 0x74), &v28);
    }

    c7 = SW(data_0214f464, 0x7c);
    c74 = SW(data_0214f464, 0x74);
    cc = SW(data_02159428, 0xc);
    fa = FX(c74, c74) + FX(c7, c7);
    fc = FX(cc, cc);
    if (fa > fc) {
        t = func_0206782c(fa);
        t = func_01ff8958(cc, t);
        SW(data_0214f464, 0x74) = FX(SW(data_0214f464, 0x74), t);
        SW(data_0214f464, 0x7c) = FX(SW(data_0214f464, 0x7c), t);
    }

    if ((UH(data_02159444, 0x84) & 2) != 0) {
        SW(data_0214f464, 0x98) = SW(data_0214f464, 0x98) + 0x7d0000;
    }
    if (SW(data_0214f464, 0x98) < lim) {
        SW(data_0214f464, 0x98) = lim;
    }
    C3(data_0214f464 + 140, data_0214f464 + 116);
    C3(data_0214f464 + 128, data_0214f464 + 140);
    SW(data_0214f464, 0x84) = 0;
    SW(data_0214f464, 0x90) = 0;
    goto L1d4;

L1b4:
    SW(data_0214f464, 0x98) = SW(data_0214f464, 0x98) - 4096;
    if (SW(data_0214f464, 0x98) < 0) {
        SW(data_0214f464, 0x98) = 0;
    }

L1d4:
    i = 0;
    if (SH(PP(data_0214f45c, 0x20), 0x26) > 0) {
        do {
            q = func_0200c498(9, i);
            if (q != 0) {
                lim = func_02027e4c((s32)ent, data_ov006_02165da0[SW(q, 0x30)]) << 9;
                SW(data_0214f464 + i * 4, 0xa4) = SW(data_0214f464 + i * 4, 0xa4) - 0xa000;
                if (SW(data_0214f464 + i * 4, 0xa4) < lim) {
                    SW(data_0214f464 + i * 4, 0xa4) = lim;
                } else if (SW(data_0214f464 + i * 4, 0xa4) > 16384) {
                    SW(data_0214f464 + i * 4, 0xa4) = 16384;
                }
                A = data_0214f460;
                uv = func_ov006_0216215c(UW(q, 0x30), 1);
                s = func_020aaf38(A, (s32 *)(q + 8), uv);
                if (s != 0) {
                    t = func_02009bd0((s32 *)(data_0214f464 + 0x74), (s32 *)(q + 8));
                    if (t < best) {
                        best = t;
                        C3(data_0214f464 + 140, q + 8);
                        C3(data_0214f464 + 128, data_0214f464 + 140);
                        SW(data_0214f464, 0x90) = 0;
                    }
                }
            }
            i = (s16)(i + 1);
        } while (i < SH(PP(data_0214f45c, 0x20), 0x26));
    }

    s = SH(ent, 0xea);
    {
        s32 f1;
        if (s < 0x4dd) goto a1;
        if (s <= 0x4e2) { f1 = 1; goto ja; }
    a1:
        f1 = 0;
    ja:
        if (f1 != 0) goto L698;
    }
    {
        s32 f2;
        if (s < 0x4d5) goto a2;
        if (s <= 0x4dc) { f2 = 1; goto jb; }
    a2:
        f2 = 0;
    jb:
        if (f2 != 0) goto L698;
    }
    {
        s32 f3;
        if (s == 0x4e7) { f3 = 1; goto jc; }
        if (s == 0x4ea) { f3 = 1; goto jc; }
        if (s == 0x4ed) { f3 = 1; goto jc; }
        f3 = (s == 0x4ef) ? 1 : 0;
    jc:
        if (f3 != 0) goto L698;
    }
    {
        s32 f4;
        if (s < 0x4e4) goto a4;
        if (s <= 0x4e6) { f4 = 1; goto jd; }
    a4:
        f4 = 0;
    jd:
        if (f4 == 0) goto L3f0;
    }
    C3(data_0214f464 + 140, data_0214f464 + 116);
    C3(data_0214f464 + 128, data_0214f464 + 140);
    SW(data_0214f464, 0x90) = 0;
    goto L698;

L3f0:
    if (s != 0x4e9) goto L484;
    {
        VecFx32 v34;
        P = PP(data_02159444, 0x1c);
        v34 = *(VecFx32 *)(P + 48);
        func_02067e34(&v34, (s32 *)(data_0214f464 + 116), &v34);
        v34.y = v34.y - 16384;
        func_01ff89d0(&v34);
        func_01ff832c(0x8000, &v34, (s32 *)(data_0214f464 + 116), (s32 *)(data_0214f464 + 128));
        C3(data_0214f464 + 140, data_0214f464 + 116);
        SW(data_0214f464, 0x90) = 0;
    }
    goto L698;

L484:
    if (s != 0x4ee) goto L4cc;
    {
        C3(data_0214f464 + 140, data_0214f464 + 116);
        C3(data_0214f464 + 128, data_0214f464 + 140);
        SW(data_0214f464, 0x84) = 4096;
        SW(data_0214f464, 0x90) = 0;
    }
    goto L698;

L4cc:
    if (s != 0x4ec) goto L698;
    {
        u8 *p2;
        s32 j;
        s32 f5;
        p2 = func_020364a8((s32)ent);
        if (p2 == 0) goto z5;
        q = func_0200c498(SW(p2, 0x30), (s16)SW(p2, 0x2c));
        if (q == 0) goto z5;
        if ((SW(data_0214f45c, 0x18) + (s16)SW(q, 0x20) * 36) != 0) { f5 = 1; goto j5; }
    z5:
        f5 = 0;
    j5:
        if (f5 == 0) goto L698;
        {
            VecFx32 a;
            VecFx32 b;
            VecFx32 c;
            VecFx32 d = {0, 0, 0};
            for (j = 0; j < SH(PP(data_0214f45c, 0x20), 0x22); j = (s16)(j + 1)) {
                u8 *q2 = func_0200c498(8, j);
                if (q2 != 0 && SW(p2, 0x2c) == SW(q2, 0x20)) {
                    u32 *t8 = func_ov006_02163288((s16)SW(q2, 0x20));
                    {
                        u32 v5 = t8[5];
                        u32 v4 = t8[4];
                        u32 v3 = t8[3];
                        c.x = v3;
                        c.y = v4;
                        c.z = v5;
                    }
                    func_020aafac(data_0214f460, &a, (VecFx32 *)(ent + 672), &c);
                    b = a;
                    b.y = 40960;
                    a.y = 0;
                    s = func_02009f90(&a, &b, 8192, &d, t8,
                                      (s32)UW(q2, 0x18), (s32)UW(q2, 0x14), (s32)UW(q2, 0x1c), 1);
                    if (s != 0) {
                        d.y = d.y - 7168;
                    }
                    func_02067e68(&a, &d, (s32 *)(data_0214f464 + 128));
                    C3(data_0214f464 + 140, data_0214f464 + 128);
                }
            }
        }
    }

L698:
    if ((UH(data_02159444, 0x84) & 2) != 0) {
        VecFx32 scr;
        {
            u8 *m = data_0214f464;
            if (SW(m, 0x9c) == 0) {
                SW(m, 0x9c) = (s32)func_0208122c(
                    (data_0215be34 ? *(u32 *)data_0215be34 : 0), 97, (s32 *)(m + 128));
            }
        }
        {
            u8 *m = data_0214f464;
            if (SW(m, 0xa0) == 0) {
                SW(m, 0xa0) = (s32)func_0208122c(
                    (data_0215be34 ? *(u32 *)data_0215be34 : 0), 100, (s32 *)(m + 140));
            }
        }
        func_02081198((data_0215be34 ? *(u32 *)data_0215be34 : 0), 98, (void *)func_ov006_02161fe8);
        func_02081198((data_0215be34 ? *(u32 *)data_0215be34 : 0), 99, (void *)func_ov006_02161fe8);
        func_0208ec84(func_020bc3c4(), (s32 *)(data_0214f464 + 116), &scr);
        func_020a0b98(13, &scr);
    }

    {
        u8 *m = data_0214f464;
        X = PP(m, 0x9c);
        if (X != 0) {
            u8 *m2;
            SW(X, 0x20) = SW(m, 0x80) + SW(PP(PP(X, 0x18), 0), 4);
            m2 = m + 128;
            SW(X, 0x24) = SW(m2, 4) + SW(PP(PP(X, 0x18), 0), 8);
            SW(X, 0x28) = SW(m2, 8) + SW(PP(PP(X, 0x18), 0), 0xc);
        }
    }

    {
        u8 *m = data_0214f464;
        X = PP(m, 0xa0);
        if (X == 0) return;
        SW(X, 0x20) = SW(m, 0x8c) + SW(PP(PP(X, 0x18), 0), 4);
        {
            u8 *m2 = m + 140;
            SW(X, 0x24) = SW(m2, 4) + SW(PP(PP(X, 0x18), 0), 8);
            SW(X, 0x28) = SW(m2, 8) + SW(PP(PP(X, 0x18), 0), 0xc);
        }
    }
}
