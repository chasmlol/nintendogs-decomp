#include "ctx.h"

extern u8 *data_0214f008;

u32 func_020066d0(u32 idx)
{
    u32 res = 0;
    u8 *s = data_0214f008;
    u32 base = *(u32 *)(s + 0x2c);
    if (base != 0 && idx < *(u16 *)(s + 0xc)) {
        res = base + idx * 0x20;
    }
    return res;
}
