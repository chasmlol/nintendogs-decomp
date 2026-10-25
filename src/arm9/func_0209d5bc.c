#pragma opt_dead_assignments off
#pragma opt_dead_assignments off
#include "ctx.h"

typedef struct Elem { u8 a0; u8 a1; s16 a2; } Elem;

typedef struct Obj {
    s32 n;
    s16 h4;
    s16 h6;
    s16 h8;
    s16 h10;
    u16 g0c[3];
    u16 g12[3];
    u32 x[3];
    s16 s24;
    s16 s26;
    u32 a[3];
    u32 b[3];
    u32 c[3];
} Obj;

typedef struct G1 { s16 s0; u16 s2; s16 s4; s16 s6; u32 w8; u32 wc; u32 w10; } G1;
typedef struct G2 { u32 p0; u32 p4; u8 r8[14]; s16 h16; u16 h18; u8 r1a[22]; u32 p30; } G2;
typedef struct G3 { u8 r0[50]; u16 h32; u8 r34[8]; u32 w3c; u8 r40[20]; u32 w54; s16 h58; } G3;

extern Elem *data_0214204c[];
extern G1 data_02159148;
extern G2 data_02159074;
extern G3 data_02159198;
extern u8 data_02141f9c[];
extern u32 data_02159144;
extern u32 data_0212fd14;
extern u8 data_02159184[];

