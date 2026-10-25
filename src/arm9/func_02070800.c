#include "ctx.h"

extern void func_02089ac0(u32 a, s32 b, s32 c);

u32 func_02070800(s32 *param_1, s32 param_2, s32 param_3)
{
    u8 *p = (u8 *)*param_1;
    if (p != 0) {
        func_02089ac0(p[0x3c], param_2, param_3);
        return 1;
    }
    return 0;
}
