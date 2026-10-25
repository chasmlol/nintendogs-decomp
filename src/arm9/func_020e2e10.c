#include "ctx.h"

extern s32 data_02144b00[11];
extern s32 data_02144ad4[11];
typedef struct { s32 w[3]; } T3;
typedef struct { s32 w[11]; } T11;
typedef struct { s32 w[12]; } T12;
typedef struct {
    T11 tbl;   /* sp+96  */
    T11 loc2;  /* sp+140 */
    T3 X;      /* sp+184 */
    T3 Y;      /* sp+196 */
    T3 Z;      /* sp+208 */
} FT;

extern void func_020e3640(void);
extern void func_020e35d8(void);
extern void func_020e35bc(void);
extern void func_020e359c(void);
extern u32 func_0205e270(u32 a, u32 b);
extern void func_020be298(u8 *p, s32 a);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_020e3448(u8 *p);
extern void func_0209eae4(s32 a);
extern u32 func_020c8164(u32 a, s32 b);
extern void func_020c6300(u8 *p, s32 a, s32 *b, s32 *c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

static inline void vset3(s32 *d, s32 a, s32 b, s32 c)
{
    d[0] = a;
    d[1] = b;
    d[2] = c;
}

void func_020e2e10(u8 *p1)
{
    FT f;
    s32 *piVar3 = *(s32 **)(p1 + 0x214);
    T3 A = {{0, 0, 0}};
    T3 B;
    s32 n;
    u32 idx;
    s32 iv;
    s32 t;
    s32 *pv;
    s32 *pa;
    s32 d;

    *(s32 *)(p1 + 0xb4) += *(s32 *)(*(s32 **)piVar3);
    if (piVar3[4] != 0 && piVar3[5] != 0) {
        n = piVar3[1];
        if (n > 0) {
            T12 loc = *(T12 *)(p1 + 0x3c);
            *(T11 *)f.tbl.w = *(T11 *)data_02144b00;
            idx = func_0205e270(n, piVar3[2]);
            t = f.tbl.w[idx];
            A.w[0] = FX_Mul(loc.w[6], t);
            A.w[2] = FX_Mul(loc.w[8], t);
        }
    }
    *(T3 *)(piVar3 + 7) = A;
    if (piVar3[4] == 0) {
        func_020be298(p1, *(s32 *)(*(s32 **)piVar3 + 0x5c / 4));
        vset3(f.X.w, *(s32 *)(p1 + 0xc8), *(s32 *)(p1 + 0xcc), *(s32 *)(p1 + 0xd0));
        vset3(f.Y.w, *(s32 *)(p1 + 0xd4), *(s32 *)(p1 + 0xd8), *(s32 *)(p1 + 0xdc));
        func_02067d04(f.X.w, f.Y.w, f.Z.w);
        func_02006a30(f.X.w, f.X.w);
        func_02006a30(f.Z.w, f.Z.w);
        func_02067d04(f.Z.w, f.X.w, f.Y.w);
        *(s32 *)(p1 + 0xc8) = f.X.w[0];
        *(s32 *)(p1 + 0xcc) = f.X.w[1];
        *(s32 *)(p1 + 0xd0) = f.X.w[2];
        *(s32 *)(p1 + 0xd4) = f.Y.w[0];
        *(s32 *)(p1 + 0xd8) = f.Y.w[1];
        *(s32 *)(p1 + 0xdc) = f.Y.w[2];
        *(s32 *)(p1 + 0xe0) = f.Z.w[0];
        *(s32 *)(p1 + 0xe4) = f.Z.w[1];
        *(s32 *)(p1 + 0xe8) = f.Z.w[2];
    }
    func_02067e68((s32 *)(p1 + 0xb0), A.w, B.w);
    func_02067e68((s32 *)(p1 + 0xbc), B.w, (s32 *)(p1 + 0xbc));
    func_020e3448(p1);
    pv = *(s32 **)(p1 + 0x214);
    *(T11 *)f.loc2.w = *(T11 *)data_02144ad4;
    idx = func_0205e270(pv[1], pv[2]);
    pv[1] -= (d = f.loc2.w[idx]);
    if (pv[1] < 0x78000) {
        *(u16 *)(p1 + 0xa6) = 1;
    }
    if (pv[1] < 0) {
        pv[1] = 0;
        *(u16 *)(p1 + 0xa6) = 2;
    }
    if (pv[1] > 0) {
        func_0209eae4(d);
    } else {
        func_0209eae4(0);
    }
    iv = func_020c8164(*(u16 *)(p1 + 0xa0), *(s32 *)(p1 + 0xf8));
    func_020c6300(p1, *(s32 *)(p1 + 0xf8), (s32 *)(p1 + 0xfc), (s32 *)(p1 + 0x108), iv, (s32)func_020e3640, 0, (s32)func_020e35d8, (s32)func_020e35bc, (s32)func_020e359c);
}
