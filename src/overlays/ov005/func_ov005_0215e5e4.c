#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u32 w[3]; } T3;

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u8 data_02152cd8[];

s32 func_ov005_02167268(u8 *a, s32 *b);
void func_02067e68(s32 *a, s32 *b, s32 *c);
s32 func_02028130(u8 *p);
s32 func_0200b8a0(u8 *a, s32 *b, s32 *c);
s32 func_0203567c(u8 *p);
void func_0203e8cc(u8 *p, u32 a, u32 b);
void func_02027ee0(u8 *p, s32 a, s32 b);
void func_02027b38(u8 *p, s32 a);
void func_0203996c(u8 *p);
void func_0203e908(u8 *p, u32 a);

void func_ov005_0215e5e4(u8 *param_1)
{
    u8 *p;
    u8 *ptrB;
    s32 r0v;
    s32 flagC;
    s32 X2;
    u8 *G2;
    s32 r5;
    s32 A0[3];
    s32 b;
    s32 a;
    u8 *G4;
    u8 *ptrA;
    s32 r6;
    s32 flagA;
    s32 A12[3];
    s32 A24[3];
    s32 r3;
    u8 *G1;
    s32 X1;
    u8 *G3;
    p = param_1;
    *(s32 *)(p + 0x464) = *(s32 *)(p + 0x464) + 1;
    G1 = *(u8 **)&data_02159444;
    r3 = *(s16 *)(G1 + 122);
    if (r3 < 0) goto Z1;
    G2 = data_02159468;
    if (*(s16 *)(G2 + 32) > r3) goto NZ1;
Z1:
    ptrA = 0;
    goto L50;
NZ1:
    ptrA = *(u8 **)(G2 + r3 * 4 + 4);
L50:
    if (ptrA == 0) goto L68;
    if (*(s16 *)(ptrA + 150) == 8) {
        flagA = 1;
        goto L6c;
    }
L68:
    flagA = 0;
L6c:
    if (flagA == 0) goto Lf8;
    if ((*(u16 *)(G1 + 132) & 1) == 0) goto Lf8;
    if (r3 < 0) goto Z2;
    G2 = data_02159468;
    if (*(s16 *)(G2 + 32) > r3) goto NZ2;
Z2:
    ptrB = 0;
    goto Lac;
NZ2:
    ptrB = *(u8 **)(G2 + r3 * 4 + 4);
Lac:
    if (ptrB == 0) goto Lf8;
    r0v = func_ov005_02167268(ptrB, A0);
    if (r0v == 0) goto Lf8;
    G3 = data_02152cd8;
    A24[0] = *(s32 *)(G3 + 0x54);
    A24[1] = *(s32 *)(G3 + 0x60);
    A24[2] = *(s32 *)(G3 + 0x6c);
    func_02067e68(A0, A24, A12);
    flagC = 1;
    goto Lfc;
Lf8:
    flagC = 0;
Lfc:
    if (flagC == 0) goto L184;
    r6 = func_02028130(p);
    r5 = func_02028130(p);
    r0v = func_0200b8a0(p + 864, A0, A12);
    X1 = FX_Mul(r5, r6);
    X2 = FX_Mul(X1, 0x802);
    if (r0v >= X2) goto L184;
    *(T3 *)(p + 1056) = *(T3 *)A0;
    *(s32 *)(p + 0x464) = 0;
L184:
    *(T3 *)(p + 948) = *(T3 *)(*(u8 **)(data_02159444 + 0x1c) + 48);
    if (*(s16 *)(p + 338) != 540) goto L1d0;
    if (func_0203567c(p) == 0) goto L1d0;
    func_0203e8cc(p, 0, 47);
L1d0:
    G1 = data_02159444;
    if ((*(u16 *)(G1 + 132) & 1) == 0) goto L25c;
    a = *(s32 *)(G1 + 0x98);
    b = *(s32 *)(G1 + 0x94);
    if (a <= 0) a = -a;
    if (b <= 0) b = -b;
    if (b + a <= 10) goto L21c;
    func_02027ee0(p, 1, 30);
    goto L25c;
L21c:
    *(u16 *)(p + 296) = *(u16 *)(p + 296) + 1;
    if (*(u16 *)(p + 296) < 60) goto L24c;
    *(u16 *)(p + 296) = 0;
    func_02027b38(p, -20);
L24c:
    func_02027ee0(p, 1, -10);
L25c:
    G1 = data_02159444;
    if ((*(u16 *)(G1 + 132) & 1) == 0) {
        *(u16 *)(p + 0x100 + 26) = *(u16 *)(p + 0x100 + 26) + 1;
    } else {
        *(u16 *)(p + 0x100 + 26) = 0;
    }
    *(u16 *)(p + 0x100 + 28) = 0;
    G1 = data_02159444;
    a = *(s32 *)(G1 + 0x98);
    b = *(s32 *)(G1 + 0x94);
    if (a <= 0) a = -a;
    if (b <= 0) b = -b;
    if (b + a > 2) {
        *(u16 *)(p + 0x100 + 30) = 12;
        goto L2e0;
    }
    if (*(u16 *)(p + 0x100 + 30) != 0) {
        *(u16 *)(p + 0x100 + 30) = *(u16 *)(p + 0x100 + 30) - 1;
    }
L2e0:
    func_0203996c(p);
    if (*(s32 *)(p + 0x464) <= 5) return;
    func_0203e908(p, 0x453);
}
