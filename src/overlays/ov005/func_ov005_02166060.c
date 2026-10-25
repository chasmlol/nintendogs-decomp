#include "ctx.h"

#define SK(k) stk[(k) - 1]

typedef struct { s32 w[3]; } V3;

extern u8 *data_02159444;
extern s32 data_ov005_02167e98;
extern s32 data_ov005_02167e9c;
extern s32 data_ov005_02167ea0;
extern s32 data_ov005_02167ea4;
extern s32 data_ov005_02167ea8;
extern s32 data_ov005_02167eac;
extern s32 data_ov005_02167f08;
extern s32 data_ov005_02167da8;
extern s32 data_ov005_02167db8;

extern s32 func_02044ca0(s32 a);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02028130(s32 a);
extern void func_02027668(s32 a, void *b, s32 c, s32 d);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);
extern void func_020aafac(s32 a, void *b, void *c, void *d);
extern void func_0209d4b0(void *a, s32 b);
extern void func_020be3d4(void *a, void *b);
extern void func_020d9080(void *a, void *b, s32 c);
extern s32 func_ov005_021647d8(void *a, void *b);
extern void func_ov005_0216465c(void);
extern void func_0209d0dc(void *a, s32 b);
extern s32 func_02078224(s32 a, s32 b);
extern void func_02077f6c(s32 a, s32 b, s32 c);
extern void func_0200b644(void *a, void *b, void *c, void *d, void *e);
extern void func_020a0ae8(s32 n, void *v);

