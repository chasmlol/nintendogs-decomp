#include "ctx.h"
extern u8 *data_02152260;
u32 func_020719dc(s32 idx)
{
    u8 *p = data_02152260;
    u8 *t = *(u8 **)(p + 0x88);
    u32 off = *(u32 *)(t + 0xc);
    u32 v;
    u32 *e;
    u8 *b;
    if (off == 0) {
        t = NULL;
    } else {
        t = t + off;
    }
    if (t == NULL) {
        return 0;
    }
    if (idx < 0) {
        return 0;
    }
    if ((u32)idx >= *(u32 *)t) {
        return 0;
    }
    e = (u32 *)t + idx;
    v = e[1];
    b = *(u8 **)(p + 0x88);
    if (v == 0) {
        return 0;
    }
    return (u32)b + v;
}
