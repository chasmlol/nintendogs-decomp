#include "ctx.h"

extern BOOL func_02009eb8(s32 *, s32 *);

void func_0202b2c0(u8 *param_1, s32 *param_2)
{
    BOOL bVar1;
    bVar1 = func_02009eb8((s32 *)(param_1 + 0x18c), param_2);
    if (bVar1) {
        *(s16 *)(param_1 + 0xea) = 0x497;
    } else {
        *(s16 *)(param_1 + 0xea) = 0x498;
    }
}
