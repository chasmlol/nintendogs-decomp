#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 v[2]; } Pair;

typedef struct {
    u8 pad00[0x10];
    u8 mode[2];          /* 0x10 */
    u8 pad12[0x36c4 - 0x12];
    u8 *vals;            /* 0x36c4 */
} Ctx;

extern Pair data_ov004_0216fea0;
extern Pair data_ov004_0216fea8;
extern Ctx *data_ov004_02170320;

BOOL func_ov004_02162c9c(BOOL apply)
{
    Pair lo;
    Pair hi;
    BOOL ret;
    s32 i;

    lo = data_ov004_0216fea0;
    hi = data_ov004_0216fea8;
    ret = FALSE;
    for (i = 0; i < 2; i++) {
        switch (data_ov004_02170320->mode[i]) {
        case 0: {
            s32 b;
            s32 v;
            s32 a;
            b = hi.v[i];
            a = lo.v[i];
            v = data_ov004_02170320->vals[i];
            if (v >= a + b - 3 && v < b + (a + (a >> 1)) - 3) {
                if (apply) {
                    data_ov004_02170320->mode[i] = 1;
                }
                ret = TRUE;
            } else if (v >= b + (a + (a >> 1)) - 3) {
                if (apply) {
                    data_ov004_02170320->mode[i] = 2;
                }
                ret = TRUE;
            }
            break;
        }
        case 1: {
            s32 b;
            s32 a;
            s32 h;
            s32 v;
            b = hi.v[i];
            a = lo.v[i];
            h = a >> 1;
            v = data_ov004_02170320->vals[i];
            if (v < b + h + 3) {
                if (apply) {
                    data_ov004_02170320->mode[i] = 0;
                }
                ret = TRUE;
            } else if (v >= b + (a + h) - 3) {
                if (apply) {
                    data_ov004_02170320->mode[i] = 2;
                }
                ret = TRUE;
            }
            break;
        }
        case 2: {
            s32 b;
            s32 a;
            s32 v;
            b = hi.v[i];
            a = lo.v[i];
            v = data_ov004_02170320->vals[i];
            if (v < b + (a >> 1) + 3) {
                if (apply) {
                    data_ov004_02170320->mode[i] = 0;
                }
                ret = TRUE;
            } else if (v < a + b + 3) {
                if (apply) {
                    data_ov004_02170320->mode[i] = 1;
                }
                ret = TRUE;
            }
            break;
        }
        }
    }
    return ret;
}
