#include "ctx.h"

extern s32 func_02035770(u32, u32);
extern void func_020460c4(u32, u32, u32, u32, u32, u32);

void func_02045e40(u32 param_1)
{
    s32 iVar1;
    iVar1 = func_02035770(param_1, 0x22);
    func_020460c4(param_1, 0, 0xd, param_1 + 0x324, (u32)iVar1, 0x2ea);
}
