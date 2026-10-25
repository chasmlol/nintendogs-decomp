#include "ctx.h"

u32 func_02086498(u32 param_1, s32 param_2, s32 param_3, u8 *param_4, u16 param_5, u16 param_6)
{
    s32 iVar2;
    u32 uVar1;
    if (param_2 <= param_3) {
        do {
            iVar2 = param_2 + ((param_3 - param_2) >> 1);
            uVar1 = *(u16 *)(param_4 + iVar2 * 2);
            if (uVar1 > param_1) {
                param_3 = iVar2 - 1;
            } else {
                if (uVar1 < param_1) {
                    param_2 = iVar2 + 1;
                } else {
                    return (u32)param_5 + iVar2;
                }
            }
        } while (param_2 <= param_3);
    }
    return (u32)param_6;
}
