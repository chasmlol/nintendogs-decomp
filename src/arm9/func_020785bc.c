#include "ctx.h"

s32 func_020785bc(u8 *param_1, s32 param_2)
{
    u8 *iVar2 = param_1 + *(s32 *)(param_1 + *(u16 *)(param_1 + 12));
    u8 *t = iVar2 + 8;
    u32 cnt = *(u16 *)(iVar2 + 14);
    u32 x = *(u16 *)(t + cnt);
    u32 *piVar1 = (u32 *)(t + cnt + 4 + x * param_2);
    s32 r;
    if (piVar1 != 0) {
        r = (s32)iVar2 + *piVar1;
    } else {
        r = 0;
    }
    return r;
}
