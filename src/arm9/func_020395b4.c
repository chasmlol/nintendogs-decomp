#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_0206782c(s32 a);
extern s32 func_01ff8958(s32 a, s32 b);

void func_020395b4(s32 *p1, s32 *p2, s32 *p3, s32 p4, s32 p5, s32 p6, s32 p7, s32 p8)
{
    s32 q5, dx, dz, s9, s6, s, pt, t, fx1;

    q5 = *(vu32 *)&p5;
    dx = p3[0] - p2[0];
    dz = p3[2] - p2[2];
    s9 = FX_Mul(dx, p4) + FX_Mul(dz, q5);
    if (s9 <= 0) {
        return;
    }
    s6 = FX_Mul(dx, dx) + FX_Mul(dz, dz);
    if (s6 == 0) {
        return;
    }
    if (s6 >= p7) {
        return;
    }
    pt = p8 * 0x1000;
    if (s6 < p8 * pt) {
        s6 = func_0206782c(s6);
        t = pt - s6;
        fx1 = FX_Mul(t, s9);
        s = FX_Mul(fx1, p6);
        s9 = func_01ff8958(s * 5, s6);
        if (FX_Mul(dx, q5) + FX_Mul(dz, -p4) > 0) {
            p1[0] = p1[0] + FX_Mul(-p5, s9);
            p1[2] = p1[2] + FX_Mul(p4, s9);
            return;
        }
        p1[0] = p1[0] + FX_Mul(q5, s9);
        p1[2] = p1[2] + FX_Mul(-p4, s9);
        return;
    }
}
