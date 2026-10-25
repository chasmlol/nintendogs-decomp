#include "ctx.h"

extern u32 func_020863e4(u8 *, u32);

BOOL func_02085e28(u8 *param_1, u32 param_2)
{
    u32 uVar1;
    uVar1 = func_020863e4(param_1, param_2);
    if (uVar1 != *(u16 *)(param_1 + 0x12)) {
        *(s16 *)(param_1 + 0x12) = (s16)uVar1;
        return 1;
    }
    return 0;
}
