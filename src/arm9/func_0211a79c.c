#include "ctx.h"

extern u32 data_0215bfc8;
extern u32 data_0215bfc4;
extern s32 data_0214aa4c;
extern s32 data_0214aa48;
extern s32 data_0214aa44;

s32 func_ov004_0215c1d0(u8 *p);
void func_ov004_0215c1a8(s32 a);
s32 func_02027f78(s32 a, s32 b);
s32 func_020280b0(s32 a, s32 b);
void func_0211a734(u16 *p);
void func_0211a6cc(u16 *p);
void func_0211a66c(u16 *p);
void func_0211a604(u16 *p);
void func_0211a400(u16 *p);
s32 func_02028130(s32 a);

void func_0211a79c(u8 *param_1, s32 param_2, s32 param_3)
{
    struct { u16 a; u16 b; s32 c; } S;
    u16 x16;
    s32 rr;
    u16 *pa;
    s32 xo;
    u32 nv;
    u32 nv2;
    u32 v;
    s32 x;
    s32 q;
    s32 y;
    s32 r;
    u32 w;

    xo = param_2 * 100 + 0x1fa4;
    S.b = 0;
    x16 = (u16)xo;
    S.a = 0x1fa4;
    S.c = param_3;
    S.a = x16;
    S.b = 0;
    data_0214aa4c = -1;
    data_0214aa48 = -1;
    data_0214aa44 = -1;
    pa = &S.a;
    rr = func_ov004_0215c1d0(param_1);
    if (rr != 0) {
        func_ov004_0215c1a8(rr);
        goto END;
    }
    if ((data_0215bfc8 & 1) == 0) {
        if (func_02027f78(param_3, 3) == 10000) {
            *pa = (u16)(x16 + 1);
            data_0215bfc8 = data_0215bfc8 | 1;
            goto END;
        }
    }
    if ((data_0215bfc8 & 2) == 0) {
        if (func_02027f78(param_3, 4) == 10000) {
            *pa = (u16)(x16 + 2);
            data_0215bfc8 = data_0215bfc8 | 2;
            goto END;
        }
    }
    if ((data_0215bfc8 & 4) == 0) {
        if (func_02027f78(param_3, 7) == 0) {
            *pa = (u16)(x16 + 3);
            data_0215bfc8 = data_0215bfc8 | 4;
            goto END;
        }
    }
    nv = data_0215bfc4 * 0x10dcd + 1;
    v = (u16)((((u32)(u16)nv) * 100) >> 16);
    data_0215bfc4 = nv;
    if (v >= 50) goto LB50;
    *pa = (u16)(x16 + 4);
    switch (param_2) {
    case 0: goto C0;
    case 1: goto C1;
    case 2: goto C2;
    case 3: goto C3;
    case 4: goto C4;
    case 5: goto C5;
    case 6: goto C6;
    case 7: goto C7;
    default: goto END;
    }
C0:
    r = func_020280b0(S.c, 3);
    if (r < 2) {
        x = 0;
        goto C0j;
    }
    if (r < 4) {
        x = 1;
    } else {
        x = 2;
    }
C0j:
    S.b = (u16)x;
    goto END;
C1:
    func_0211a734(&S.a);
    goto END;
C2:
    func_0211a6cc(&S.a);
    goto END;
C3:
    func_0211a66c(&S.a);
    goto END;
C4:
    func_0211a604(&S.a);
    goto END;
C5:
    func_0211a400(&S.a);
    goto END;
C6:
    r = func_02028130(S.c);
    if (r < 0xccc) {
        x = 2;
        goto C6j;
    }
    if (r < 0x1199) {
        x = 1;
    } else {
        x = 0;
    }
C6j:
    S.b = (u16)x;
    goto END;
C7:
    func_0211a400(&S.a);
    goto END;
LB50:
    nv2 = nv * 0x10dcd + 1;
    x = S.a;
    q = x / 10;
    y = q * 10 + 5;
    w = (u32)(u16)nv2 * 6;
    w = w >> 16;
    data_0215bfc4 = nv2;
    S.a = (u16)y;
    S.b = (u16)w;
    goto END;
END:
    {
        u16 ea = *(vu16 *)&S.a;
        u16 eb = *(vu16 *)&S.b;
        *(u16 *)param_1 = ea;
        *(u16 *)(param_1 + 2) = eb;
    }
    return;
}
