#include "ctx.h"

extern u32 data_0215be48;
extern u8 data_02148254;

u32 func_0210bda8(void)
{
    u8 *q;
    u32 idx;
    q = (u8 *)data_0215be48 + 0x11000;
    idx = *(u32 *)(q + 0x13c);
    return *(u32 *)((u8 *)&data_02148254 + idx * 8);
}
