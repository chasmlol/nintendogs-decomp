#include "ctx.h"

extern u8 data_027c0000;

void func_0200348c(void)
{
    u32 base = (u32)&data_027c0000;
    u32 v;
    base += 0x3000;
    v = *(u32 *)(base + 0xff8);
    *(u32 *)(base + 0xff8) = v | 1;
}
