#include "ctx.h"

u32 func_0208a620(u32 a, u32 b);

u32 func_02070838(u32 *param_1, u32 param_2, u16 *param_3)
{
    u8 *iVar1;

    iVar1 = (u8 *)*param_1;
    if (iVar1 == 0) {
        return 0;
    }
    if (iVar1[0x2d] == 0) {
        *(s16 *)param_3 = -1;
        return 1;
    }
    *param_3 = (u16)func_0208a620(iVar1[0x3c], param_2);
    return 1;
}
