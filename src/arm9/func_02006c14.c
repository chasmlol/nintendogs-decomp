#include "ctx.h"

u32 func_020738bc(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);

void func_02006c14(u16 *param_1, u16 *param_2, u32 *param_3, u32 *param_4, u16 param_5, u32 param_6)
{
    u32 uVar1;
    uVar1 = func_020738bc(*(u32 *)((u8 *)param_1 + 4) + (u32)param_1[1] * 8,
                          (u32)(u16)(param_1[0] - param_1[1]),
                          (u32)param_2, (u32)param_3, (u32)param_4, param_5, param_6);
    param_1[1] = (u16)(param_1[1] + uVar1);
}
