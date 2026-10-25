#pragma avoid_byte all
#include "ctx.h"

extern void func_0205f14c(void);
extern u32 func_0205f19c(u32 cb, u32 *arr, u32 a, u32 b);

u32 func_0205f080(u8 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 arr[3];
    u32 r;
    arr[0] = (u32)param_1;
    arr[1] = param_2;
    arr[2] = 0;
    r = func_0205f19c((u32)func_0205f14c, arr, param_3, param_4);
    if (param_1 == 0) return;
    if (r < param_2) {
        param_1[r] = 0;
        return;
    }
    if (param_2 == 0) return;
    *((param_1 + param_2) - 1) = 0;
}
