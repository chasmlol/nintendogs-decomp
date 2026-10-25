#pragma avoid_byte strb
#include "ctx.h"

typedef struct Sub {
    u8 pad0[0x10];
    u8 cnt[0x40];
    s16 val[5];
    u8 pad5a[0x72 - 0x5a];
    u8 state;
} Sub;

typedef struct Obj {
    u8 pad0[0x8d];
    s8 sel;
    s8 best;
    u8 pad8f[0xd2 - 0x8f];
    u8 flag;
    u8 padd3[0x9e8 - 0xd3];
    Sub *sub;
} Obj;

typedef struct Lim {
    s8 v[2];
} Lim;

extern s8 data_0213b43c[];

void func_0203e2c0(Obj *p, s32 which)
{
    Lim lim = *(Lim *)data_0213b43c;
    Sub *s;
    s16 idx;
    s8 *sel;
    s32 best;
    s32 i;
    s16 max;
    s32 k2;

    k2 = which * 2;

    if (k2 + 1 != p->sub->state) {
        return;
    }
    p->flag = 1;
    idx = which + 5;
    p->sub->cnt[idx]++;
    if (p->sub->cnt[idx] < lim.v[which]) {
        return;
    }
    p->flag = 1;
    best = 0;
    p->sub->state = k2 + 2;
    max = 0;
    s = p->sub;
    i = 0;
    do {
        if (max <= s->val[(s16)i]) {
            max = s->val[(s16)i];
            best = i;
        }
        i = (s8)(i + 1);
    } while (i < 5);
    p->best = best;
    sel = &p->sel;
    *sel = p->best;
    switch (p->sub->state) {
    case 0:
    case 1:
    case 2:
        if (p->best != 3 && p->best != 4) {
            *sel = 5;
            return;
        }
        p->sel = 7;
        return;
    case 3:
    case 4:
        if (p->best != 3 && p->best != 4) {
            *sel = 6;
            return;
        }
        p->sel = 8;
        break;
    }
}
