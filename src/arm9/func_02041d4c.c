#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0215942c[];
extern u16 data_0213b4cc[];
extern u16 data_0213b4c0[];
extern u16 data_0213b5bc[];
extern u16 data_0213b634[];
extern u16 data_0213b46c[];
extern u16 data_0213b5a8[];

typedef struct { s16 w[5]; } T5;

void func_02041d4c(u8 *p)
{
    u8 *e;
    s32 idx;
    T5 st;
    u8 **gp;

    if (*(s8 *)(p + 0x8d) >= 5) {
        p[210] = 1;
        e = *(u8 **)(p + 0x9e8);
        *(u16 *)(e + 28) = 0;
        gp = (u8 **)data_0215942c;
        if (*(u16 *)(*gp) == 0x11) {
            e = *(u8 **)(p + 0x9e8);
            if (*(u8 *)(e + 0x72) == 4) {
                p[210] = 1;
                e = *(u8 **)(p + 0x9e8);
                *(u16 *)(e + 34) = 0;
            }
        }
    }
    e = *(u8 **)(p + 0x9e8);
    if ((s32)*(s16 *)(e + 0x1c) > (s32)data_0213b4cc[(*(u8 *)(e + 0x11) - 1)]) {
        p[0x8b] = 5;
        return;
    }
    if ((s32)*(s16 *)(e + 0x18) < (s32)data_0213b4c0[(*(u8 *)(e + 0x10) - 1)]) {
        p[0x8b] = 4;
        return;
    }
    idx = (s32)*(s8 *)(p + 0x8d);
    if ((s32)*(s16 *)(e + 0x24) > (s32)data_0213b5bc[idx]) {
        p[0x8b] = 3;
        return;
    }
    if ((s32)*(s16 *)(e + 0x22) > (s32)data_0213b634[idx]) {
        goto two;
    }
    st = *(T5 *)data_0213b46c;
    if (*(s16 *)(e + 0x88) < st.w[*(s8 *)(p + 0x8e)]) {
        goto lt;
    }
two:
    p[0x8b] = 2;
    return;
lt:
    if ((s32)*(s16 *)(e + 0x1a) > (s32)data_0213b5a8[idx]) {
        p[0x8b] = 1;
        return;
    }
    p[0x8b] = 0;
    return;
}
