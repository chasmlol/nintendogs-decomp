#include "ctx.h"
extern u8 *data_0215be48;
extern void func_020fddc0(s32 a);
void func_021080c8(u16 param_1)
{
    func_020fddc0(20);
    *(u16 *)(data_0215be48 + 0x1d6c) = param_1;
}
