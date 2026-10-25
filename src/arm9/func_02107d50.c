#include "ctx.h"

extern u32 data_0215be48;
extern void func_020fddc0(u32 p);

void func_02107d50(u32 param_1)
{
    func_020fddc0(0x17);
    *(u32 *)(*(u8 **)&data_0215be48 + 0x1000 + 0xd84) = 2;
    *(u32 *)(*(u8 **)&data_0215be48 + 0x1000 + 0xd9c) = 0;
    *(u32 *)(*(u8 **)&data_0215be48 + 0x1000 + 0xd88) = param_1;
}
