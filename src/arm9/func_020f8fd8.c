#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u16 f0;
    u8 pad2[0x6e];
    s16 f70;
    u8 pad72[0x5da];
    u16 f64c;
} DogData;

typedef struct {
    u8 pad0[0xc];
    u32 fc;
    u32 f10;
    u8 pad14[0x10];
    u32 f24;
} MsgSys;

typedef struct {
    u8 pad0[6];
    u16 f6;
} Entry;

typedef struct { s32 a; s32 b; } S1d00;

typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;
    u8 padc[0x1000 - 0xc];
    u8 f1000[0xd00];
    S1d00 s1d00;
} Menu;

typedef struct {
    u8 hdr[12];
    u16 name[40];
} DogInfo;

typedef struct { u16 v[5]; } H5;
typedef struct { u8 v[5]; } B5;
typedef struct { u16 v[4]; } H4;
typedef struct { u8 v[4]; } B4;

extern u8 data_02146654[], data_02146664[], data_02146674[], data_02146690[], data_021466a0[];
extern u8 data_02133288[], data_02133298[];
extern MsgSys *data_02159030;
extern u8 *data_0215be48;
extern u16 data_02146614[5], data_0214660c[4], data_02146604[4];
extern u8 data_021465fc[5], data_021465f4[4], data_021465f8[4];
extern u8 data_021466b8[], data_021466cc[], data_021466e0[], data_021466e4[];

