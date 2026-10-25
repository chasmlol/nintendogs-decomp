#include "ctx.h"

extern u8 data_02159010[];
extern void func_0206c7bc(u16 a, s32 b, s32 c);
extern u64 func_0205e270(u32 a, u32 b);

#define DIV10(v) ((s32)(v) / 10)
#define DIGIT(v) ((u16)((s32)(v) % 10 + 48))

void func_0211bd8c(u16 *p, s32 n, s32 X)
{
    u32 pw;
    s32 k;
    s32 nm1;
    s32 cnt;
    u32 pn;
    s32 ke;
    s32 cnte;
    u32 pwe;
    s32 nm1e;
    u32 pne;
    s32 j1e;
    s32 j2e;
    s32 sp0;
    s32 nbe;
    u32 sp4;
    vu16 z;
    u32 sp8;
    u32 uv;
    s32 i;
    s32 j;
    s32 nb;
    s32 q1;
    u32 q2;
    u64 r;
    u32 lo;
    s32 t;

    uv = 1;
    i = 0;
    switch (*(u16 *)(data_02159010 + 4)) {
    case 1:
        sp0 = 0xa3;
        sp4 = 0x2c;
        sp8 = 0x2e;
        break;
    case 2:
        sp0 = 0x20ac;
        sp4 = 0x20;
        sp8 = 0x2c;
        break;
    default:
        sp0 = 0x20ac;
        sp4 = 0x2e;
        sp8 = 0x2c;
        break;
    }
    z = 0;
    func_0206c7bc(z, (s32)p, n << 1);
    t = *(u16 *)(data_02159010 + 4);
    if (t == 1) goto yes;
    if (t == 3) goto yes;
    if (t != 4) goto no;
yes:
    i++;
    p[0] = (u16)sp0;
no:
    if (X < 100) {
        p[i] = 0x30;
        p[i + 1] = (u16)sp8;
        q2 = DIV10(X);
        q1 = DIV10(X);
        p[i + 2] = DIGIT(q1);
        p[i + 3] = (u16)(X % 10 + 48);
        i = i + 4;
    } else if (X < 100000) {
        pw = 1;
        cnt = 0;
        if (X == 0) {
            cnt = pw;
        } else {
            k = cnt;
            nm1 = n - 1;
            if (nm1 > 0) {
                do {
                    k++;
                    if (X >= (s32)pw) cnt++;
                    pn = 10 * pw;
                    pw = pn;
                } while (k < nm1);
            }
        }
        k = 1;
        if (1 < cnt) {
            do {
                uv = 10 * uv;
                k++;
            } while (k < cnt);
        }
        nb = cnt - 2;
        j = 1;
        if (1 <= nb) {
            do {
                r = func_0205e270(X, uv);
                lo = (s32)r;
                p[i] = DIGIT(lo);
                i++;
                uv = (u32)DIV10((s32)uv);
                j++;
            } while (nb >= j);
        }
        q1 = DIV10(X);
        p[i] = sp8;
        q2 = DIV10(X);
        p[i + 1] = DIGIT(q1);
        p[i + 2] = (u16)(X % 10 + 48);
        i += 3;
    } else {
        pwe = 1;
        cnte = 0;
        if (X == 0) {
            cnte = pwe;
        } else {
            ke = cnte;
            nm1e = n - 1;
            if (nm1e > 0) {
                do {
                    pne = pwe * 10;
                    ke++;
                    if (X >= (s32)pwe) cnte++;
                    pwe = pne;
                } while (nm1e > ke);
            }
        }
        ke = 1;
        if (1 < cnte) {
            do {
                uv = uv * 10;
                ke++;
            } while (ke < cnte);
        }
        nbe = cnte - 5;
        j1e = 1;
        if (1 <= nbe) {
            do {
                r = func_0205e270(X, uv);
                lo = r;
                p[i] = DIGIT(lo);
                i++;
                uv = DIV10((s32)uv);
                j1e++;
            } while (j1e <= nbe);
        }
        p[i] = (u16)sp4;
        i++;
        j2e = 1;
        do {
            r = func_0205e270(X, uv);
            lo = (s32)r;
            p[i] = DIGIT(lo);
            i++;
            uv = (u32)DIV10((s32)uv);
            j2e++;
        } while (j2e <= 3);
        q1 = DIV10(X);
        p[i] = (u16)sp8;
        q2 = DIV10(X);
        p[i + 1] = DIGIT(q1);
        p[i + 2] = (u16)(X % 10 + 48);
        i += 3;
    }
    t = *(vu16 *)(4 + data_02159010);
    if (t != 2 && t != 5) return;
    p[i] = (u16)sp0;
}
