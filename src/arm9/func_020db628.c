#pragma avoid_byte strb
#include "ctx.h"

typedef s32 fx32;
typedef s64 fx64;

typedef struct {
    u8 pad[0xc0];
    u8 sm[4];
    u8 lv[31][4];
} Obj;

typedef struct {
    u8 pad[0xc0];
    u8 lv[32][4];
} ObjS;

extern s32 data_027c03ac[];
extern fx32 func_02067898(fx32 a, fx32 b);
extern void func_02080b84(void);
extern void func_020dc918(u32 c);

void func_020db628(Obj *p, u32 c0, u32 n)
{
    u32 b8;
    s32 b4;
    fx32 b0;
    fx32 t3;
    s32 a8;
    u8 a4;
    s32 a0;
    s32 l[8];
    u8 hist[3][8];
    u32 r8;
    s32 acc;
    s32 i;
    s32 j;
    s32 k;
    s32 mx;
    s32 m;
    s32 v;
    s32 mxa;
    s32 dv;
    u8 bv;
    u8 *h;
    fx32 sc;

    b4 = 0;
    a4 = 0;
    r8 = 0;
    acc = 0;
    a8 = 128;
    if (n <= 8000) {
        for (i = 0; i < 8; i++) {
            l[i] = 0;
            hist[0][i] = 0;
            hist[1][i] = 0;
            hist[2][i] = 0;
        }
    }
    for (i = 0; i < 8; i++) {
        l[i] = 0;
    }
    t3 = func_02067898(n << 12, 0x1e000);
    b0 = t3;
    if ((t3 >> 12) < 128) {
        a8 = (t3 >> 12) + 1;
    }
    b8 = 0;
    while (b8 < n) {
        mx = 0;
        if (r8 >= 30) {
            func_02080b84();
        }
        if (n - b8 >= 128) {
            func_020dc918(c0);
        }
        for (j = 1; j < 17; j++) {
            if (mx < data_027c03ac[j]) {
                mx = data_027c03ac[j];
            }
        }
        if (mx >= 128) {
            a0 = 255;
        } else if (mx > 42) {
            a0 = (mx * 255) / 128;
        }
        if (mx > 42) {
            sc = func_02067898(a0 << 12, mx << 12);
            for (i = 0; i < 32; i++) {
                data_027c03ac[i] = (fx32)((sc * (fx64)(data_027c03ac[i] << 12) + 0x800) >> 12) >> 12;
                if (data_027c03ac[i] > 255) {
                    data_027c03ac[i] = 255;
                }
            }
        }
        if (mx > 42) {
            for (i = 1; i < 32; i++) {
                switch (i) {
                case 1:
                    if (l[0] < data_027c03ac[i]) l[0] = data_027c03ac[i];
                    break;
                case 2:
                    if (l[0] < data_027c03ac[i]) l[0] = data_027c03ac[i];
                    if (l[1] < data_027c03ac[i]) l[1] = data_027c03ac[i];
                    break;
                case 3:
                    if (l[1] < data_027c03ac[i]) l[1] = data_027c03ac[i];
                    break;
                case 4:
                    if (l[1] < data_027c03ac[i]) l[1] = data_027c03ac[i];
                    if (l[2] < data_027c03ac[i]) l[2] = data_027c03ac[i];
                    break;
                case 5:
                    if (l[2] < data_027c03ac[i]) l[2] = data_027c03ac[i];
                    break;
                case 6:
                    if (l[2] < data_027c03ac[i]) l[2] = data_027c03ac[i];
                    if (l[3] < data_027c03ac[i]) l[3] = data_027c03ac[i];
                    break;
                case 7:
                    if (l[3] < data_027c03ac[i]) l[3] = data_027c03ac[i];
                    if (l[4] < data_027c03ac[i]) l[4] = data_027c03ac[i];
                    break;
                case 8:
                    if (l[3] < data_027c03ac[i]) l[3] = data_027c03ac[i];
                    if (l[4] < data_027c03ac[i]) l[4] = data_027c03ac[i];
                    if (l[5] < data_027c03ac[i]) l[5] = data_027c03ac[i];
                    break;
                case 9:
                    if (l[4] < data_027c03ac[i]) l[4] = data_027c03ac[i];
                    if (l[5] < data_027c03ac[i]) l[5] = data_027c03ac[i];
                    break;
                case 10:
                    if (l[5] < data_027c03ac[i]) l[5] = data_027c03ac[i];
                    break;
                case 13:
                case 14:
                case 15:
                case 16:
                    if (l[6] < data_027c03ac[i]) l[6] = data_027c03ac[i];
                    break;
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 26:
                    l[7] += data_027c03ac[i];
                    break;
                }
            }
        }
        m = 0xffff;
        for (j = 1; j < 4; j++) {
            if (m > data_027c03ac[j]) {
                m = data_027c03ac[j];
            }
        }
        acc += m;
        b4 += 0x80000;
        if (b4 >= b0) {
            mxa = (l[0] > l[1]) ? l[0] : l[1];
            for (k = 0; k < 8; k++) {
                switch (k) {
                case 0:
                case 1:
                    if (l[k] > 80) l[k] = 255;
                    else l[k] = (l[k] * 255) / 80;
                    break;
                case 3:
                    if (l[k] > l[0] / 2) l[k] = 255;
                    else l[k] = (l[k] * 255) / (l[0] / 2);
                    break;
                case 4:
                    if (l[k] > 64) l[k] -= 64;
                    else l[k] = 0;
                    if (l[k] > mxa) l[k] = 255;
                    else l[k] = (l[k] * 255) / mxa;
                    break;
                case 5:
                    if (l[k] > 64) l[k] -= 64;
                    else l[k] = 0;
                    if (l[k] > mxa) l[k] = 255;
                    else l[k] = (l[k] * 255) / mxa;
                    break;
                case 2:
                    dv = (l[1] > 48) ? l[1] - 48 : 0;
                    if (l[k] > dv) l[k] = 255;
                    else l[k] = (l[k] * 255) / dv;
                    break;
                case 6:
                    if (l[k] > 192) l[k] = 255;
                    else l[k] = (l[k] * 255) / 192;
                    break;
                case 7:
                    if (acc <= l[k]) l[k] = 255;
                    else l[k] = (l[k] * 255) / acc;
                    break;
                }
            }
            b0 += t3;
            for (k = 0; k < 8; k++) {
                bv = l[k] >> 4;
                if (n <= 8000) {
                    hist[a4][k] = bv;
                } else if (k % 2 == 0) {
                    p->lv[r8][k / 2] = bv;
                } else {
                    p->lv[r8][k / 2] |= bv << 4;
                }
                l[k] = 0;
            }
            if (n <= 8000) {
                if (r8 != 0) {
                    for (k = 0; k < 8; k++) {
                        bv = (hist[0][k] + hist[1][k] + hist[2][k]) / 3;
                        if (k % 2 == 0) {
                            ((ObjS *)p)->lv[r8][k / 2] = bv;
                        } else {
                            ((ObjS *)p)->lv[r8][k / 2] |= bv << 4;
                        }
                    }
                }
                a4++;
                if (a4 > 2) {
                    a4 = 0;
                }
            }
            r8++;
            if (n <= 8000 && r8 == 30) {
                for (k = 0; k < 8; k++) {
                    bv = (hist[1][k] + hist[2][k]) / 2;
                    if (k % 2 == 0) {
                        ((ObjS *)p)->lv[r8][k / 2] = bv;
                    } else {
                        ((ObjS *)p)->lv[r8][k / 2] |= bv << 4;
                    }
                }
            }
            acc = 0;
        }
        c0 += a8 * 2;
        b8 += a8;
    }
}
