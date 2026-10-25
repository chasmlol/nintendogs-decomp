#include "ctx.h"

extern double func_0205b1b8(double a, double b);
extern double func_0205aab0(double a, double b);
extern double func_020626b4(double a, double b);
extern int func_0205c7f0(double a, double b);

#define HI(x) (*(1 + (int *)&(x)))
#define LO(x) (*(int *)&(x))

static const double
two54  = 1.80143985094819840000e+16,
twom54 = 5.55111512312578270212e-17,
huge   = 1.0e+300,
tiny   = 1.0e-300;

double func_020627c0(double x, int n)
{
    double y;
    double v;
    int k;
    int hx;
    int lx;
    int c;

    v = x;
    y = v;
    switch (HI(y) & 0x7ff00000) {
    case 0x7ff00000:
        if ((HI(y) & 0x000fffff) != 0 || LO(y) != 0) {
            c = 1;
        } else {
            c = 2;
        }
        break;
    case 0:
        if ((HI(y) & 0x000fffff) != 0 || LO(y) != 0) {
            c = 5;
        } else {
            c = 3;
        }
        break;
    default:
        c = 4;
        break;
    }
    if (c <= 2 || func_0205c7f0(0.0, v) != 0) {
        return v;
    }
    hx = HI(x);
    lx = LO(x);
    k = (hx & 0x7ff00000) >> 20;
    if (k == 0) {
        if ((lx | (hx & 0x7fffffff)) == 0) {
            return v;
        }
        x = func_0205b1b8(x, two54);
        hx = HI(x);
        k = ((hx & 0x7ff00000) >> 20) - 54;
        if (n < -50000) {
            return func_0205b1b8(tiny, x);
        }
    }
    if (k == 0x7ff) {
        return func_0205aab0(x, x);
    }
    k = k + n;
    if (k > 0x7fe) {
        return func_0205b1b8(huge, func_020626b4(huge, x));
    }
    if (k > 0) {
        HI(x) = (hx & 0x800fffff) | (k << 20);
        return x;
    }
    if (k <= -54) {
        if (n > 50000) {
            return func_0205b1b8(huge, func_020626b4(huge, x));
        }
        return func_0205b1b8(tiny, func_020626b4(tiny, x));
    }
    k += 54;
    HI(x) = (hx & 0x800fffff) | (k << 20);
    return func_0205b1b8(twom54, x);
}
