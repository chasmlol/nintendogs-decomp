#include "ctx.h"

extern u8 *data_02152260;

u32 func_02071a40(u32 param_1)
{
    u8 *g = *(u8 **)&data_02152260;
    u8 *base = *(u8 **)(g + 0x88);
    u32 off = *(u32 *)(base + 8);
    u32 *t;
    u32 *e;
    u32 o;
    u8 *b2;
    t = (off == 0) ? (u32 *)0 : (u32 *)(base + off);
    if (t == (u32 *)0) {
        return 0;
    }
    if ((s32)param_1 < 0) {
        return 0;
    }
    if (param_1 >= t[0]) {
        return 0;
    }
    e = t + param_1;
    o = e[1];
    b2 = *(u8 * volatile *)(g + 0x88);
    return (o == 0) ? 0 : (u32)b2 + o;
}
