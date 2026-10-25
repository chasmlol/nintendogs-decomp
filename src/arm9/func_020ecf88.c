#include "ctx.h"

extern u8 data_0215be48[];
extern u8 data_02159060[];
extern u8 data_02159444[];
extern u8 data_02159198[];
extern u8 data_02132ffc[];
extern s8 data_02133004[];
extern s16 data_02126868[];

extern s32 func_02044ca0(s32 a);
extern void func_02097b68(s32 a);
extern void func_02108e24(s32 a);
extern void func_0209d4b0(u8 *a, s32 b);
extern s32 func_02068078(s32 a, s32 b);
extern void func_0209e038(s32 a);
extern void func_0209aa84(s32 a);
extern void func_0209dfe4(void);
extern s32 func_0205e270(s32 a, s32 b);
extern void func_020ede58(u8 *a);
extern s32 func_02085d0c(s32 a, s32 b, s32 c);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_0209e164(s32 a);
extern void func_0209aa30(s32 a);
extern void func_0209dec8(s32 a, s32 b);

#define S16A(p, o) (*(s16 *)((u8 *)(p) + (o)))
#define U16A(p, o) (*(u16 *)((u8 *)(p) + (o)))
#define S32A(p, o) (*(s32 *)((u8 *)(p) + (o)))
#define PTR(sym) (*(u8 **)(sym))
#define U8A_(p, o) (*(u8 *)((u8 *)(p) + (o)))
#define S8A_(p, o) (*(s8 *)((u8 *)(p) + (o)))
#define SQFX(x) ((s32)((((s64)(x)) * (x) + 0x800) >> 12))

typedef struct {
    u32 w[3];
} T3;

