#pragma avoid_byte all
#include "ctx.h"
typedef volatile s32 vs32;

extern s64 func_0205e068(s64 a, s64 b);
extern s64 func_0205e074(s64 a, s64 b);

#pragma pack(1)
typedef struct {
    u8 f0;
    u8 f1;
    u8 f2;
    u8 f3;
    u8 f4;
    u8 f5;
    u8 pad[2];
    s32 w;
    s32 p;
} Spec;
#pragma pack()

u8 *func_02060dd0(s64 v, u8 *end, Spec s)
{
    s64 base;
    u8 *p;
    s32 count;
    s32 digit;
    s32 conv;
    s32 negflag;
    s32 prec;
    s32 mode;
    s32 width;
    u8 flagc;

    prec = s.p;
    flagc = s.f3;
    conv = s.f5;
    width = *(vs32 *)&s.w;
    mode = s.f1;
    p = end;
    *--p = 0;
    negflag = 0;
    count = negflag;
    if (v == 0 && prec == 0) {
        if (flagc == 0 || conv != 111) {
            return p;
        }
    }
    switch (conv) {
    case 105:
    case 100:
        base = 10;
        if (v < 0) {
            negflag = 1;
            v = -v;
        }
        break;
    case 117:
        base = 10;
        mode = 0;
        break;
    case 111:
        base = 8;
        mode = 0;
        break;
    case 120:
    case 88:
        base = 16;
        mode = 0;
        break;
    }
    do {
        digit = (s32)((u64)v % (u64)base);
        v = (s64)((u64)v / (u64)base);
        if (digit < 10) {
            digit += 48;
        } else if (conv == 120) {
            digit += 87;
        } else {
            digit += 55;
        }
        *--p = (u8)digit;
        count++;
    } while (v != 0);
    if (base == 8 && flagc != 0) {
        if (*p != 48) {
            *--p = 48;
            count++;
        }
    }
    if (s.f0 == 2) {
        prec = width;
        if (negflag != 0 || mode != 0) {
            prec -= 1;
        }
        if (base == 16 && flagc != 0) {
            prec -= 2;
        }
    }
    if ((s32)(end - p) + prec > 509) {
        return 0;
    }
    while (count < prec) {
        *--p = 48;
        count++;
    }
    if (base == 16 && flagc != 0) {
        *--p = (u8)conv;
        *--p = 48;
    }
    if (negflag != 0) {
        *--p = 45;
    } else if (mode == 1) {
        *--p = 43;
    } else if (mode == 2) {
        *--p = 32;
    }
    return p;
}
