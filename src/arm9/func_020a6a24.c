#include "ctx.h"

extern u8 data_0215942c[];
extern s16 data_021422e0;
extern u8 data_02159430[];

extern u8 *func_020038b8(u8 *p, u32 n);
extern u32 func_020aa914(u8 *p, u32 a, s32 b, u32 *c);
extern u32 func_02006cc4(u8 *p, u32 n);
extern void func_020b42c0(u8 *a, s32 b, u8 *c);
extern void func_020b4528(u8 *a);
extern u8 *func_02093278(s32 a);
extern u32 func_0208b488(u8 *p, s32 a);
extern void func_02095670(u8 *a);
extern void func_0208b15c(u32 *a, u32 *b, u8 *c, s32 d);
extern void func_0206c7bc(u16 a, u8 *b, u32 c);

#define OBJP (*(u8 **)data_0215942c)
#define QP (*(u8 **)data_02159430)

u32 func_020a6a24(u8 *param_1, u32 *param_2)
{
    u8 *A;
    s32 v;
    s32 zc;
    s32 i;
    s32 n;
    s32 k2;
    u32 off;
    s32 j;
    s32 kk;
    u32 loc;
    u32 sz;
    u32 w;
    u16 uv;
    u8 *pp;
    u8 *e;
    u8 *base;
    u8 *P2;
    u8 *r5b;
    vu16 z0;
    vu16 z1;
    vu16 z2;
    vu16 z3;

    A = func_020038b8(param_1, 60);
    *(s16 *)A = *(s16 *)(OBJP + 8);
    v = data_021422e0;
    if (v != -1) {
        *(u16 *)A = (u16)v;
    }
    *(u32 *)(A + 4) = func_020aa914(param_1, *(u16 *)OBJP, *(s16 *)A, param_2);
    *(u32 *)(A + 8) = 0;
    *(u32 *)(A + 12) = func_02006cc4(param_1, 128);
    *(u32 *)(A + 16) = func_02006cc4(param_1, 128);
    *(u32 *)(A + 20) = 0;
    if (*(u16 *)OBJP == 7) {
        *(u32 *)(A + 24) = (u32)func_020038b8(param_1, 0x74f8);
        *(u32 *)(A + 28) = (u32)func_020038b8(param_1, 0x74f8);
        func_020b42c0(*(u8 **)(A + 24), *(s16 *)(OBJP + 14), (u8 *)param_2 + 8);
        func_020b4528(*(u8 **)(A + 28));
    } else {
        *(u32 *)(A + 24) = 0;
        *(u32 *)(A + 28) = 0;
    }
    *(s16 *)(A + 32) = 0;
    i = 0;
    do {
        *(u32 *)(A + 36 + i * 4) = 0;
        i = (s16)(i + 1);
    } while (i < 3);
    zc = 0;

    v = *(u16 *)OBJP;
    switch (v) {
    case 10: goto C10;
    case 11: goto DEF;
    case 12: goto C12;
    case 13: goto C13;
    case 14: goto C14;
    case 15: goto DEF;
    case 16: goto DEF;
    case 17: goto DEF;
    case 18: goto C18;
    case 0x8005: goto C18;
    }
    goto DEF;

C12:
    {
        pp = func_02093278(*(s16 *)(QP + 4));
        *(s16 *)(A + 32) = 1;
        *(u32 *)(A + 36) = func_0208b488(param_1, *(s16 *)pp);
        e = OBJP + 32;
        j = 0;
        do {
            uv = *(u16 *)e;
            if ((uv & 1) != 0 && (uv & 2) != 0) {
                *(u32 *)(e + 4) = *(u32 *)(A + 36);
                *(u16 *)(e + 16) = (u16)*(u32 *)(QP + 8);
                goto DEF;
            }
            j = (s16)(j + 1);
            e += 20;
        } while (j < 3);
        goto DEF;
    }

C10:
    {
        s32 j;
        s32 kk;
        u32 off;
        *(s16 *)(A + 32) = 2;
        do {
            n = *(s16 *)(QP + zc * 2 + 4);
            if (n >= 0) {
                pp = func_02093278(n);
                *(u32 *)(A + 36 + zc * 4) = func_0208b488(param_1, *(s16 *)pp);
            }
            zc = (s16)(zc + 1);
        } while (zc < 2);
        kk = 0;
        j = kk;
        off = kk;
        do {
            base = OBJP + 32;
            uv = *(u16 *)(base + off);
            e = base + off;
            if ((uv & 1) != 0 && (uv & 2) != 0) {
                if (*(s16 *)(QP + kk * 2 + 4) >= 0) {
                    *(u32 *)(e + 4) = *(u32 *)(A + 36 + kk * 4);
                    *(u16 *)(e + 16) = (u16)*(u32 *)(QP + kk * 4 + 8);
                    kk = (s16)(kk + 1);
                }
            }
            j = (s16)(j + 1);
            off += 20;
        } while (j < 3);
        goto DEF;
    }

C13:
    {
        *(s16 *)(A + 32) = 3;
        n = *(s16 *)(A + 32);
        if (n > 0) {
            sz = 0x85c;
            do {
                *(u32 *)(A + 36 + zc * 4) = (u32)func_020038b8(param_1, sz);
                zc = (s16)(zc + 1);
                n = *(s16 *)(A + 32);
            } while (zc < n);
        }
        k2 = 0;
        if (n > 0) {
            do {
                func_02095670(*(u8 **)(A + 36 + k2 * 4));
                k2 = (s16)(k2 + 1);
                n = *(s16 *)(A + 32);
            } while (k2 < n);
        }
        i = 0;
        if (n > 0) {
            off = i;
            do {
                P2 = OBJP;
                base = P2 + 32;
                uv = *(u16 *)(base + off);
                e = base + off;
                w = *(u32 *)(A + 36 + i * 4);
                if ((uv & 1) != 0 && (uv & 2) != 0) {
                    *(u32 *)(e + 4) = w;
                }
                i = (s16)(i + 1);
                off += 20;
            } while (i < *(s16 *)(A + 32));
        }
        goto DEF;
    }

C18:
    {
        *(s16 *)(A + 32) = 3;
        n = *(s16 *)(A + 32);
        i = 0;
        if (n > 0) {
            off = 0;
            w = (u32)(A + 36);
            do {
                P2 = OBJP;
                base = P2 + 32;
                e = base + off;
                loc = 0;
                func_0208b15c((u32 *)w, &loc, param_1, i);
                *(u32 *)(e + 4) = *(u32 *)(A + 36 + i * 4);
                *(u32 *)(e + 8) = loc;
                i = (s16)(i + 1);
                off += 20;
                w += 4;
            } while (i < *(s16 *)(A + 32));
        }
        goto DEF;
    }

C14:
    {
        *(s16 *)(A + 32) = 1;
        *(u32 *)(A + 36) = (u32)func_020038b8(param_1, 0x85c);
        func_02095670(*(u8 **)(A + 36));
        i = 0;
        if (*(s16 *)(A + 32) > 0) {
            off = i;
            do {
                P2 = OBJP;
                base = P2 + 32;
                uv = *(u16 *)(base + off);
                e = base + off;
                w = *(u32 *)(A + 36 + i * 4);
                if ((uv & 1) != 0 && (uv & 2) != 0) {
                    *(u32 *)(e + 4) = w;
                }
                i = (s16)(i + 1);
                off += 20;
            } while (i < *(s16 *)(A + 32));
        }
        goto DEF;
    }

DEF:
    *(u32 *)(A + 48) = 0;
    if (*(u16 *)OBJP == 14) {
        *(u32 *)(A + 48) = (u32)func_020038b8(param_1, 0xb54);
        r5b = *(u8 **)(A + 48);
        func_02095670(r5b);
        z0 = 0;
        func_0206c7bc(z0, r5b + 0x85c, 316);
        z1 = 0;
        func_0206c7bc(z1, r5b + 0x998, 64);
        z2 = 0;
        func_0206c7bc(z2, r5b + 0x9d8, 316);
        z3 = 0;
        func_0206c7bc(z3, r5b + 0xb14, 64);
    }
    *(u32 *)(A + 52) = 0;
    *(u32 *)(A + 56) = 0;
    if (param_2 != 0) {
        if (*param_2 == 0x434d5045) {
            *(u32 *)(A + 52) = (u32)param_2;
        } else if (*param_2 == 0x4e455457) {
            *(u32 *)(A + 56) = (u32)param_2;
        }
    }
    return (u32)A;
}
