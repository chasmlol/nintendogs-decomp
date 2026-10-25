#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02096244(s32 *p);
extern void func_0210eebc(void);
extern s32 func_02096224(void);
extern s32 func_02096264(s32 a, s32 b, s32 c);
extern s32 func_02096200(s32 a);
extern u8 *func_020955c0(s32 a);
extern s32 func_020961dc(s32 a);
extern void func_02095510(s32 a);
extern s32 func_020946ac(s32 a, s32 b);
extern void func_020954d8(s32 a);
extern u8 *func_020931a8(s32 a);
extern void func_020930f8(s32 a);
extern s32 func_0209531c(void);
extern s32 func_02094088(void);
extern void func_0209401c(s32 a);
extern s32 data_0212fc5c;

typedef struct {
    s16 id;
    u8 b2;
    s8 b3;
} Ent;

s32 func_020a9cf4(s32 *param_1)
{
    s32 ok;
    s32 a;
    s32 b;
    s32 i;
    Ent *pa;
    s32 j;
    s32 k;
    s32 zz;
    s32 idx;
    s32 u;
    u8 *q;
    u8 *e;
    Ent arr[3];

    ok = 1;
    a = func_02096244(param_1);
    if (a == 1) {
        param_1[3] = ok;
        return 0;
    }
    func_0210eebc();
    a = func_02096224();
    if (a == 1) {
        ok = 0;
    }
    b = func_02096264(param_1[0xb], 3, 0);
    if (b == 1) {
        ok = 0;
    }
    i = 0;
    do {
        a = func_02096200(i);
        if (a == 1) {
            ok = 0;
        }
        i = (s16)(i + 1);
    } while (i < 3);
    i = 0;
    do {
        q = func_020955c0(i);
        a = func_020961dc(i);
        if (*(u16 *)q != 0xffff && a == 1) {
            func_02095510(i);
            ok = 0;
        }
        i = (s16)(i + 1);
    } while (i < 3);
    j = 0;
    pa = arr;
    do {
        pa->b2 = 1;
        j = (s16)(j + 1);
        pa->id = -1;
        pa->b3 = 0;
        pa++;
    } while (j < 3);
    i = 0;
    do {
        q = func_020955c0(i);
        if (*(u16 *)q != 0xffff) {
            s32 v = (s32)q;
            v = *(s16 *)(v + 6);
            if (v >= 0) {
                idx = -1;
                k = 0;
                do {
                    if (v == arr[k].id) {
                        idx = k;
                        break;
                    }
                    k = (s16)(k + 1);
                } while (k < 3);
                if (idx < 0) {
                    s32 idx2;
                    s32 k2;
                    idx2 = -1;
                    k2 = 0;
                    do {
                        if (arr[k2].id == -1) {
                            idx2 = k2;
                            break;
                        }
                        k2 = (s16)(k2 + 1);
                    } while (k2 < 3);
                    arr[idx2].id = v;
                    arr[idx2].b3 = 1;
                } else {
                    arr[idx].b3 = (s8)(arr[idx].b3 + 1);
                }
            }
        }
        i = (s16)(i + 1);
    } while (i < 3);
    i = 0;
    pa = arr;
    do {
        if (pa->id >= 0 && pa->b3 > func_020946ac(1, pa->id)) {
            k = 0;
            do {
                q = func_020955c0(k);
                if (*(u16 *)q != 0xffff && *(s16 *)(q + 6) == pa->id) {
                    func_020954d8(k);
                }
                k = (s16)(k + 1);
            } while (k < 3);
        }
        i = (s16)(i + 1);
        pa++;
    } while (i < 3);
    u = 0;
    zz = 0;
    do {
        a = func_02096264(param_1[0xb], 4, (u16)u);
        if (a == 1) {
            ok = 0;
        }
        q = func_020931a8(u);
        if (*(u16 *)q != 0xffff) {
            k = zz;
            do {
                e = func_020955c0(k);
                if (*(s32 *)(q + 0x640) == *(s32 *)(e + 0x640) &&
                    *(s32 *)(q + 0x644) == *(s32 *)(e + 0x644) &&
                    *(u16 *)(q + 0x648) == *(u16 *)(e + 0x648) &&
                    *(u16 *)(q + 0x64a) == *(u16 *)(e + 0x64a)) {
                    func_020930f8(u);
                    ok = 0;
                }
                k = (s16)(k + 1);
            } while (k < 3);
        }
        u = (s16)(u + 1);
    } while (u < 5);
    u = 0;
    do {
        q = func_020931a8(u);
        a = func_02096264(param_1[0xb], 5, (u16)u);
        if (*(u16 *)q != 0xffff && a == 1) {
            func_020930f8(u);
            ok = 0;
        }
        u = (s16)(u + 1);
    } while (u < 5);
    if (func_0209531c() == 0) {
        if (func_02094088() != 0) {
            func_0209401c(data_0212fc5c);
        }
    }
    return ok;
}
