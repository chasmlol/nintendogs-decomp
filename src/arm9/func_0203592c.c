#include "ctx.h"
extern u8 *data_0215942c;

u32 func_0203592c(u8 *o, u8 *q)
{
    u16 st = *(u16 *)data_0215942c;
    s32 s;
    s32 flag;
    if (st == 1) {
        goto ok;
    }
    if (st == 4) {
        goto ok;
    }
    if (st != 0x11) {
        goto chk;
    }
ok:
    return 0;
chk:
    if (q == NULL) {
        goto f0;
    }
    s = *(s16 *)(q + 150);
    if (s > 2) {
        goto big;
    }
    if (s < 0) {
        goto f0;
    }
    if (s == 0) {
        goto f1;
    }
    if (s == 1) {
        goto f1;
    }
    if (s != 2) {
        goto f0;
    }
    goto f1;
big:
    if (s != 0x11) {
        goto f0;
    }
f1:
    flag = 1;
    goto join;
f0:
    flag = 0;
join:
    if (flag != 0) {
        return 0;
    }
    if (*(u16 *)(o + 0x104) != 0) {
        *(s16 *)(o + 0xea) = 0x263;
        return 1;
    }
    if (*(s8 *)(o + 0x8b) == 5) {
        *(s16 *)(o + 0xea) = 0x261;
        return 1;
    }
    if (*(s8 *)(o + 0x8b) == 4) {
        *(s16 *)(o + 0xea) = 0x262;
        return 1;
    }
    return 0;
}
