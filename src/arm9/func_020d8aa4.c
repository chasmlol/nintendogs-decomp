#include "ctx.h"

u32 func_01ffdb08(s32 x);
u32 func_02027c58(u32 x);
u32 func_020f1314(u32 a, u32 b, u32 c);

s32 func_020d8aa4(u8 *param_1)
{
    u32 *piVar3 = *(u32 **)(param_1 + 0x214);
    u32 iVar2 = func_01ffdb08(*(s16 *)(param_1 + 0x98));
    u32 uVar1;

    if (*piVar3 == 0) {
        uVar1 = func_02027c58(iVar2);
        iVar2 = func_020f1314(uVar1, 1, 0);
        *piVar3 = iVar2;
    }
    return *piVar3;
}
