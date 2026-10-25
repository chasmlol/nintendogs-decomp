#include "ctx.h"

extern u32 data_0215be48;

void func_020fc51c(void)
{
    *(u32 *)((u8 *)data_0215be48 + 0xac) = 2;
    *(u32 *)((u8 *)data_0215be48 + 0x4880) = 1;
    *(u32 *)((u8 *)data_0215be48 + 0x4864) = 1;
}
