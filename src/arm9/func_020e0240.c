#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s16 a; s8 b; s8 c; } Ent;

extern u32 data_02144a80;
extern Ent data_0215b678[];
extern void func_020dfe88(u8 *dst, s16 *buf, u32 n, Ent *cur);

void func_020e0240(u8 *param_1, u8 *param_2, u32 from, u32 to, s32 param_5)
{
    u8 *o;
    u32 i;
    u32 n;
    u32 total;
    u32 idx;
    Ent cur;
    s16 v[2];
    u32 f2;
    u32 m;
    u8 *dst;

    o = param_1 + 12;
    dst = param_2 + 12;
    total = data_02144a80;
    n = total / 40;
    idx = from / n;
    i = idx * n;
    if (from >= to) {
        return;
    }
    if (from >= total) {
        return;
    }
    if (to > total) {
        return;
    }
    cur = data_0215b678[idx];
    o += (i >> 1) + 4;
    dst += param_5;
    m = to & ~1;
    if (i >= m) {
        return;
    }
    f2 = from & ~1;
    do {
        func_020dfe88(o, v, 2, &cur);
        o++;
        if (i >= f2) {
            dst[0] = (u8)(v[0] >> 8);
            dst[1] = (u8)(v[1] >> 8);
            dst += 2;
        }
        i += 2;
    } while (i < m);
}
