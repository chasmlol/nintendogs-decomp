#pragma avoid_byte all
#include "ctx.h"

typedef struct { u8 b0, b1, b2, b3; } B4;

s32 func_02061214(s32 value, u8 *end, B4 a2, B4 a3, ...)
{
    s32 mode;
    s32 digit;
    s32 radix;
    u8 *p;
    s32 count;
    s32 prec;
    s32 conv;
    s32 negflag;
    s32 width;
    s32 flagc;

    prec = *(s32 *)((u8 *)&a3 + 8);
    flagc = a2.b3;
    conv = a3.b1;
    width = *(s32 *)((u8 *)&a3 + 4);
    mode = a2.b1;
    p = end;
    *--p = 0;
    negflag = 0;
    count = negflag;
    if (value == 0 && prec == 0) {
        if (flagc == 0 || conv != 111) {
            return (s32)p;
        }
    }
    switch (conv) {
    case 105:
    case 100:
        radix = 10;
        if (value < 0) {
            negflag = 1;
            value = -value;
        }
        break;
    case 117:
        radix = 10;
        mode = 0;
        break;
    case 111:
        radix = 8;
        mode = 0;
        break;
    case 120:
    case 88:
        radix = 16;
        mode = 0;
        break;
    }
    do {
        digit = (u32)value % (u32)radix;
        value = (u32)value / (u32)radix;
        if (digit < 10) {
            digit += 48;
        } else if (conv == 120) {
            digit += 87;
        } else {
            digit += 55;
        }
        *--p = (u8)digit;
        count++;
    } while (value != 0);
    if (radix == 8 && flagc != 0) {
        if (*p != 48) {
            *--p = 48;
            count++;
        }
    }
    if (a2.b0 == 2) {
        prec = width;
        if (negflag != 0 || mode != 0) {
            prec -= 1;
        }
        if (radix == 16 && flagc != 0) {
            prec -= 2;
        }
    }
    if ((end - p) + prec > 509) {
        return 0;
    }
    while (count < prec) {
        *--p = 48;
        count++;
    }
    if (radix == 16 && flagc != 0) {
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
    return (s32)p;
}
