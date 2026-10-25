#include "ctx.h"
#pragma opt_dead_assignments off
extern u8 data_0213ae2c[];
extern u8 data_0213aa44[];
extern u8 data_0214f464[];
extern u8 data_0213aa14[];
s32 func_02027894(u8 *p0, u8 *p1)
{
    s16 v;
    u8 *a = *(u8 **)(p0 + 0x9e8);
    u8 *b = *(u8 **)(p1 + 0x9e8);
    s32 idx;
    s32 cls;
    s32 t;
    s32 cnt;
    u32 st;
    u32 r;
    s32 k;
    u8 *pb;
    v = *(s16 *)(p0 + *(s8 *)(p1 + 0x88) * 2 + 0x132);
    cls = *(s32 *)(data_0213ae2c + *(u16 *)a * 76 + *(u16 *)b * 4);
    switch (cls) {
    case 0: goto c0;
    case 1: goto j;
    case 2: goto c2;
    case 3: goto c3;
    default: goto j;
    }
c3:
    v = v + 2000;
    goto j;
c2:
    v = v + 1000;
    goto j;
c0:
    v = v - 1000;
j:
    t = *(s32 *)(data_0213aa44 + *(s8 *)(p0 + 0x8e) * 20 + *(s8 *)(p1 + 0x8e) * 4);
    if (t == 0) goto tsub;
    if (t == 1) goto tjoin;
    if (t == 2) v = v + 1000;
    goto tjoin;
tsub:
    v = v - 1000;
tjoin:
    cnt = *(s8 *)(p0 + 0x8b);
    if (cnt == 1) goto cadd;
    if (cnt == 2) goto csub;
    if (cnt != 3) goto skip;
cadd:
    v = v + 1000;
    goto skip;
csub:
    v = v - 1000;
skip:
    if (*(u8 *)(a + 0x14) == 0) goto zarm;
    if (*(u8 *)(a + 0x14) != 2) goto done14;
    if (*(u8 *)(a + 3) == *(u8 *)(b + 3)) {
        v = v + 1000;
    } else {
        v = v - 1000;
    }
    goto done14;
zarm:
    if (*(u8 *)(a + 3) == *(u8 *)(b + 3)) {
        v = v - 1000;
    } else {
        v = v + 1000;
    }
done14:
    idx = *(s8 *)(p0 + 0x8e) * 9;
    if (v <= 0xdac) {
        idx = idx + 6;
    } else if (v <= 0x1b58) {
        idx = idx + 3;
    }
    st = *(u32 *)*(u8 **)data_0214f464 * 0x10dcd + 1;
    *(u32 *)*(u8 **)data_0214f464 = st;
    r = (u16)((((u32)(u16)st) * 100) >> 16);
    pb = data_0213aa14 + idx;
    k = 0;
    do {
        r = r - *pb;
        if ((s32)r < 0) {
            return (s8)(2 - k);
        }
        k = k + 1;
        pb = pb + 1;
        idx = idx + 1;
    } while (k < 3);
    return 1;
}
