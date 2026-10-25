#include "ctx.h"

u32 func_020ad77c(u8 *p);
u32 func_020ad690(u8 *p);
u32 func_020ad8f0(u8 *p);

u32 func_020bb55c(u8 *param_1)
{
    s16 sVar1;
    u32 bVar2;

    sVar1 = *(s16 *)(param_1 + 0x2e);
    if (sVar1 == 0) {
        goto zero_case;
    }
    if (sVar1 == 1) {
        return (u32)param_1;
    }
    if (sVar1 == 4) {
        goto four_case;
    }
    return (u32)param_1;
zero_case:
    return func_020ad77c(param_1);
four_case:
    bVar2 = func_020ad690(param_1);
    if (bVar2 == 0) {
        return bVar2;
    }
    return func_020ad8f0(param_1);
}
