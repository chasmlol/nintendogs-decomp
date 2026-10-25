#pragma avoid_byte all
#include "ctx.h"

typedef struct { u32 w[4]; } T16;

extern u16 data_02126768[];   /* ctype table, bit 8 = digit */

#define FB(k)     ((u8 *)&fr + (k))
#define RB(k)     (*(u32 *)FB(k) & 0xff)
#define WB(k, v)  do { *(u8 *)FB(k) = (u8)(v); } while (0)

static inline u32 DIG8(s32 c)
{
    u32 r;
    if (c < 0 || c >= 128) r = 0;
    else r = data_02126768[c] & 8;
    return r;
}

s32 func_020615c8(s32 param_1, s32 *param_2, u32 *param_3)
{
    T16 fr;
    u8 *q;
    s32 c;
    s32 lm;
    u32 t;

    WB(0, 1);
    WB(1, 0);
    WB(2, 0);
    WB(3, 0);
    WB(4, 0);
    fr.w[2] = 0;
    fr.w[3] = 0;
    q = (u8 *)param_1 + 1;
    c = *q;
    if (c == 37) {
        WB(5, c);
        *(T16 *)param_3 = fr;
        return (s32)q + 1;
    }

    /* flags */
    for (;;) {
        s32 go = 1;
        switch (c) {
        case 45: WB(0, 0); break;
        case 43: WB(1, 1); break;
        case 32: if (RB(1) != 1) WB(1, 2); break;
        case 35: WB(3, 1); break;
        case 48: if (RB(0) != 0) WB(0, 2); break;
        default: go = 0; break;
        }
        if (go == 0) break;
        c = *++q;
    }

    /* width */
    if (c == 42) {
        *param_2 = *param_2 + 4;
        fr.w[2] = *(u32 *)(*param_2 - 4);
        if ((s32)fr.w[2] < 0) {
            WB(0, 0);
            fr.w[2] = (u32)(0 - (s32)fr.w[2]);
        }
        c = *++q;
    } else {
        while (DIG8(c) != 0) {
            fr.w[2] = fr.w[2] * 10 + (u32)(c - 48);
            c = *++q;
        }
    }
    if ((s32)fr.w[2] > 0x1fd) {
        WB(5, 255);
        *(T16 *)param_3 = fr;
        return (s32)q + 1;
    }

    /* precision */
    if (c == 46) {
        WB(2, 1);
        c = *++q;
        if (c == 42) {
            *param_2 = *param_2 + 4;
            fr.w[3] = *(u32 *)(*param_2 - 4);
            if ((s32)fr.w[3] < 0) WB(2, 0);
            c = *++q;
        } else {
            while (DIG8(c) != 0) {
                fr.w[3] = fr.w[3] * 10 + (u32)(c - 48);
                c = *++q;
            }
        }
    }

    /* length modifiers */
    lm = 1;
    switch (c) {
    case 104:   /* h */
        WB(4, 2);
        if (q[1] == 104) {
            WB(4, 1);
            c = *++q;
        }
        break;
    case 108:   /* l */
        WB(4, 3);
        if (q[1] == 108) {
            WB(4, 7);
            c = *++q;
        }
        break;
    case 76:    /* L */
        WB(4, 8);
        break;
    case 106:   /* j */
        WB(4, 4);
        break;
    case 122:   /* z */
        WB(4, 5);
        break;
    case 116:   /* t */
        WB(4, 6);
        break;
    default:
        lm = 0;
        break;
    }
    if (lm != 0) {
        c = *++q;
    }

    /* conversion */
    WB(5, c);
    switch (c) {
    case 'd': case 'i': case 'o': case 'u': case 'x': case 'X':
        if (RB(4) == 8) {
            WB(5, 255);
            break;
        }
        if (RB(2) == 0) {
            fr.w[3] = 1;
            break;
        }
        if (RB(0) == 2) WB(0, 1);
        break;
    case 'f': case 'F':
        t = RB(4);
        if (t != 2) {
            if ((u8)(t + 252) > 3) goto Lf874;
        }
        WB(5, 255);
        break;
    Lf874:
        if (RB(2) == 0) fr.w[3] = 6;
        break;
    case 'a': case 'A':
        if (RB(2) == 0) fr.w[3] = 13;
        t = RB(4);
        if (t == 2 || t == 4 || t == 5 || t == 6 || t == 7 || t == 1) {
            WB(5, 255);
        }
        break;
    case 'g': case 'G':
        if (fr.w[3] == 0) fr.w[3] = 1;
        /* falls through */
    case 'e': case 'E':
        t = RB(4);
        if (t == 2 || t == 4 || t == 5 || t == 6 || t == 7 || t == 1) {
            WB(5, 255);
            break;
        }
        if (RB(2) == 0) fr.w[3] = 6;
        break;
    case 'p':
        WB(5, 120);
        WB(3, 1);
        WB(4, 3);
        fr.w[3] = 8;
        break;
    case 'c':
        t = *(u8 *)FB(4);
        if (t == 3) {
            WB(4, 9);
            break;
        }
        if (RB(2) != 0) goto Lc6c;
        if (t == 0) break;
    Lc6c:
        WB(5, 255);
        break;
    case 's':
        t = RB(4);
        if (t == 3) {
            WB(4, 9);
            break;
        }
        if (t == 0) break;
        WB(5, 255);
        break;
    case 'n':
        t = RB(4);
        if (t != 8) break;
        WB(5, 255);
        break;
    default:
        WB(5, 255);
        break;
    }

    *(T16 *)param_3 = fr;
    return (s32)q + 1;
}
