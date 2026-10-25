#include "ctx.h"

extern u32 data_0215be48;
extern void func_020fddc0(u32 v);

void func_02107d00(void)
{
    func_020fddc0(0x17);
    *(u32 *)((u8 *)data_0215be48 + 0x1d84) = 1;
    *(u32 *)((u8 *)data_0215be48 + 0x1d9c) = 0;
    *(u32 *)((u8 *)data_0215be48 + 0x1d94) = 1;
}
