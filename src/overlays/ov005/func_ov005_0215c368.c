#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

extern u32 data_0214f460;
extern u32 data_02159444;
extern u32 data_02159468;
extern s8 data_0213c42d[];

typedef struct {
    u32 w[3];
} T12;

extern void func_020ab02c(u32 a, u8 *b, u8 *c);
extern void func_02067e34(u8 *a, u8 *b, u32 *c);
extern s32 func_02028130(u8 *p);
extern s32 func_0206782c(s32 a);
extern s32 func_02067898(s32 a, s32 b);
extern void func_01ff832c(s32 a, u32 *b, u8 *c, u8 *d);
extern void func_02027ee0(u8 *p, u32 a, u32 b);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_02027f78(u8 *p, u32 a);
extern s32 func_02041f04(u8 *p);
extern void func_0203e908(u8 *p, u32 a);
extern s32 func_020aaf38(u32 a, u8 *b, u32 c);

#define FX(a, b) ((s32)((((s64)(a)) * ((s64)(b)) + 0x800) >> 12))

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov005_0215c368(u8 *param_1, s16 param_2)
{
    s32 iVar12;
    s32 a;
    s32 b;
    s32 c;
    s32 sum;
    s32 v4;
    s32 r4;
    s32 r0v;
    s32 flag;
    s32 q;
    u8 *piVar11;
    u8 *piVar10;
    u32 local_28[3];
    s32 s;
    s32 t;

    iVar12 = (s32)param_2 * 12;
    piVar10 = param_1 + 0x2f4 + iVar12;
    piVar11 = param_1 + 0x3c0 + iVar12;
    func_020ab02c(*(u32 *)&data_0214f460, piVar11, piVar10);
    func_02067e34(param_1 + 0x3c0 + iVar12, param_1 + 0x2dc, local_28);
    a = (s32)local_28[2];
    b = (s32)local_28[0];
    c = (s32)local_28[1];
    sum = FX(a, a) + (FX(b, b) + FX(c, c));
    a = func_02028130(param_1);
    a = FX(a, 0x19a0);
    v4 = FX(a, a);
    if (sum < v4) {
        s = func_0206782c(sum);
        t = func_02067898(a, s);
        func_01ff832c(t, local_28, param_1 + 0x2dc, piVar11);
    }
    func_02027ee0(param_1, 5, 10);
    if ((*(u16 *)(*(u8 **)&data_02159444 + 0x84) & 1) == 0) {
        *(u16 *)(param_1 + 0x11a) = *(u16 *)(param_1 + 0x11a) + 1;
    } else {
        *(u16 *)(param_1 + 0x11a) = 0;
    }
    *(u16 *)(param_1 + 0x11c) = 0;
    {
        s32 x = *(s32 *)(*(u8 **)&data_02159444 + 0x98);
        s32 y = *(s32 *)(*(u8 **)&data_02159444 + 0x94);
        if (x <= 0) {
            x = -x;
        }
        if (y <= 0) {
            y = -y;
        }
        if (y + x > 2) {
            *(u16 *)(param_1 + 0x11e) = 12;
        } else {
            if (*(u16 *)(param_1 + 0x11e) != 0) {
                *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 1;
            }
        }
    }
    if (*(u16 *)(param_1 + 0x11e) != 0) {
        SwapByte(2, param_1 + 0x97);
        *(T12 *)(param_1 + 0x3b4) = *(T12 *)(param_1 + 0x278);
        func_0203e8cc(param_1, 2, 4);
        q = *(u16 *)*(u8 **)(param_1 + 0x9e8);
        func_0203e8cc(param_1, 3, (s32)(s16)((s32)data_0213c42d[q * 100] + 2));
    } else {
        SwapByte(0, param_1 + 0x97);
        {
            T12 *src = (T12 *)(*(u8 **)(*(u8 **)&data_02159444 + 0x1c) + 48);
            *(T12 *)(param_1 + 0x3b4) = *src;
        }
        func_0203e8cc(param_1, 2, 0);
        func_0203e8cc(param_1, 3, 0);
    }
    r4 = func_02028130(param_1);
    r0v = func_02028130(param_1);
    {
        flag = func_020aaf38(*(u32 *)&data_0214f460, piVar10, (u32)FX(FX(r0v, r4), 820));
    }
    if (flag == 0) {
        func_0203e908(param_1, 0x43d);
        return;
    }
    {
        s32 q7 = *(s16 *)(*(u8 **)&data_02159444 + 0x7a);
        u8 *Q;
        u8 *e;
        u8 *e2;
        s32 f1;
        s32 f2;

        if (q7 < 0) {
            goto Z1;
        }
        Q = *(u8 **)&data_02159468;
        if (*(s16 *)(Q + 32) > q7) {
            goto NZ1;
        }
Z1:
        e = 0;
        goto C1;
NZ1:
        e = *(u8 **)(Q + q7 * 4 + 4);
C1:
        if (e == 0) {
            goto F1Z;
        }
        if (*(s16 *)(e + 150) != 9) {
            goto F1Z;
        }
        if (*(s16 *)(e + 144) == 3) {
            f1 = 1;
            goto F1D;
        }
F1Z:
        f1 = 0;
F1D:
        if (f1 != 0) {
            goto TAIL;
        }
        f2 = 0;
        if (q7 < 0) {
            goto Z2;
        }
        Q = *(u8 **)&data_02159468;
        if (*(s16 *)(Q + 32) > q7) {
            goto NZ2;
        }
Z2:
        e2 = 0;
        goto C2;
NZ2:
        e2 = *(u8 **)(Q + q7 * 4 + 4);
C2:
        if (e2 == 0) {
            goto F2Z;
        }
        if (*(s16 *)(e2 + 150) == 10) {
            f2 = 1;
            goto F2D;
        }
F2Z:
        f2 = 0;
F2D:
        if (f2 == 0) {
            return;
        }
TAIL:
        if (*(s8 *)(param_1 + 139) != 2) {
            return;
        }
        if (func_02027f78(param_1, 5) <= func_02041f04(param_1)) {
            return;
        }
        func_0203e908(param_1, 1088);
    }
}