void func_ov005_02166060(u8 *p)
{
    s32 stk[32];
    s32 fl;
    u8 *r9;
    s32 r8;
    u8 *pA;
    u8 *pB;
    s32 X;
    s32 Y;
    s32 t;
    s32 c0;
    s32 v0;

    r9 = *(u8 **)(p + 0x214);
    func_02044ca0(*(s16 *)(p + 0x9c));
    r8 = func_01ffdb08(*(s16 *)r9);
    SK(10) = 4096;
    SK(8) = 0;
    SK(9) = 0;
    func_02027668(r8, &SK(11), 4096, 0);
    t = (s32)(((s64)data_ov005_02167e98 * func_02028130(r8) + 0x800) >> 12);
    func_01ff832c(t, &SK(8), &SK(11), &SK(5));
    func_020aafac(func_02044ca0(0), p + 0xbc, &SK(5), &SK(8));
    {
        s32 rv0 = func_02028130(func_01ffdb08(*(s16 *)*(u8 **)(p + 0x214)));
        s32 e9 = data_ov005_02167e9c;
        v0 = (s32)(((s64)e9 * rv0 + 0x800) >> 12);
    }
    c0 = *(s32 *)(p + 0xc0);
    if (c0 < v0) {
        *(s32 *)(p + 0xc0) = (s32)(((s64)data_ov005_02167e9c * func_02028130(func_01ffdb08(*(s16 *)*(u8 **)(p + 0x214))) + 0x800) >> 12);
    }
    if (*(u16 *)(data_02159444 + 132) & 2) {
        func_0209d4b0(p + 400, 5);
    }
    {
        u8 *g = data_02159444;
        s32 a = *(s16 *)(g + 134);
        s32 b = *(s16 *)(g + 136) + 96;
        X = (a << 12) / 127;
        Y = (b << 12) / 192;
    }
    func_020be3d4(p, p + 200);
    SK(15) = 0;
    SK(16) = 0;
    SK(14) = 4096;
    func_020d9080(p + 200, &SK(14), 0xc000);
    {
        s32 kf = data_ov005_02167f08;
        s32 x2 = (s32)(((s64)kf * X + 0x800) >> 12) + 737280;
        t = x2;
    }
    SK(16) = 4096;
    SK(14) = 0;
    SK(15) = 0;
    func_020d9080(p + 200, &SK(14), (u16)(((s64)t * 0xB60B60B60BLL + (0x800LL << 32)) >> 44));
    {
        s32 e4 = data_ov005_02167ea4;
        s32 e0 = data_ov005_02167ea0;
        SK(14) = 4096;
        t = e4 + (s32)(((s64)Y * (e0 - e4) + 0x800) >> 12);
        SK(15) = 0;
        SK(16) = 0;
        func_020d9080(p + 200, &SK(14), (u16)(((s64)t * 0xB60B60B60BLL + (0x800LL << 32)) >> 44));
    }
    if (*(u16 *)(data_02159444 + 132) & 1) {
        s32 t2 = *(s32 *)(p + 0xe8);
        s32 k8 = data_ov005_02167ea8;
        s32 t1 = *(s32 *)(p + 0xe4);
        s32 t0 = *(s32 *)(p + 0xe0);
        SK(17) = t0;
        SK(18) = t1;
        SK(19) = t2;
        pA = r9 + 4;
        pB = r9 + 16;
        {
            s32 rv = func_02028130(r8);
            s32 v1 = (s32)(((s64)rv * k8 + 0x800) >> 12);
            s32 w1 = (s32)(((s64)v1 * 4096 + 0x800) >> 12);
            func_01ff832c(w1, &SK(17), p + 0xbc, pA);
        }
        {
            s32 n12 = *(s32 *)(p + 0xdc);
            s32 n8 = *(s32 *)(p + 0xd8);
            s32 n4 = *(s32 *)(p + 0xd4);
            SK(21) = n8;
            SK(21) = -n8;
            SK(20) = n4;
            SK(20) = -n4;
            SK(22) = n12;
            SK(22) = -n12;
        }
        func_01ff832c(4096, &SK(20), pA, pB);
        fl = func_ov005_021647d8(pA, pB);
        func_ov005_0216465c();
        *(s16 *)(r9 + 28) = *(s16 *)(r9 + 28) + 2;
        if (*(s16 *)(r9 + 28) > 31) {
            *(s16 *)(r9 + 28) = 31;
        }
        {
            s32 r5 = *(s16 *)(r9 + 28);
            u8 *r4 = *(u8 **)(*(u8 **)(p + 0x1c) + 8);
            SK(1) = func_02078224((s32)(r4 + *(s32 *)(r4 + 8) + 4), (s32)&data_ov005_02167da8);
            SK(2) = func_02078224((s32)(r4 + *(s32 *)(r4 + 8) + 4), (s32)&data_ov005_02167db8);
            func_02077f6c((s32)r4, SK(1), r5);
            func_02077f6c((s32)r4, SK(2), r5);
        }
        func_0209d0dc(p + 400, 6);
        if (fl == 0) {
            *(s32 *)(*(u8 **)(r9 + 0x20) + 0x1c) |= 2;
            return;
        }
        SK(29) = 0;
        SK(30) = 0;
        SK(31) = 4096;
        func_02027668(r8, &SK(26), 4096, 0);
        {
            s32 r0v = func_02028130(r8);
            SK(28) = SK(28) + (s32)(((s64)data_ov005_02167eac * r0v + 0x800) >> 12);
        }
        func_0200b644(&SK(23), pA, pB, &SK(26), &SK(29));
        *(s32 *)(*(u8 **)(r9 + 0x20) + 0x1c) &= ~2;
        {
            u8 *obj = *(u8 **)(r9 + 0x20);
            *(s32 *)(obj + 0x20) = SK(23) + *(s32 *)(*(u8 **)(*(u8 **)(obj + 0x18)) + 4);
            *(s32 *)(obj + 0x24) = SK(24) + *(s32 *)(*(u8 **)(*(u8 **)(obj + 0x18)) + 8);
            *(s32 *)(obj + 0x28) = SK(25) + *(s32 *)(*(u8 **)(*(u8 **)(obj + 0x18)) + 12);
        }
        *(s32 *)(*(u8 **)(r9 + 0x20) + 0x54) = (s16)func_02028130(r8);
        func_020a0ae8(2, &SK(23));
        return;
    }
    *(s16 *)(r9 + 28) = *(s16 *)(r9 + 28) - 2;
    if (*(s16 *)(r9 + 28) < 0) {
        *(s16 *)(r9 + 28) = 0;
    }
    {
        s32 r4 = *(s16 *)(r9 + 28);
        u8 *r5 = *(u8 **)(*(u8 **)(p + 0x1c) + 8);
        SK(3) = func_02078224((s32)(r5 + *(s32 *)(r5 + 8) + 4), (s32)&data_ov005_02167da8);
        SK(4) = func_02078224((s32)(r5 + *(s32 *)(r5 + 8) + 4), (s32)&data_ov005_02167db8);
        func_02077f6c((s32)r5, SK(3), r4);
        func_02077f6c((s32)r5, SK(4), r4);
    }
    *(s32 *)(*(u8 **)(r9 + 0x20) + 0x1c) |= 2;
}
