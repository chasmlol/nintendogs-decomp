#pragma avoid_byte all
#include "ctx.h"

typedef struct { u8 b0; u8 b1; u16 h2; } L60;
typedef struct { u8 neg; u8 b1; s16 exp; } E5;
typedef struct { L60 l; E5 e; u8 buf[36]; } Conv;

extern u16 data_02126768[];
extern u8 data_0213e3c8[];
extern u8 data_0213e3d0[];
extern u8 data_0213e3d8[];
extern u8 data_0213e3dc[];
extern u8 data_0213e3e0[];
extern u8 data_0213e3e8[];
extern u8 data_0213e3f0[];
extern u8 data_0213e3f4[];

extern void func_02062aa4(L60 *a, u32 b, u32 c, E5 *d);
extern s32 func_0205c8dc(u32 a, u32 b, s32 c, s32 d);
extern void func_02062518(u8 *dst, u8 *src);
extern void func_020604f4(E5 *e, s32 n);

u8 *func_0205fb3c(u32 lo, u32 hi, u8 *end, u32 flags, u64 p5, u32 p6)
{
    Conv c;
    u8 *p;
    u8 *dp;
    s32 cv;
    s32 prec;
    s32 fl1;
    s32 fl3;
    s32 t;
    s32 cnt;
    s32 sgn;
    s32 k;
    s32 i1;
    s32 i2;
    s32 frac;
    s32 nz;
    u32 uv2;

    cv = ((u8 *)&p5)[1];
    prec = p6;
    fl3 = ((u8 *)&flags)[3];
    fl1 = ((u8 *)&flags)[1];
    c.l.b0 = 0;
    c.l.h2 = 32;
    func_02062aa4(&c.l, lo, hi, &c.e);
    p = c.buf + 1 + c.buf[0];
    while (c.buf[0] > 1 && *--p == '0') {
        c.buf[0] = (u8)(*(vu8 *)c.buf - 1);
        c.e.exp = c.e.exp + 1;
    }
    switch (c.buf[1]) {
    case '0':
        c.e.exp = 0;
        break;
    case 'I':
        nz = func_0205c8dc(lo, hi, 0, 0);
        if (nz != 0) {
            p = end - 5;
            if (cv < 0 || cv >= 128) uv2 = 0;
            else uv2 = data_02126768[cv] & 0x200;
            if (uv2 != 0) func_02062518(p, data_0213e3c8);
            else func_02062518(p, data_0213e3d0);
        } else {
            p = end - 4;
            if (cv < 0 || cv >= 128) uv2 = 0;
            else uv2 = data_02126768[cv] & 0x200;
            if (uv2 != 0) func_02062518(p, data_0213e3d8);
            else func_02062518(p, data_0213e3dc);
        }
        return p;
    case 'N':
        if (c.e.neg != 0) {
            p = end - 5;
            if (cv < 0 || cv >= 128) uv2 = 0;
            else uv2 = data_02126768[cv] & 0x200;
            if (uv2 != 0) func_02062518(p, data_0213e3e0);
            else func_02062518(p, data_0213e3e8);
        } else {
            p = end - 4;
            if (cv < 0 || cv >= 128) uv2 = 0;
            else uv2 = data_02126768[cv] & 0x200;
            if (uv2 != 0) func_02062518(p, data_0213e3f0);
            else func_02062518(p, data_0213e3f4);
        }
        return p;
    }
    c.e.exp = c.e.exp + (c.buf[0] - 1);
    p = end - 1;
    *p = 0;
    switch (cv) {
    case 'E':
        goto e_path;
    case 'F':
        goto f_path;
    case 'G':
        goto g_path;
    case 'e':
        goto e_path;
    case 'f':
        goto f_path;
    case 'g':
        goto g_path;
    default:
        goto end;
    }

g_path:
    if ((s32)c.buf[0] > prec) func_020604f4(&c.e, prec);
    if (c.e.exp < -4) goto g_e;
    if (c.e.exp < prec) goto g_f;
g_e:
    if (fl3 != 0) prec = prec - 1;
    else prec = (s32)c.buf[0] - 1;
    if (cv == 'g') cv = 'e';
    else cv = 'E';
    goto e_path;
g_f:
    if (fl3 != 0) {
        prec = prec - (c.e.exp + 1);
    } else {
        prec = (s32)c.buf[0] - (c.e.exp + 1);
        if (prec < 0) prec = 0;
    }
    goto f_path;

e_path:
    if ((s32)c.buf[0] > prec + 1) func_020604f4(&c.e, prec + 1);
    t = c.e.exp;
    sgn = '+';
    if (t < 0) {
        t = -t;
        sgn = '-';
    }
    for (cnt = 0; t != 0 || cnt < 2; cnt++) {
        *--p = t % 10 + '0';
        t /= 10;
    }
    p[-1] = (u8)sgn;
    p = p - 2;
    *p = (u8)cv;
    if (prec + (s32)(end - p) > 509) return 0;
    if ((s32)c.buf[0] < prec + 1) {
        k = prec + 2 - (s32)c.buf[0];
        k = k - 1;
        for (; k != 0; k--) {
            p = p - 1;
            *p = '0';
        }
    }
    dp = c.buf + 1 + c.buf[0];
    i2 = c.buf[0];
    while (--i2 != 0) {
        *--p = *--dp;
    }
    if (prec != 0 || fl3 != 0) {
        p = p - 1;
        *p = '.';
    }
    p = p - 1;
    *p = c.buf[1];
    if (c.e.neg != 0) {
        p = p - 1;
        *p = '-';
    } else if (fl1 == 1) {
        p = p - 1;
        *p = '+';
    } else if (fl1 == 2) {
        p = p - 1;
        *p = ' ';
    }
    goto end;

f_path:
    if ((frac = -c.e.exp + c.buf[0] - 1) < 0) frac = 0;
    if (frac > prec) {
        func_020604f4(&c.e, c.buf[0] - (frac - prec));
        if ((frac = -c.e.exp + c.buf[0] - 1) < 0) frac = 0;
    }
    if ((i1 = c.e.exp + 1) < 0) i1 = 0;
    if (i1 + frac > 509) return 0;
    dp = c.buf + 1 + c.buf[0];
    for (cnt = 0; cnt < prec - frac; ++cnt) *--p = '0';
    for (cnt = 0; cnt < frac && cnt < c.buf[0]; ++cnt) *--p = *--dp;
    for (; cnt < frac; ++cnt) *--p = '0';
    if (prec != 0 || fl3 != 0) *--p = '.';
    if (i1 != 0) {
        for (cnt = 0; cnt < i1 - c.buf[0]; ++cnt) *--p = '0';
        for (; cnt < i1; ++cnt) *--p = *--dp;
    } else {
        *--p = '0';
    }
    if (c.e.neg != 0) {
        *--p = '-';
    } else if (fl1 == 1) {
        *--p = '+';
    } else if (fl1 == 2) {
        *--p = ' ';
    }
    goto end;

end:
    return p;
}
