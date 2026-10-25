#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u8 data_02152cd8[];

typedef struct { s32 v[3]; } Vec3;

extern s32 func_ov005_02167268(u8 *item, s32 *out);
extern void func_020271b8(u8 *p, s32 *out, s32 n);
extern s32 func_02028130(u8 *p);
extern void func_0200b644(s32 *a, s32 *b, s32 *c, s32 *d, s32 *e);
extern s32 func_0200b8a0(s32 *a, s32 *b, s32 *c);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_01ff89d0(s32 *a);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, u8 *d);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 a);
extern void func_02027ee0(u8 *p, s32 a, s32 b);
extern void func_02027b38(u8 *p, s32 a);


void func_ov005_0215edf4(u8 *param_1)
{
    s32 vA[3];
    s32 vB[3];
    s32 vD[3];
    s32 vE[3];
    s32 vF[3];
    s32 g64[12];
    s32 h112[12];
    s32 c160[3];
    s32 c172[3];
    s32 idx;
    s32 done;
    s32 state;
    s32 b, a, t, thr, v, n, ok, iv5;
    s32 zero;
    u32 cnt;
    s32 y1, x1, x2, y2;
    u8 *it1;
    u8 *item;
    u8 *d;
    u8 *dp;

    done = 0;
    state = *(s32 *)(param_1 + 0x464);
    if (*(u16 *)(param_1 + 0xfc) < 3) {
        done = 1;
        goto tail;
    }
    dp = data_02159444;
    idx = *(s16 *)(dp + 0x7a);
    if (idx < 0 || *(s16 *)(data_02159468 + 0x20) <= idx) {
        it1 = 0;
    } else {
        it1 = *(u8 **)(data_02159468 + idx * 4 + 4);
    }
    if (it1 != 0) {
        if (*(s16 *)(it1 + 0x96) == 8) {
            ok = 1;
            goto okj;
        }
    }
    ok = 0;
okj:
    if (!ok) {
        goto tail;
    }
    if (!(*(u16 *)(dp + 0x84) & 1)) {
        goto tail;
    }
    if (idx < 0 || *(s16 *)(data_02159468 + 0x20) <= idx) {
        item = 0;
    } else {
        item = *(u8 **)(data_02159468 + idx * 4 + 4);
    }
    if (item == 0) {
        goto tail;
    }
    if (!func_ov005_02167268(item, vE)) {
        goto tail;
    }
    func_020271b8(param_1, g64, 2);
    func_020271b8(param_1, h112, 4);
    c160[0] = g64[9];
    c160[1] = g64[10];
    c160[2] = g64[11];
    c172[0] = h112[9];
    c172[1] = h112[10];
    c172[2] = h112[11];
    *(Vec3 *)vA = *(Vec3 *)(*(u8 **)(data_02159444 + 0x1c) + 0x30);
    vB[0] = *(s32 *)(data_02152cd8 + 0x54);
    vB[1] = *(s32 *)(data_02152cd8 + 0x60);
    vB[2] = *(s32 *)(data_02152cd8 + 0x6c);
    func_0200b644(vF, vA, vE, c160, vB);
    b = func_02028130(param_1);
    a = func_02028130(param_1);
    iv5 = func_0200b8a0(c172, vE, vF);
    t = (s32)((((s64)a * b) + 0x800) >> 12);
    thr = (s32)(((((s64)t) * 0x2008) + 0x800) >> 12);
    if (iv5 >= thr) {
        goto tail;
    }
    func_02067e34(vF, c160, vD);
    n = func_02028130(param_1);
    v = (s32)((((s64)n) * -512 + 0x800) >> 12);
    if (vD[0] > v) {
        vD[0] = v;
    }
    func_01ff89d0(vD);
    n = func_02028130(param_1);
    func_01ff832c(n << 1, vD, c160, param_1 + 0x3f0);
    if (*(s16 *)(data_02159444 + 0x88) > 30) {
        *(s32 *)(param_1 + 0x464) = 2;
        zero = 0;
        *(vu8 *)(param_1 + 147) = (u8)zero;
        func_0203e8cc(param_1, zero, 0x1c4);
        done = 1;
        goto tail;
    } else if (*(s16 *)(data_02159444 + 0x88) > -20) {
        *(s32 *)(param_1 + 0x464) = 1;
        if (state <= 1) {
            zero = 0;
            *(vu8 *)(param_1 + 147) = (u8)zero;
            func_0203e8cc(param_1, zero, 0x1c3);
            done = 1;
        }
        goto tail;
    } else {
        done = 0;
        *(s32 *)(param_1 + 0x464) = done;
        *(vu8 *)(param_1 + 147) = 5;
        *(Vec3 *)(param_1 + 948) = *(Vec3 *)vE;
        func_0203e8cc(param_1, done, 45);
        done = 1;
    }

tail:
    d = data_02159444;
    if (*(u16 *)(d + 0x84) & 1) {
        x1 = *(s32 *)(d + 0x98);
        y1 = *(s32 *)(d + 0x94);
        if (x1 <= 0) {
            x1 = -x1;
        }
        if (y1 <= 0) {
            y1 = -y1;
        }
        if (y1 + x1 > 10) {
            func_02027ee0(param_1, 1, 30);
        } else {
            *(u16 *)(param_1 + 296) += 1;
            cnt = *(u16 *)(param_1 + 296);
            if (cnt >= 60) {
                *(u16 *)(param_1 + 296) = 0;
                func_02027b38(param_1, -20);
            }
            func_02027ee0(param_1, 1, -10);
        }
    }
    if (!(*(u16 *)(data_02159444 + 0x84) & 1)) {
        *(u16 *)(param_1 + 282) += 1;
    } else {
        *(u16 *)(param_1 + 282) = 0;
    }
    *(u16 *)(param_1 + 284) = 0;
    d = data_02159444;
    x2 = *(s32 *)(d + 0x98);
    y2 = *(s32 *)(d + 0x94);
    if (x2 <= 0) {
        x2 = -x2;
    }
    if (y2 <= 0) {
        y2 = -y2;
    }
    if (y2 + x2 > 2) {
        *(u16 *)(param_1 + 286) = 12;
    } else if (*(u16 *)(param_1 + 286) != 0) {
        *(u16 *)(param_1 + 286) -= 1;
    }
    if (done) {
        return;
    }
    switch (state) {
    case 0:
        func_0203e908(param_1, 0x459);
        return;
    case 1:
        func_0203e908(param_1, 0x45b);
        return;
    case 2:
        func_0203e908(param_1, 0x458);
        return;
    }
}
