#include "ctx.h"

s32 func_02027564(u32 x);

void func_0211a734(u8 *param_1)
{
    u32 r4 = 0;
    s32 iVar1 = func_02027564(*(u32 *)(param_1 + 4));

    switch (iVar1) {
    case 2:
        r4 = 0;
        break;
    case 0:
        r4 = 1;
        break;
    case 3:
        r4 = 2;
        break;
    case 4:
        r4 = 3;
        break;
    case 1:
        r4 = 4;
        break;
    default:
        break;
    }
    *(u16 *)(param_1 + 2) = (u16)r4;
}
