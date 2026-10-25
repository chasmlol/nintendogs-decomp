#include "ctx.h"

extern void func_0205efbc(u8 *a, u32 *b, s32 c);

u32 func_0205f14c(u32 *param_1, u32 *param_2, s32 param_3)
{
    u32 *p = param_1;
    s32 iVar1 = p[2];
    if ((u32)(iVar1 + param_3) > p[1]) {
        param_3 = p[1] - iVar1;
    }
    func_0205efbc((u8 *)(p[0] + iVar1), param_2, param_3);
    p[2] = p[2] + param_3;
    return 1;
}
