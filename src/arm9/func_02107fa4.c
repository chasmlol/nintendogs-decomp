#include "ctx.h"

extern u32 data_0215be48;
extern void func_020fddc0(u32);

void func_02107fa4(u32 param_1)
{
    func_020fddc0(2);
    *(u32 *)((u8 *)data_0215be48 + 0x1d14) = param_1;
}
