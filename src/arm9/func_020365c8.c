#include "ctx.h"

extern u8 *data_0214f464;
extern s8 data_02143578[];

s16 func_020365c8(u8 *p1, u8 *p2)
{
    s16 idx;
    s16 sv;
    s32 sum;
    u8 *e;
    s32 t;
    s16 i;
    s8 *tab;
    s32 v;
    s16 row;

    idx = *(s16 *)(p2 + 0x98);
    sv = *(s16 *)(p2 + 0xa6);
    sum = 0;
    if (idx < 0 || idx >= 3) {
        e = 0;
    } else {
        e = *(u8 **)(data_0214f464 + idx * 4 + 0x54);
    }
    if (e != 0 && e != p1 && *(s16 *)(e + 0xea) == 0x3d5) {
        switch (*(s8 *)(p1 + 0x8e)) {
        case 0: sv = 2; break;
        case 1: return 2;
        case 2: sv = 0; break;
        case 3: return 0;
        case 4: sv = 1; break;
        }
    }
    if (sv == 0) return 0;
    if (sv == 1) return 1;
    if (sv == 2) return 2;
    t = *(s8 *)(p1 + 0x8e);
    row = *(s16 *)(p2 + 0x94);
    tab = data_02143578 + row * 12;
    v = tab[t];
    if (v != 0) {
        sum = v * 41 * *(s16 *)(*(u8 **)(p1 + 0x9e8) + ((t << 16) >> 15) + 0x50) + sum;
    }
    tab = data_02143578 + *(volatile s16 *)(p2 + 0x94) * 12;
    i = 5;
    do {
        v = tab[i];
        if (v != 0) {
            sum = v * 41 * *(s16 *)(*(u8 **)(p1 + 0x9e8) + ((((s16)(i - 5) + 5) << 16) >> 15) + 0x50) + sum;
        }
        i = (s16)(i + 1);
    } while (i < 12);
    if (sum >= 0x7d0000) {
        return 2;
    }
    return (sum >= -8192000) ? 1 : 0;
}
