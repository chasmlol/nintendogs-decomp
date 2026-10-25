#include "ctx.h"

extern u32 data_0215be48;

void func_020ff784(void)
{
    u8 *p = *(u8 **)&data_0215be48;
    u32 off = 0x11160;
    if (*(u32 *)(p + 0xb4) != 11) {
        goto neq;
    }
    if (*(u16 *)(p + off) == 0) {
        *(u32 *)(p + 0x4000 + 0x868) = 1;
    }
    return;
neq:
    *(u32 *)(p + 0x4000 + 0x868) = 1;
}
