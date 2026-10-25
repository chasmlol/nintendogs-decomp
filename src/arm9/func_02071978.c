#include "ctx.h"

extern u8 *data_02152260;

u32 func_02071978(u32 idx)
{
    u8 *g = data_02152260;
    u8 *t = *(u8 **)(g + 0x88);
    u32 n = *(u32 *)(t + 0x10);
    u8 *pu;
    u32 m;
    u32 base;
    if (n == 0) {
        pu = 0;
    } else {
        pu = t + n;
    }
    if (pu == 0) {
        return 0;
    }
    if ((s32)idx < 0) {
        return 0;
    }
    if (idx >= *(u32 *)pu) {
        return 0;
    }
    {
        u32 *e = (u32 *)pu + idx;
        m = e[1];
    }
    base = (u32)*(u8 **)(g + 0x88);
    if (m == 0) {
        return 0;
    }
    return base + m;
}
