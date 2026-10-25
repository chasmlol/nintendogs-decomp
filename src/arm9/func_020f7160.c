#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0215be48;
extern u8 *data_02159060;
extern u8 data_0214f004[];
extern u8 data_0213322c[];
extern u8 data_02133234[];
extern u8 data_0213321c[];


s32 func_02112320(s32 a, s32 b, s32 c);
void func_02117a58(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_021179b0(u8 *p, s32 a, s32 b);
void func_020a1a40(s32 a);
s32 func_021178a8(u8 *p);
void func_02094294(u8 *p);
void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_02003c10(s32 a);
s32 func_02003a44(void);
void func_020fddc0(s32 a);
void func_02112798(s32 a, s32 b, s32 c);
void func_02112a50(s32 a, s32 b, s32 c, s32 d);

void func_020f7160(u8 *param_1)
{
    u8 *p;
    u8 *P;
    s32 bVar3;
    s32 bVar6;
    s32 r7;
    s32 r6;
    s32 r5;
    s32 r8;
    s32 r9;
    s32 i;
    u8 *Q;
    u8 *cur;
    u8 *tab;
    s32 idx;
    u8 *pt;
    s32 v;
    u8 F[184];
    u8 *r5p;
    u32 ix;

    p = param_1;
    *(s32 *)(p + 0) = *(s32 *)(p + 4);
    r5p = p + 0x1ca0;
    switch (*(s32 *)(p + 0)) {
    case 0: goto C0;
    case 1: goto C1;
    case 2: goto C2;
    case 3: goto C3;
    case 4: goto C4;
    default: goto TAIL;
    }
C0:
    bVar3 = 1;
    {
        s32 k1 = 0x6aaa;
        *(s32 *)(p + 0xc) = *(s32 *)(p + 0xc) - k1;
    }
    if (*(s32 *)(p + 0xc) > 0) {
        bVar3 = 0;
    } else {
        *(s32 *)(p + 0xc) = 0;
    }
    *(s32 *)(p + 0x10) = *(s32 *)(p + 0x10) + 2912;
    if (*(s32 *)(p + 0x10) >= 0x10000) {
        *(s32 *)(p + 0x10) = 0x10000;
    } else {
        bVar3 = 0;
    }
    if (bVar3 != 0) {
        *(s32 *)(p + 4) = 1;
    }
    goto TAIL;
C1:
    P = data_0215be48;
    if (*(s32 *)(P + 0x4860) == 0) goto TAIL;
    r6 = data_0214f004[0];
    r5 = data_0214f004[1];
    r7 = func_02112320(2, r6, r5);
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) goto TAIL;
    if (r7 != 0) goto C1b;
    {
        s32 z = 0;
        func_02117a58(p + 52, 2, z, 1, 4, 5, z, z, z, 10, z);
    }
    func_021179b0(p + 52, (s16)r6, (s16)r5);
    p[112] = 0;
    *(s32 *)(p + 4) = 2;
    func_020a1a40(0);
    goto TAIL;
C1b:
    if (r7 != 1) goto C1c;
    {
        s32 z = 0;
        s32 o = 1;
        func_02117a58(p + 52, 2, o, o, 4, 5, z, z, z, 10, 10);
    }
    func_021179b0(p + 52, (s16)r6, (s16)r5);
    p[112] = 1;
    *(s32 *)(p + 4) = 2;
    func_020a1a40(1);
    goto TAIL;
C1c:
    Q = data_0213322c;
    i = 0;
    r5 = 50;
    do {
        if (r7 == Q[0]) {
            *(u16 *)(p + 204) = (u16)(i + 1);
            func_020a1a40(r5);
        }
        i++;
        Q++;
    } while (i < 8);
    goto TAIL;
C2:
    if (func_021178a8(p + 52) == 0) goto TAIL;
    func_02094294(F + 0);
    if (*(u16 *)(F + 88) < 9) goto L264;
    if (*(u16 *)(p + 204) >= 9) goto L264;
    func_02097b94(11, 0x2f79, 0, 0, 0);
    *(s32 *)(p + 4) = 3;
    goto TAIL;
L264:
    func_02003c10(20);
    *(s32 *)(p + 4) = 4;
    func_020a1a40(49);
    goto TAIL;
C3:
    Q = data_02159060;
    if (*(s32 *)(Q + 0xa4) == 0) goto TAIL;
    if (*(s16 *)(Q + 154) != 1) goto C3b;
    func_02094294(F + 92);
    *(u16 *)(p + 204) = *(u16 *)(F + 180);
C3b:
    func_02003c10(20);
    *(s32 *)(p + 4) = 4;
    func_020a1a40(49);
    goto TAIL;
C4:
    bVar6 = 1;
    if (func_02003a44() == 0) bVar6 = 0;
    *(s32 *)(p + 0xc) = *(s32 *)(p + 0xc) + 0x6aaa;
    if (*(s32 *)(p + 0xc) >= 409600) {
        *(s32 *)(p + 0xc) = 409600;
    } else {
        bVar6 = 0;
    }
    {
        s32 k2 = 0x1111;
        *(s32 *)(p + 0x10) = *(s32 *)(p + 0x10) - k2;
    }
    if (*(s32 *)(p + 0x10) <= 0) {
        *(s32 *)(p + 0x10) = 0;
    } else {
        bVar6 = 0;
    }
    if (bVar6 == 0) goto TAIL;
    *(s32 *)r5p = -1;
    func_020fddc0(17);
    goto TAIL;
TAIL:
    tab = data_02133234;
    r9 = 0;
    r5 = 0;
    r7 = 2;
    r6 = 1;
    for (r9 = 0; r9 < 20; r9++) {
        func_02112798(2, tab[0], 1);
        func_02112a50(2, tab[0], 0, (*(s32 *)(p + 0xc) << 4) >> 16);
        tab++;
    }
    ix = *(u16 *)(p + 204);
    if (ix < 1) goto L410;
    if (ix > 8) goto L410;
    func_02112798(2, 20, 1);
    ix = (u32)ix - 1;
    pt = p + ix * 4;
    func_02112a50(2, 20, *(s16 *)(pt + 20), (s16)((*(s32 *)(p + 0xc) >> 12) + *(s16 *)(pt + 22)));
    func_02112a50(2, data_0213321c[ix], 2, (s16)((*(s32 *)(p + 0xc) >> 12) + 2));
    return;
L410:
    func_02112798(2, 20, 0);
    return;
}
