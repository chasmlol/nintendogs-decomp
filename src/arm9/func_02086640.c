#include "ctx.h"

s32 func_02086640(s32 param_1, s32 param_2, ...)
{
    u16 local_10 = *(u16 *)&param_1;
    s16 sl = *(s16 *)&param_1;
    u32 t = (u32)local_10 << 18;
    s32 iVar2 = ((s32)sl << 20) >> 20;
    u32 uVar1 = t >> 30;
    if (uVar1 != 1) {
        if (uVar1 == 2) {
            iVar2 = iVar2 - param_2;
        }
        return iVar2;
    }
    return iVar2 - (param_2 + 1) / 2;
}
