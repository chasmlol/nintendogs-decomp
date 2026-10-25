#include "ctx.h"

u32 func_020677c8(void)
{
    vu16 *poll = (vu16 *)0x04000280;
    u64 *pv = (u64 *)0x040002a0;
    u64 v;

    while ((*poll & 0x8000) != 0) {
    }
    v = *pv;
    return (u32)((v + 0x80000) >> 20);
}
