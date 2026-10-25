#include "ctx.h"

extern u8 *data_027c0360;
extern s64 data_02126728;
extern s32 func_01ffdb08(s32 a);
extern u32 func_02067898(u32 a, u32 b);
extern void func_02027178(s32 a, s32 *b, s32 c);
extern void func_020beec0(u8 *a, s32 b, s32 *c);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02066c08(s32 *a, u32 b, u32 c, u32 d);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);
extern void func_020d345c(u8 *a, s32 b, s32 *c);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern void func_0206c8d4(u8 *a, s32 *b);

void func_020c154c(s32 p1, s32 *out)
{
    u8 **pg;
    u8 *g;
    u8 *r7;
    s32 r6;
    u32 r5;
    s32 r0v;
    s32 w1;
    s32 m3;
    s32 m4;
    s32 m5;
    s32 F[58];

#define xb (F + 0)
#define xa (F + 3)
#define vv (F + 6)
#define d1 (F + 9)
#define d2 (F + 21)
#define d3 (F + 24)
#define d4 (F + 27)
#define d5 (F + 30)
#define w (F + 33)
#define m (F + 45)

    pg = (u8 **)&data_027c0360;
    g = *pg;
    r7 = *(u8 **)(g + 0x214);
    r0v = func_01ffdb08(*(s16 *)(g + 0x98));
    w1 = *(s32 *)(r7 + 0x1c);
    r6 = 0;
    if (w1 == 1) {
        if (r0v != 0) {
            r6 = r0v;
            goto JOIN;
        }
    }
    if (w1 == 0 && *(s16 *)(g + 0x90) == 7 && r0v != 0) {
        r6 = func_01ffdb08(*(s16 *)(g + 0x9a));
    }
JOIN:
    if (r6 != 0) {
        r5 = func_02067898(0xb33, 0x1000);
        func_02027178(r6, m, 12);
        vv[0] = m[6];
        xa[0] = m[0];
        xa[1] = m[1];
        vv[1] = m[7];
        m5 = m[5];
        vv[2] = m[8];
        vv[1] = -vv[1];
        xa[2] = m[2];
        vv[0] = -vv[0];
        vv[2] = -vv[2];
        m4 = m[4];
        m3 = m[3];
        func_020beec0(g, r6, xb);
        func_01ff832c(-2458, xa, xb, xb);
        out[0] = vv[0];
        out[1] = vv[1];
        out[2] = vv[2];
        out[3] = m3;
        out[4] = m4;
        out[5] = m5;
        out[6] = xa[0];
        out[7] = xa[1];
        out[8] = xa[2];
        func_02066c08(d1, r5, r5, r5);
        func_01ff810c(d1, out, out);
        {
            s32 t2 = xb[2];
            s32 t1 = xb[1];
            s32 t0 = xb[0];
            out[9] = t0;
            out[10] = t1;
            out[11] = t2;
        }
        return;
    }
    r5 = func_02067898(0xb33, 0x1000);
    func_020d345c(r7, 0, d2);
    func_020d345c(r7, 1, d3);
    func_02067e34(d3, d2, d4);
    {
        s32 q1 = d4[1];
        s64 l = (s64)d4[0] * d4[0] + (s64)q1 * q1 + (s64)d4[2] * d4[2];
        if (l >= data_02126728) {
            func_02006a30(d4, d4);
        }
    }
    func_01ff832c(-1638, d4, d2, d5);
    func_0206c8d4(r7 + 0x20, out);
    func_02066c08(w, r5, r5, r5);
    func_01ff810c(w, out, out);
    {
        s32 t2 = d5[2];
        s32 t1 = d5[1];
        s32 t0 = d5[0];
        out[9] = t0;
        out[10] = t1;
        out[11] = t2;
    }
}
