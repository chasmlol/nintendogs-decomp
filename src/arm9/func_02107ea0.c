#include "ctx.h"

extern u8 *data_02159424;
extern u8 *data_0215be48;

void func_02107ea0(void)
{
    u8 *q = *(u8 **)(data_02159424 + 4);
    if (*(u16 *)(q + 2) != 0) {
        u8 *base = data_0215be48 + 0x1000;
        *(u32 *)(base + 0xd14) = 10;
        return;
    }
    {
        u8 *base = data_0215be48 + 0x1000;
        *(u32 *)(base + 0xd14) = 12;
    }
}
