#include "ctx.h"

extern u16 data_02150e2c;
extern vu16 data_0213e4d8;

void func_020683f8(void)
{
    u16 v;
    data_0213e4d8 = 1;
    v = data_02150e2c;
    if (v != 0) {
        *(vu32 *)0x04000000 = (*(vu32 *)0x04000000 & 0xfffcffffu) | ((u32)v << 16);
        return;
    }
    *(vu32 *)0x04000000 = *(vu32 *)0x04000000 | 0x10000;
}