void func_0209adc8(s32 a);
void func_02088364(s32 *st);
s32 func_02088014(s32 *st, u8 *x);
s32 func_02071f78(s32 *p, s32 a, s32 b, s32 c, s32 d);
void func_02087e90(s32 *st, s32 a, s32 b);
void func_02087fcc(s32 *st);
void func_02072d28(s32 a, s32 *p);
void func_02072cf0(s32 a, s32 *p);
s32 func_0209aab0(void);
void func_020e0394(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020e1d18(void);
s32 func_0209aa18(void);
s32 func_020e1f2c(s32 a);
void func_0209f968(s32 a, s32 b);
void func_020a0258(s32 a);
void func_0209ad94(void);
void func_0209ae94(s32 a);
s32 func_020a3148(s32 a);
void func_020a355c(s32 a, s32 b);
void func_020e0db0(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020e0364(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02070b48(void *p);

u32 func_0209d5bc(Obj *p, s16 param_2)
{
    s16 i;
    s16 sVar1;
    s32 *heapB;
    Elem *e;
    G1 *g1;
    G3 *g3;
    u32 name;
    s32 k;

    g1 = &data_02159148;
    e = data_0214204c[param_2];
    p->s24 = param_2;
    g1->s6 = param_2;
    data_02159074.h16 = -1;
    if (e == NULL) {
        goto ret0;
    }
    g3 = &data_02159198;
    if (param_2 != g1->s0) {
        for (i = 0; i < 3; i++) {
            p->a[i] = 0;
            p->b[i] = 0;
            p->c[i] = 0;
        }
        if (e->a1 == 48) {
            s32 st[18];
            s32 *heap;

            heap = (s32 *)data_02159074.p0;
            name = (u32)data_02141f9c;
            sVar1 = e->a2;
            func_0209adc8(2);
            data_02159198.h32 = 0;
            data_02159198.w3c = -1;
            data_02159148.s0 = param_2;
            g3->h58 = -1;
            func_02088364(st);
            if (func_02088014(st, (u8 *)name)) {
                s32 len = st[9] - st[8];
                s32 buf = func_02071f78(heap, len, 0, 0, 0);
                func_02087e90(st, buf, len);
                func_02087fcc(st);
                data_02159198.w54 = buf;
            }
            func_02072d28(e->a0, heap);
            if (sVar1 != 255) {
                func_02072cf0(e->a2, heap);
                switch (sVar1) {
                case 64:
                    data_02159144 = func_02071f78(heap, 0x9c4c, 0, 0, 0);
                    func_020e1d18();
                    break;
                case 59:
                    k = func_02071f78(heap, 0x13c40, 0, 0, 0);
                    func_020e0394(k, func_0209aab0(), 33, 0, 10, 0);
                    break;
                case 60:
                    heapB = (s32 *)func_02071f78(heap, 0x13c40, 0, 0, 0);
                    func_020e0394((s32)heapB, func_0209aab0(), 34, 0, 10, 0);
                    break;
                case 61: {
                    s32 a = func_02071f78(heap, 0x13c40, 0, 0, 0);
                    func_020e0394(a, func_0209aab0(), 35, 0, 10, 0);
                    break;
                }
                case 62: {
                    s32 a = func_02071f78(heap, 0x13c40, 0, 0, 0);
                    func_020e0394(a, func_0209aab0(), 36, 0, 10, 0);
                    break;
                }
                }
            }
            func_0209ae94(3);
        } else {
            s32 sid;
            u32 mode;

            heapB = (s32 *)data_02159074.p4;
            if (param_2 == 51 && func_0209aa18() == 0 && data_02159074.p30 == 0) {
                e = data_0214204c[52];
            }
            sid = e->a2;
            if (g1->s4 == param_2 && g1->w8 != 0) {
                func_020a0258(sid);
            } else {
                k = 0;
                mode = data_02159074.h18;
                if (mode > 22 || (data_0212fd14 & (1u << mode)) == 0) {
                    func_0209ad94();
                }
                if (e->a0 != 255) {
                    if (param_2 == 73 && func_0209aa18() == 0 && data_02159074.p30 == 0) {
                        func_02072d28(96, heapB);
                        k = 1;
                    } else {
                        func_02072d28(e->a0, heapB);
                    }
                }
                if (param_2 == 77) {
                    g1->w10 = func_02071f78(heapB, func_020e1f2c(5), 0, 0, 0);
                } else {
                    g1->w10 = 0;
                    if (e->a1 == 30) {
                        func_0209f968(40, 60);
                        switch (param_2) {
                        case 70:
                        case 72:
                        default:
                            k = 0;
                            break;
                        case 71:
                            k = 1;
                            break;
                        case 74:
                            k = 2;
                            break;
                        case 73:
                            if (k != 0) {
                                k = 4;
                            } else {
                                s32 a;
                                k = 3;
                                a = func_02071f78(heapB, 0xa8c0, 0, 0, 0);
                                func_020e0db0(a, func_0209aab0(), 73, 0, 200);
                            }
                            break;
                        }
                        func_020a355c(func_02071f78(heapB, func_020a3148(k), 0, 0, 0), k);
                    } else if (param_2 == 51 && (func_0209aa18() != 0 || data_02159074.p30 != 0)) {
                        s32 a = func_02071f78(heapB, 40960, 0, 0, 0);
                        func_020e0364(a, func_0209aab0(), 146, 0, 10, 0);
                    }
                }
                if (sid != -1) {
                    switch (e->a2) {
                    case 8:
                    case 26:
                    case 32:
                    case 33:
                    case 127:
                        func_02072cf0(sid, heapB);
                        func_020a0258(128);
                        break;
                    default:
                        if ((data_0212fd14 & (1u << mode)) == 0) {
                            func_020a0258(sid);
                        }
                        break;
                    }
                }
            }
        }
    } else {
        func_0209f968(127, 30);
        g3->h58 = -1;
    }
    p->n = 3;
    for (i = 0; i < p->n; i++) {
        func_02070b48(&p->x[i]);
        p->g12[i] = 0;
        p->g0c[i] = e->a1;
    }
    p->h4 = 0;
    p->h6 = 0;
    p->h8 = 0;
    p->h10 = 0;
    p->s26 = 0;
    g1->s4 = param_2;
    if ((u32)(param_2 - 62) <= 1) {
        *(u32 *)(data_02159184 + 0x10) = 1;
    }
    return 1;
ret0:
    return 0;
}
