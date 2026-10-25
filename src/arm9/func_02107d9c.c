#include "ctx.h"
extern u8 *data_0215be48;
extern void func_020fddc0(u32 a);
void func_02107d9c(u32 p0)
{
    func_020fddc0(23);
    *(u32 *)(data_0215be48 + 0x1000 + 0xd84) = p0;
    *(u32 *)(data_0215be48 + 0x1000 + 0xd9c) = 0;
}
