#include "ctx.h"

extern u32 func_01ffdb08(s32 a);
extern u32 func_02028130(u32 a);

u32 func_020c8eec(s32 param_1)
{
    u32 iVar2 = func_01ffdb08(param_1);
    u32 uVar3 = func_02028130(iVar2);
    s64 lVar1 = (s64)(s32)uVar3 * 0x3000 + 0x800;
    return (u32)(lVar1 >> 12);
}
