#include "ctx.h"

extern u8 data_021593c0[];

void func_020a31a8(void)
{
    u32 v;
    u8 *p = data_021593c0;
    v = *(u32 *)(p + 0x34);
    if (v != 0) {
        *(u32 *)(p + 0x34) = 0;
    }
}
