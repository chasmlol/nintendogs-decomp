#include "ctx.h"
#pragma opt_propagation off

typedef struct { u32 w[3]; } T3;

extern u8 *data_02159444;
extern u8 *data_02159428;
extern u8 *data_02159468;

s32 func_020ab3f0(void)
{
    u8 *p = data_02159444;
    s32 idx;
    u8 *o;
    u8 *e;
    u8 *q;
    T3 tmp;
    s32 r;
    s32 base;
    if (*(s16 *)(p + 0x58) != -2) {
        goto tail;
    }
    idx = *(s16 *)(p + 0x7a);
    q = data_02159428;
    r = 0;
    base = *(s32 *)(q + 0xc);
    if (idx < 0) {
        goto zero_e;
    }
    o = data_02159468;
    if (*(s16 *)(o + 0x20) > idx) {
        goto nz_e;
    }
zero_e:
    e = 0;
    goto have_e;
nz_e:
    e = *(u8 **)(o + idx * 4 + 4);
have_e:
    if (e == 0) {
        return r;
    }
    if (*(s16 *)(e + 0x90) == 3) {
        return r;
    }
    tmp = *(T3 *)(e + 0xbc);
    r = base + *(s32 *)(q + 0x10) - (s32)tmp.w[2];
    if (r < 0) {
        r = 0;
    }
    return r;
tail:
    return *(s32 *)(p + 0x60);
}
