#include "ctx.h"

extern BOOL func_0207cdf4(u32);
extern u32 func_0207ce20(u32, u32);

u32 func_0207ca1c(u8 *param_1)
{
    BOOL bVar1;
    u32 uVar2;
    bVar1 = func_0207cdf4((u32)param_1);
    if (!bVar1) {
        uVar2 = func_0207ce20((u32)param_1, *(u16 *)(param_1 + 8));
        *(s16 *)(param_1 + 8) = (s16)uVar2;
        *(u16 *)(param_1 + 12) = (u16)(*(u16 *)(param_1 + 12) - 1);
        return 1;
    }
    return 0;
}
