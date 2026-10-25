#include "ctx.h"

extern s32 func_02036578(u32);
extern void func_0204c3c8(u32, s32, u32);

void func_0204c380(u32 param_1)
{
    s32 iVar1;
    iVar1 = func_02036578(param_1);
    func_0204c3c8(param_1, iVar1, 1);
}
