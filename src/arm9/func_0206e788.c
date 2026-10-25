#include "ctx.h"

extern u32 func_0206fd4c(void);
extern u64 func_0205e270(u32 a, u32 b);
extern void func_0206c9b8(u16 *dst, u16 *src, u32 n);

s32 func_0206e788(u32 *param_1, s32 param_2, u16 *param_3)
{
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u64 uVar4;

    uVar1 = func_0206fd4c();
    uVar3 = param_1[6];
    if (param_2 < (s32)param_1[1]) {
        if (param_2 == (s32)param_1[1] - 1) {
            uVar4 = func_0205e270(param_1[0], uVar1);
            uVar2 = (u32)(uVar4 >> 32);
            if (uVar2 != 0) {
                func_0206c9b8(param_3, (u16 *)(param_2 * uVar1 + uVar3), uVar2);
            } else {
                func_0206c9b8(param_3, (u16 *)(param_2 * uVar1 + uVar3), uVar1);
            }
        } else {
            func_0206c9b8(param_3, (u16 *)(param_2 * uVar1 + uVar3), uVar1);
        }
    } else {
        return 0;
    }
    return 1;
}
