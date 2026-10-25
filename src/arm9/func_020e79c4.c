#include "ctx.h"

u32 func_020bd858(u8 *p);
u32 func_020bd868(u8 *p);
void func_02066b80(void *p);

u32 func_020e79c4(u8 *param_1)
{
    s16 sVar1 = *(s16 *)(param_1 + 0x90);

    if (sVar1 == 0) goto case0;
    if (sVar1 == 1) return (u32)param_1;
    if (sVar1 == 2) goto case2;
    return (u32)param_1;

case0:
    return func_020bd858(param_1);

case2:
    *(u32 *)(param_1 + 0xbc) = 0;
    *(u32 *)(param_1 + 0xc0) = 0;
    *(u32 *)(param_1 + 0xc4) = 0;
    func_02066b80(param_1 + 0xc8);
    return func_020bd868(param_1);
}
