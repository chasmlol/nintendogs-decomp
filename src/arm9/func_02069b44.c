#include "ctx.h"

u32 func_02069b44(void)
{
    s32 v = *(vu32 *)0x04001000;
    u32 h = *(vu16 *)0x0400100c;
    u32 t;
    if ((v & 7) < 5) {
        goto body;
    }
    if ((h & 0x80) != 0) {
        goto ret0;
    }
body:
    t = h & 0x3c;
    return (t >> 2) * 0x4000 + 0x6200000;
ret0:
    return 0;
}
