#include "ctx.h"

extern u32 data_0215be48;
extern u32 data_0215bf9c;

void func_021083c8(u32 param_1)
{
    u8 *p = *(u8 **)&data_0215be48;
    *(u32 *)(p + 0x1000 + 0xd1c) = 2;
    if (*(u32 *)(*(u8 **)&data_0215be48 + 0xb8) == 2) {
        u8 *q = *(u8 **)&data_0215bf9c;
        *(u32 *)(q + 0x48) = 1;
    }
    *(u32 *)(*(u8 **)&data_0215be48 + 0x11168) = param_1;
}
