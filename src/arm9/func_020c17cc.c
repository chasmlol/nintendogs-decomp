#include "ctx.h"

extern void func_020d345c(u8 *a, u32 b, u32 *c);

void func_020c17cc(u8 *param_1, u32 *param_2)
{
    u8 *iVar1 = *(u8 **)(param_1 + 0x214);
    if (*(u32 *)(iVar1 + 0x1c) == 0) {
        func_020d345c(iVar1, 0, param_2);
        return;
    }
    func_020d345c(iVar1, 3, param_2);
}