void func_020ecf88(u8 *param_1)
{
    u8 *r6;
    s32 k;
    s32 r8;
    s32 r5;
    s32 r4;
    s32 fl;
    s32 t;
    s32 v;
    s32 dx;
    u8 *r9;
    s32 sum;
    u32 dy;

    k = func_02044ca0(S16A(param_1, 156));
    r6 = *(u8 **)(param_1 + 0x214);
    t = S32A(PTR(data_0215be48), 0x48b8);
    if (t == 1) {
        goto g3c;
    }
    if (t != 4) {
        goto g54;
    }
g3c:
    S32A(r6, 0x5c) = 1;
    if (S16A(param_1, 148) == 100) {
        func_02097b68(S16A(param_1, 148));
    }
g54:
    if (S16A(param_1, 148) == 100) {
        if (S16A(PTR(data_02159060), 108) == 2 && S16A(PTR(data_02159060), 108) != 0 && S16A(PTR(data_02159060), 116) != 0) {
            func_02108e24(1);
        } else {
            func_02108e24(0);
        }
    }
    if (k == 0) {
        return;
    }
    r5 = 0;
    r4 = 0;
    r9 = PTR(data_02159444);
    {
        *(T3 *)(param_1 + 188) = *(T3 *)(*(u8 **)(r9 + 0x1c) + 48);
    }
    if (U16A(r9, 132) & 1) {
        u8 *q = PTR(data_02159444);
        r5 = (S16A(q, 134) + 127) << 12;
        r4 = (96 - S16A(q, 136)) << 12;
    }
    t = S16A(r6, 0);
    if (t != 2) {
        if (U16A(r6, 28) > 182) {
            U16A(r6, 12) = (u16)(U16A(r6, 12) + U16A(r6, 14));
            if (S32A(r6, 0x18) == 0) {
                func_0209d4b0(param_1 + 400, 0);
            }
            S32A(r6, 0x18) = 1;
            goto L164;
        }
        if (S32A(r6, 0x18) != 0) {
            func_0209d4b0(param_1 + 400, 1);
        }
        S32A(r6, 0x18) = 0;
    }
L164:
    t = S16A(r6, 0);
    if (t == 1 || t == 2) {
        goto L1c4;
    }
    {
        s32 raw = S32A(data_02159198, 0x3c);
        u8 *st = *(u8 **)(param_1 + 0x214);
        s32 q2 = raw >> 8;
        if (q2 == -1) {
            goto L1c4;
        }
        v = (u16)(func_0205e270(q2 * 0x11c7, S32A(st, 8)) + 0xeef);
        if ((u32)v > 0x20b6) {
            v = 0x20b6;
        }
        U16A(st, 28) = (u16)v;
    }
L1c4:
    t = S16A(r6, 0);
    if (t == 1) {
        goto L20c;
    }
    if (U16A(r6, 28) >= 0xeef) {
        goto L20c;
    }
    if (U16A(r6, 28) >= 0xaab) {
        U16A(r6, 28) = (u16)(U16A(r6, 28) + 91);
        func_020ede58(param_1);
        goto L20c;
    }
    {
        s32 w = (s32)U16A(r6, 28) - 182;
        if (w < 0) {
            w = 0;
        }
        U16A(r6, 28) = (u16)w;
    }
L20c:
    if (S16A(param_1, 148) != 100) {
        goto L2d0;
    }
    if (U16A(r6, 28) < 0xeef) {
        goto L2b4;
    }
    if (U16A(r6, 28) > 0x20b6) {
        goto L2b4;
    }
    if (S16A(r6, 0) == 1) {
        goto L2b4;
    }
    if ((S32A(data_02159198, 0x3c) >> 8) == -1) {
        goto L2b4;
    }
    S32A(r6, 0x50) = S32A(r6, 0x50) + 1;
    if (S32A(r6, 0x50) <= 30) {
        goto L2d0;
    }
    S32A(r6, 0x50) = 0;
    if (S32A(r6, 0xd4) == 0) {
        goto L29c;
    }
    S32A(r6, 0xd4) = 0;
    S32A(r6, 0xe4) = 0;
    S32A(r6, 0xf4) = 1;
    S32A(r6, 0x104) = 1;
    goto L2d0;
L29c:
    S32A(r6, 0xd4) = 1;
    S32A(r6, 0xe4) = 1;
    S32A(r6, 0xf4) = 0;
    S32A(r6, 0x104) = 0;
    goto L2d0;
L2b4:
    S32A(r6, 0xd4) = 1;
    S32A(r6, 0xe4) = 1;
    S32A(r6, 0xf4) = 0;
    S32A(r6, 0x104) = 0;
    S32A(r6, 0x50) = 0;
L2d0:
    {
        u8 *q = *(u8 **)(param_1 + 0x214);
        t = S16A(q, 0);
        if (t == 0 || t == 3) {
            u32 pos = U16A(q, 28);
            s32 g2 = S32A(data_02159198, 0x3c) >> 8;
            if (pos > 0x17d2 && g2 == -1) {
                func_0209dfe4();
            }
        }
    }
    r8 = S16A(r6, 0);
    switch (r8) {
    case 0:
        goto L338;
    case 1:
        goto L73c;
    case 2:
        goto L884;
    case 3:
        goto La90;
    case 4:
        goto Lc84;
    default:
        goto Lfin;
    }

L338:
    fl = U16A(PTR(data_02159444), 132) & 1;
    if (fl == 0) {
        goto L44c;
    }
    {
        u8 *st = *(u8 **)(param_1 + 0x214);
        s32 ix = (s32)U16A(st, 28) >> 4;
        s32 c0 = data_02126868[2 * ix];
        u32 c1 = data_02126868[2 * ix + 1];
        s32 a24 = S32A(st, 0x24);
        s32 xx;
        s32 a20 = S32A(st, 0x20);
        s32 yy;
        dx = U8A_(data_02132ffc, 2) - S8A_(data_02133004, 2);
        yy = c1 * a20 - c0 * a24 + (dx << 12);
        dy = U8A_(data_02132ffc, 3) - S8A_(data_02133004, 3);
        xx = c0 * a20 + c1 * a24 + (dy << 12);
        sum = SQFX(yy - r5) + SQFX(xx - r4);
    }
    {
        s32 dxs = dx << 12;
        s32 dys = dy << 12;
        if (sum < 0x240000) {
            U16A(r6, 40) = U16A(r6, 28);
            U16A(r6, 42) = (u16)func_02068078(r4 - dys, r5 - dxs);
            S16A(r6, 2) = S16A(r6, 0);
            S16A(r6, 0) = 1;
            if (S32A(r6, 0x54) != 0) {
                func_0209e038(1);
                S32A(r6, 0x58) = 1;
            } else {
                func_0209aa84(1);
            }
            goto L5d4;
        }
    }

L44c:
    if (fl == 0) {
        goto L538;
    }
    {
        u8 *a = data_02132ffc;
        s8 *b = data_02133004;
        s32 a0 = a[0];
        s32 b0 = b[0];
        s32 a1 = a[1];
        s32 b1 = b[1];
        s32 dxs = (a0 - b0) << 12;
        s32 dys = (a1 - b1) << 12;
        s32 xd = dys - r4;
        s32 yd = dxs - r5;
        s32 s = SQFX(yd) + SQFX(xd);
        {
            s8 okb;
            if (s < 0x24000) {
                goto Lb0;
            }
            if (s <= 0x15f9000) {
                okb = 1;
                goto Jb;
            }
        Lb0:
            okb = 0;
        Jb:
            if (okb == 0) {
                goto L538;
            }
        }
        {
            U16A(r6, 40) = U16A(r6, 28);
            U16A(r6, 16) = U16A(r6, 12);
            U16A(r6, 18) = (u16)func_02068078(r4 - dys, r5 - dxs);
            S32A(r6, 0x14) = 0;
            S16A(r6, 2) = S16A(r6, 0);
            S16A(r6, 0) = 2;
            {
                s32 f54 = S32A(r6, 0x54);
                if (f54 != 0) {
                    func_0209e038(1);
                    S32A(r6, 0x58) = 1;
                } else {
                    func_0209aa84(f54);
                }
            }
            goto L5d4;
        }
    }

L538:
    if (fl == 0) {
        goto L5d4;
    }
    {
        u8 *st = *(u8 **)(0x214 + param_1);
        int a40 = S32A(st, 0x40);
        s32 r8s = (int)r5 >> 12;
        s32 a3c = S32A(st, 0x3c);
        s32 hx = a40 >> 1;
        u32 a38 = S32A(st, 0x38);
        s32 a44 = S32A(st, 0x44);
        s32 a2c = S32A(st, 0x2c);
        int hy = a44 >> 1;
        s32 x5 = (a38 + ((a40 - 6) >> 1)) - (r5 >> 12);
        int y4 = (a3c + ((a44 - 2) >> 1)) + a2c - (r4 >> 12);
        int f;
        if (x5 < -hx) {
            goto Lz;
        }
        if (x5 > hx) {
            goto Lz;
        }
        if (y4 < -hy) {
            goto Lz;
        }
        if (y4 <= hy) {
            f = 1;
            goto Lj;
        }
    Lz:
        f = 0;
    Lj:
        if (f == 0) {
            goto L5d4;
        }
        S32A(r6, 0x48) = S32A(r6, 0x2c);
        U16A(r6, 76) = (u16)r8s;
        U16A(r6, 78) = (u16)(r4 >> 12);
        S16A(r6, 0) = 3;
    }

L5d4:
    if (S16A(param_1, 148) != 100) {
        return;
    }
    {
        u8 *q = PTR(data_02159444);
        if ((U16A(q, 132) & 2) == 0) {
            return;
        }
    }
    if (S32A(r6, 0x5c) != 0) {
        return;
    }
    if (U16A(r6, 28) != 0) {
        return;
    }
    {
        u8 *q = PTR(data_02159444);
        r4 = func_02085d0c(S32A(r6, 0x60), S16A(q, 134) + 128, 96 - S16A(q, 136));
    }
    {
        u8 *p2 = PTR(data_02159060);
        s32 p108 = S16A(p2, 108);
        if (!(p108 == 2 && p108 != 0 && S16A(p2, 116) != 0)) {
            r4 = -1;
        }
    }
    if (U16A(r6, 28) >= 0xeef && U16A(r6, 28) <= 0x20b6) {
        r4 = -1;
    }
    if (r4 == 0) {
        S32A(r6, 0x54) = 0;
        S32A(r6, 0x124) = 0;
        S32A(r6, 0x134) = 1;
        func_0209d4b0(param_1 + 400, 13);
    }
    if (r4 == 1) {
        S32A(r6, 0x54) = 1;
        S32A(r6, 0x124) = 1;
        S32A(r6, 0x134) = 0;
        func_0209d4b0(param_1 + 400, 12);
    }
    if (r4 != 2) {
        return;
    }
    func_02097b94(2, 0xdac, 0, 0, 0);
    S16A(r6, 0) = 4;
    S32A(r6, 0x124) = 1;
    S32A(r6, 0x134) = 1;
    S32A(r6, 0x144) = 0;
    func_0209d4b0(param_1 + 400, 14);
    return;

L73c:
    if ((U16A(PTR(data_02159444), 132) & 1) == 0) {
        S16A(r6, 2) = (s16)r8;
        S16A(r6, 0) = 0;
        goto L85c;
    }
    {
        u8 *st = *(u8 **)(param_1 + 0x214);
        s32 ix = U16A(st, 28) >> 4;
        s32 xx;
        s32 c0 = data_02126868[2 * ix];
        s32 c1 = data_02126868[2 * ix + 1];
        s32 a24 = S32A(st, 0x24);
        s32 a20 = S32A(st, 0x20);
        s32 yy;
        dx = U8A_(data_02132ffc, 2) - S8A_(data_02133004, 2);
        yy = c1 * a20 - c0 * a24 + (dx << 12);
        dy = U8A_(data_02132ffc, 3) - S8A_(data_02133004, 3);
        xx = c0 * a20 + c1 * a24 + (dy << 12);
        sum = SQFX(yy - r5) + SQFX(xx - r4);
    }
    {
        s32 dxs = dx << 12;
        int dys = dy << 12;
        if (sum < 0xe10000) {
            s32 xd = r5 - dxs;
            s32 yd = r4 - dys;
            if (xd != 0 || yd != 0) {
                v = func_02068078(yd, xd);
                v = U16A(r6, 40) + (v - U16A(r6, 42));
                if (v < 0) {
                    v = 0;
                }
                if (v > 0x20b6) {
                    v = 0x20b6;
                }
                U16A(r6, 28) = (u16)v;
            }
        } else {
            S16A(r6, 2) = (s16)r8;
            S16A(r6, 0) = 0;
        }
    }

L85c:
    if (S16A(r6, 0) != 0) {
        return;
    }
    func_020ede58(param_1);
    return;

L884:
    if ((U16A(PTR(data_02159444), 132) & 1) == 0) {
        S16A(r6, 2) = (s16)r8;
        S16A(r6, 0) = 0;
        func_020ede58(param_1);
        S32A(r6, 0x14) = 0;
        return;
    }
    {
        u8 *a = data_02132ffc;
        s8 *b = data_02133004;
        s32 a0 = a[0];
        s32 b0 = b[0];
        s32 a1 = a[1];
        s32 b1 = b[1];
        s32 dxs = (a0 - b0) << 12;
        s32 dys = (a1 - b1) << 12;
        s32 xd = dys - r4;
        s32 yd = dxs - r5;
        s32 s = SQFX(yd) + SQFX(xd);
        {
            s16 okb;
            if (0x24000 > s) {
                goto Lz2;
            }
            if (s <= 0x15f9000) {
                okb = 1;
                goto Lj2;
            }
        Lz2:
            okb = 0;
        Lj2:
            if (okb == 0) {
                goto La70;
            }
        }
        {
            s32 xq = r5 - dxs;
            s32 yq2 = r4 - dys;
            s32 dy16;
            s32 ret;
            u16 w;
            if (0 == xq && 0 == yq2) {
                return;
            }
            ret = func_02068078(yq2, xq);
            w = (u16)(U16A(r6, 16) + (ret - U16A(r6, 18)));
            dy16 = (s16)(w - U16A(r6, 12));
            S32A(r6, 0x14) = S32A(r6, 0x14) + dy16;
            if (S32A(r6, 0x14) > 0x200000) {
                S32A(r6, 0x14) = 0x200000;
            }
            if (S32A(r6, 0x14) < -0x200000) {
                S32A(r6, 0x14) = -0x200000;
            }
            if (U16A(r6, 28) >= 0xeef) {
                U16A(r6, 28) = (u16)(U16A(r6, 40) + (S32A(r6, 0x14) >> 8));
                if (U16A(r6, 28) > 0x20b6) {
                    U16A(r6, 28) = 0x20b6;
                    S32A(r6, 0x14) = (0x20b6 - U16A(r6, 40)) << 8;
                }
                if (U16A(r6, 28) < 0xeef) {
                    U16A(r6, 28) = 0xeef;
                    S32A(r6, 0x14) = (0xeef - U16A(r6, 40)) << 8;
                }
            }
            {
                s32 aa = dy16 > 0 ? dy16 : -dy16;
                if (aa > 512) {
                    if (U16A(r6, 28) >= 0xeef && U16A(r6, 28) <= 0x20b6) {
                        func_0209dec8(dy16, 1);
                    } else {
                        func_0209dec8(dy16, 0);
                    }
                }
            }
            U16A(r6, 12) = w;
        }
        return;
    }

La70:
    S16A(r6, 2) = (s16)r8;
    S16A(r6, 0) = 0;
    func_020ede58(param_1);
    return;

La90:
    if ((U16A(PTR(data_02159444), 132) & 1) == 0) {
        S16A(r6, 2) = (s16)r8;
        S16A(r6, 0) = 0;
        func_0209e164(0);
        return;
    }
    {
        u8 *p10 = *(u8 **)(param_1 + 0x214);
        s32 a40 = S32A((u32)p10, 0x40);
        s32 hx = (a40 << 2) >> 1;
        u32 r9v = r5 >> 12;
        int a44 = S32A(p10, 0x44);
        s32 hy = (a44 << 2) >> 1;
        s32 x5 = (S32A(p10, 0x38) + ((a40 - 6) >> 1)) - (r5 >> 12);
        u16 f;
        s32 y4 = (S32A(p10, 0x3c) + ((a44 - 2) >> 1)) + S32A((u32)p10, 0x2c) - (r4 >> 12);
        if (x5 < -hx) {
            goto Lz3;
        }
        if (x5 > hx) {
            goto Lz3;
        }
        if (y4 < -hy) {
            goto Lz3;
        }
        if (y4 <= hy) {
            f = 1;
            goto Lj3;
        }
    Lz3:
        f = 0;
    Lj3:
        if (f == 0) {
            goto Lc6c;
        }
        {
            s32 old = S32A(r6, 0x2c);
            s32 d = (r4 >> 12) - U16A(r6, 78);
            S32A(r6, 0x2c) = S32A(r6, 0x48) + d;
            {
                s32 ab = S32A(r6, 0x2c);
                if (ab <= 0) {
                    ab = -ab;
                }
                if (ab <= 4) {
                    S32A(r6, 0x2c) = 0;
                    if (old != 0) {
                        func_0209d4b0(param_1 + 400, 2);
                    }
                }
            }
            if (S32A(r6, 0x2c) < S32A(r6, 0x34)) {
                S32A(r6, 0x2c) = S32A(r6, 0x34);
            }
            if (S32A(r6, 0x2c) == S32A(r6, 0x34) && old != S32A(r6, 0x34)) {
                func_0209d4b0(param_1 + 400, 2);
            }
            if (S32A(r6, 0x2c) > S32A(r6, 0x30)) {
                S32A(r6, 0x2c) = S32A(r6, 0x30);
            }
            if (S32A(r6, 0x2c) == S32A(r6, 0x30) && old != S32A(r6, 0x30)) {
                func_0209d4b0(param_1 + 400, 2);
            }
            S16A(r6, 176) = (s16)S32A(r6, 0x2c);
            {
                s32 tt;
                int cl;
                u8 *dd;
                s32 v2 = func_0205e270(-S32A(r6, 0x2c) * 100, (S32A(r6, 0x30) - S32A(r6, 0x34)) >> 1);
                if (-100 > v2) {
                    v2 = -100;
                }
                if (v2 > 100) {
                    v2 = 100;
                }
                cl = v2;
                S16A(data_02159198, 50) = cl;
                S16A(r6, 14) = ((256 + cl) << 10) / 256;
            }
            func_0209e164((s32)U16A(r6, 76) - r9v);
        }
        return;
    }

Lc6c:
    S16A(r6, 2) = (s16)r8;
    S16A(r6, 0) = 0;
    return;

Lc84:
    {
        u8 *p2 = PTR(data_02159060);
        s32 v154;
        if (S32A(p2, 0xa4) == 0) {
            return;
        }
        v154 = S16A(p2, 154);
        if (v154 == 0) {
            func_0209aa30(v154);
        }
    }
    S32A(r6, 0x144) = 1;
    if (S32A(r6, 0x54) != 0) {
        S32A(r6, 0x124) = 1;
        S32A(r6, 0x134) = 0;
    } else {
        S32A(r6, 0x124) = 0;
        S32A(r6, 0x134) = 1;
    }
    S16A(r6, 2) = (s16)S16A(r6, 0);
    S16A(r6, 0) = 0;
    func_02097b94(2, 0xdac, 1, 0, 1);

Lfin:
    return;
}
