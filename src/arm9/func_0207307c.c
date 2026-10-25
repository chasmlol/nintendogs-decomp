#include "ctx.h"

extern u8 *func_02071a40(u32 x);
extern u32 func_02072e1c(u32 a, u32 b, u32 c, u32 d, u8 *e, u32 f);

u32 func_0207307c(u32 param_1, u32 param_2)
{
    u8 *iVar1;
    iVar1 = func_02071a40(param_2);
    if (iVar1 != 0) {
        return func_02072e1c(param_1, iVar1[9], *(u16 *)(iVar1 + 4), iVar1[8], iVar1, param_2);
    }
    return 0;
}
