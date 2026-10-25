#include "ctx.h"

extern s16 data_0212a868[];
extern s32 func_02067898(s32 a, s32 b);

s32 func_02067e9c(s32 param_1, s32 param_2)
{
    s32 mn;
    s32 mx;
    s32 off;
    s32 flag;
    s32 r;
    s32 a;
    s32 b;

    if (param_1 <= 0) {
        goto neg1;
    }
    if (param_2 > 0) {
        if (param_2 > param_1) {
            mn = param_1; mx = param_2; off = 0; flag = 1;
            goto tail;
        }
        if (param_2 < param_1) {
            mn = param_2; mx = param_1; off = 0x1922; flag = 0;
            goto tail;
        }
        return 0xc91;
    }
    if (param_2 >= 0) {
        goto r1922;
    }
    a = -param_2;
    if (a < param_1) {
        mn = a; mx = param_1; off = 0x1922; flag = 1;
        goto tail;
    }
    if (a > param_1) {
        mn = param_1; mx = a; off = 0x3244; flag = 0;
        goto tail;
    }
    return 0x25b3;
r1922:
    return 0x1922;
neg1:
    if (param_1 >= 0) {
        goto zero1;
    }
    a = -param_1;
    if (param_2 >= 0) {
        goto pos2;
    }
    b = -param_2;
    if (b > a) {
        mn = a; mx = b; off = -0x3244; flag = 1;
        goto tail;
    }
    if (b < a) {
        mn = b; mx = a; off = -0x1922; flag = 0;
        goto tail;
    }
    return -0x25b3;
pos2:
    if (param_2 <= 0) {
        goto m1922;
    }
    if (param_2 < a) {
        mn = param_2; mx = a; off = -0x1922; flag = 1;
        goto tail;
    }
    if (param_2 > a) {
        mn = a; mx = param_2; off = 0; flag = 0;
        goto tail;
    }
    return -3217;
m1922:
    return -0x1922;
zero1:
    if (param_2 >= 0) {
        return 0;
    }
    return 0x3244;
tail:
    if (mx == 0) {
        return 0;
    }
    if (flag != 0) {
        r = func_02067898(mn, mx);
        return (s16)(off + data_0212a868[r >> 5]);
    }
    r = func_02067898(mn, mx);
    return (s16)(off - data_0212a868[r >> 5]);
}
