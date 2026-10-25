#include "ctx.h"

extern u32 data_0215be48;
extern void func_020fddc0(u32 v);

void func_02108070(u32 param_1)
{
    func_020fddc0(0x1f);
    *(u32 *)((u8 *)data_0215be48 + 0x1dd0) = param_1;
}
