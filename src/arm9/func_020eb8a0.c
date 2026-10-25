#include "ctx.h"

extern u8 *data_0215be38;

u32 func_020eb8a0(u32 *p)
{
    u32 bb = *(vu8 *)((u8 *)p + 2);
    u8 *G = *(u8 * volatile *)&data_0215be38;
    u32 *slot = (u32 *)(G + bb * 4);
    u32 one;
    if (slot[0x178 / 4] != 0) {
        return 0;
    }
    one = 1;
    slot[0x178 / 4] = one;
    {
        u8 *G2 = *(u8 * volatile *)&data_0215be38;
        u32 bb2 = *(vu8 *)((u8 *)p + 2);
        u8 *d = G2 + bb2 * 8;
        u32 v0 = *(vu32 *)p;
        u32 v1 = *(vu32 *)((u8 *)p + 4);
        *(u32 *)(d + 0x184) = v0;
        *(u32 *)(d + 0x188) = v1;
    }
    return one;
}
