#include "ctx.h"

extern u32 func_020c5fbc(u8 *p);
extern u32 func_020e61e8(u8 *p);

u32 func_020e6194(u8 *param_1)
{
    s16 sVar1;

    sVar1 = *(s16 *)(param_1 + 144);
    if (sVar1 == 0) {
        return (u32)param_1;
    }
    if (sVar1 == 1) goto one;
    if (sVar1 == 2) {
        return func_020c5fbc(param_1);
    }
    return (u32)param_1;
one:
    return func_020e61e8(param_1);
}
