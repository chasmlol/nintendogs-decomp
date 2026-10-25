#include "ctx.h"

extern u8 *data_0215942c;
extern u32 *data_0214f464;

static inline u32 RollUnder(u32 n)
{
    u32 *seed;
    u32 v;
    u32 t;
    seed = data_0214f464;
    v = *seed * 0x10dcd + 1;
    t = (u16)((((u32)(u16)v) * 100) >> 16);
    *seed = v;
    return (t < n) ? 1 : 0;
}

u32 func_0202dee4(u8 *p)
{
    u32 r;
    u32 flag;
    u32 state;

    flag = 0;
    state = *(u16 *)data_0215942c;
    if (state == 17) {
        if (*(u8 *)(*(u8 **)(p + 0x9e8) + 0x72) == 4) {
            flag = 1;
        }
    }
    if (flag != 0) {
        return 1;
    }
    if (state != 10) {
        goto L220;
    }
    switch ((s8)p[0x8b]) {
    case 2:
        goto Lz10a;
    case 4:
    case 5:
        goto Lo10;
    case 0:
    case 1:
    case 3:
        goto LS2;
    default:
        goto Lz10b;
    }
LS2:
    switch ((s8)p[0x8e]) {
    case 2:
        r = 1;
        goto LT;
    case 4:
        r = RollUnder(90);
        goto LT;
    case 3:
        r = RollUnder(80);
        goto LT;
    case 0:
        r = RollUnder(70);
        goto LT;
    case 1:
        r = RollUnder(60);
        goto LT;
    default:
        goto Lz10b;
    }
Lo10:
    r = 1;
    goto LT;
Lz10a:
    r = 0;
    goto LT;
Lz10b:
    r = 0;
LT:
    if (r != 0) {
        r = 1;
    } else {
        r = 0;
    }
    if (r == 0) {
        return r;
    }
    return RollUnder(70);
L220:
    switch ((s8)p[0x8b]) {
    case 2:
        goto Lr0c;
    case 4:
    case 5:
        goto Lr1c;
    case 0:
    case 1:
    case 3:
        goto LS3;
    default:
        goto Lr0d;
    }
LS3:
    switch ((s8)p[0x8e]) {
    case 2:
        return 1;
    case 4:
        return RollUnder(90);
    case 3:
        return RollUnder(80);
    case 0:
        return RollUnder(70);
    case 1:
        return RollUnder(60);
    default:
        goto Lr0d;
    }
Lr1c:
    return 1;
Lr0c:
    return 0;
Lr0d:
    return 0;
}
