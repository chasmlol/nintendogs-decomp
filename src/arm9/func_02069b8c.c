#include "ctx.h"

u32 func_02069b8c(void)
{
    s32 a = *(vu32 *)0x04000000 & 7;
    u16 c = *(u16 *)0x0400000c;
    if (a < 5) {
        goto body;
    }
    if ((c & 0x80) != 0) {
        goto ret0;
    }
body:
    return ((*(vu32 *)0x04000000 & 0x7000000) >> 24) * 0x10000 + 0x6000000 + ((u32)(c & 0x3c) >> 2) * 0x4000;
ret0:
    return 0;
}
