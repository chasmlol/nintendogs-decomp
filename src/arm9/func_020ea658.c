#include "ctx.h"

extern void func_020c7434(u32, u32, u32, u32);

void func_020ea658(u8 *param_1, s32 *param_2)
{
    s32 iVar1;
    func_020c7434((u32)param_1, (u32)param_2, 0xa40, 0);
    iVar1 = 0x666;
    *(s32 *)(param_1 + 0xb4) = *(s32 *)(param_1 + 0xb4) + 0x19a;
    if (iVar1 < *(s32 *)(param_1 + 0xb4)) {
        *(s32 *)(param_1 + 0xb4) = iVar1;
    }
}