extern s32 func_01ffdb08(s16 a);
extern DogData *func_0202817c(s32 a);
extern void func_0210ea40(s32 a, void *b, s32 c);
extern s32 func_0210e968(s32 a, u8 *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_02101cf4(void);
extern void func_02101894(s32 a, s32 b, s32 c, u8 d, s32 e);
extern void func_02101280(s32 a, u8 b);
extern void func_02101118(s32 a, s32 b, u8 c, u8 d, u16 *e);
extern u16 *func_02090cac(u32 a, u32 b, u32 c);
extern s32 func_020953bc(DogData *a);
extern u8 *func_020941bc(DogData *a);
extern void func_02094294(DogInfo *a);
extern void func_020fc310(s32 a, u16 *b);
extern s32 func_02027f78(s32 a, s32 b);
extern s32 func_020273f0(s32 a);
extern s32 func_02028100(s32 a);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02108e24(s32 a);
extern void func_020fc76c(s32 a, u8 *b, u8 *c, u8 *d, u8 *e);
extern Entry *func_0210f100(s32 a, s16 b);

static inline s32 AP_h1(u16 *dst, s32 n, u16 *src) { s32 k = 0; while (src[k] != 0) { dst[n] = src[k]; k++; n++; } return n; }
void func_020f8fd8(Menu *menu)
{
    s32 i;
    S1d00 *st;
    s32 dog;
    DogData *d;
    s32 w1;
    s32 w2;
    s32 tens;
    s32 ones;
    s32 lv;
    s32 w0;
    s32 k;
    s32 j;
    s32 w4;
    u16 *s;
    s32 w3;
    s32 n;
    s32 mins;
    u8 idx9[5];
    u16 lim10[4];
    u8 idx10[4];
    u16 lim13[4];
    u8 idx13[4];
    u16 digits[3][4];
    u16 time[10];
    u16 lim9[5];
    DogInfo info;
    u16 buf[102];

    st = &menu->s1d00;
    dog = func_01ffdb08((s16)st->b);
    d = func_0202817c(dog);
    menu->f8 = 0;
    menu->f0 = 0;
    menu->f4 = menu->f0;
    st->a = -2;
    func_0210ea40(64, menu->f1000, -2);
    w0 = func_0210e968(64, data_02146654);
    w1 = func_0210e968(64, data_02146664);
    w2 = func_0210e968(64, data_02146674);
    w3 = func_0210e968(64, data_02146690);
    w4 = func_0210e968(64, data_021466a0);
    func_02113090(2, w0);
    func_021130c4(2, w1);
    func_02112ed0(2, w2);
    func_02112e74(2, w4);
    func_02101cf4();
    for (i = 0; i < 14; i++) {
        func_02101894(0, w2, w1, data_02133288[i], 0);
        func_02101280(0, data_02133288[i]);
        switch (i) {
        case 0:
            func_02101118(0, w3, data_02133288[i], data_02133298[i], (u16 *)((u8 *)d + 120));
            break;
        case 1:
            func_02101118(0, w3, data_02133288[i], data_02133298[i], func_02090cac(data_02159030->f24, d->f0 + 0x2396, 0));
            break;
        case 2:
            func_02101118(0, w3, data_02133288[i], data_02133298[i], func_02090cac(data_02159030->fc, 0xf5b, 0));
            break;
        case 3:
            func_02101118(0, w3, data_02133288[i], data_02133298[i], func_02090cac(data_02159030->fc, 0xf5c, 0));
            break;
        case 4:
            func_02101118(0, w3, data_02133288[i], data_02133298[i], func_02090cac(data_02159030->fc, 0xf3e, 0));
            break;
        case 5:
            func_02101118(0, w3, data_02133288[i], data_02133298[i], func_02090cac(data_02159030->fc, 0xf3d, 0));
            break;
        case 6:
            func_02101118(0, w3, data_02133288[i], data_02133298[i], func_02090cac(data_02159030->fc, 0xf46, 0));
            break;
        case 7:
            if (func_020953bc(d)) {
                func_02094294(&info);
                func_02101118(0, w3, data_02133288[i], data_02133298[i], info.name);
            } else {
                u8 *p = func_020941bc(d);
                if (p != NULL) {
                    func_02101118(0, w3, data_02133288[i], data_02133298[i], (u16 *)(p + 12));
                }
            }
            break;
        case 8:
            n = 0;
            mins = d->f64c / 60;
            tens = d->f64c % 60 / 10;
            ones = d->f64c % 60 % 10;
            if (mins > 1000) {
                mins = 999;
                tens = 5;
                ones = 9;
            }
            func_020fc310(mins, digits[0]);
            func_020fc310(tens, digits[1]);
            func_020fc310(ones, digits[2]);
            for (j = 0; digits[0][j] != 0; j++) {
                time[n++] = digits[0][j];
            }
            time[n++] = ':';
            for (j = 0; digits[1][j] != 0; j++) {
                time[n++] = digits[1][j];
            }
            for (j = 0; digits[2][j] != 0; j++) {
                time[n++] = digits[2][j];
            }
            time[n] = 0;
            func_02101118(0, w3, data_02133288[i], data_02133298[i], time);
            break;
        case 9:
            *(H5 *)lim9 = *(H5 *)data_02146614;
            *(B5 *)idx9 = *(B5 *)data_021465fc;
            lv = func_02027f78(dog, 7);
            for (j = 0; j < 5; j++) {
                if (lv <= lim9[j]) {
                    s = func_02090cac(data_02159030->fc, 0xf3e, idx9[j]);
                    for (k = 0, n = 0; s[k] != 0; k++, n++) {
                        buf[n] = s[k];
                    }
                    if (func_020273f0(dog) == 0) {
                        s = func_02090cac(data_02159030->fc, 0xf3f, 0);
                    } else {
                        s = func_02090cac(data_02159030->fc, 0xf3f, 1);
                    }
                    n = AP_h1(buf, n, s);
                    buf[n] = 0;
                    func_02101118(0, w3, data_02133288[i], data_02133298[i], buf);
                    j = 5;
                }
            }
            break;
        case 10:
            *(H4 *)lim10 = *(H4 *)data_0214660c;
            *(B4 *)idx10 = *(B4 *)data_021465f4;
            n = func_02027f78(dog, 3);
            for (j = 0; j < 4; j++) {
                if (n <= lim10[j]) {
                    func_02101118(0, w3, data_02133288[i], data_02133298[i], func_02090cac(data_02159030->fc, 0xf3d, idx10[j]));
                    j = 4;
                }
            }
            break;
        case 11:
            if (d->f70 != -1) {
                u32 msg = data_02159030->f10;
                Entry *e = func_0210f100(0, d->f70);
                func_02101118(0, w3, data_02133288[i], data_02133298[i], func_02090cac(msg, e->f6, 0));
            }
            break;
        case 12:
            func_02101118(0, w3, data_02133288[i], data_02133298[i], func_02090cac(data_02159030->fc, 0xf40, 0));
            break;
        case 13:
            *(H4 *)lim13 = *(H4 *)data_02146604;
            *(B4 *)idx13 = *(B4 *)data_021465f8;
            n = func_02027f78(dog, 4);
            for (j = 0; j < 4; j++) {
                if (n <= lim13[j]) {
                    func_02101118(0, w3, data_02133288[i], data_02133298[i], func_02090cac(data_02159030->fc, 0xf40, idx13[j]));
                    j = 4;
                }
            }
            break;
        }
    }
    *(s32 *)(data_0215be48 + 0xc838) = 3;
    *(s32 *)(data_0215be48 + 0xc83c) = 0;
    func_020fc76c(64, data_021466b8, data_021466cc, data_021466e0, data_021466e4);
    if (func_02028100(dog) == 0) {
        func_02112798(2, 2, 0);
    } else {
        func_02112798(2, 3, 0);
    }
    func_02108e24(0);
}
