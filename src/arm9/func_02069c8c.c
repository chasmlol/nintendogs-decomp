#include "ctx.h"

u32 func_02069c8c(void)
{
    vu32 *pa = (vu32 *)0x04001000;
    vu16 *pb = (vu16 *)0x0400100e;
    u32 sel;
    u32 v;
    u32 t;
    sel = *pa & 7;
    t = *pb;
    v = (t & 0x1f00) >> 8;
    switch (sel) {
    case 0:
    case 1:
    case 2:
        return (v << 11) + 0x6200000;
    case 3:
    case 4:
    case 5:
        if (t & 0x80) {
            return (v << 14) + 0x6200000;
        }
        return (v << 11) + 0x6200000;
    case 6:
        return 0;
    default:
        return 0;
    }
}
