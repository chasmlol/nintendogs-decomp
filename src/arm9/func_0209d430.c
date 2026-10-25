#include "ctx.h"

extern u32 data_02159198;
s32 func_0209d4b0(u8 *p, u32 v);
void func_0209edc4(u32 v);

u32 func_0209d430(u8 *param_1, u32 param_2, u32 param_3)
{
    s32 r4;

    r4 = func_0209d4b0(param_1, param_2);
    if (r4 != -1) {
        *(u32 *)(param_1 + 0x28 + r4 * 4) = param_3;
        *(u16 *)(param_1 + 38) = *(u16 *)(param_1 + 38) | (1 << r4);
    }
    if (*(u32 *)((u8 *)&data_02159198 + 4) == 0 && *(u16 *)(param_1 + 36) == 75 && param_2 == 0) {
        func_0209edc4(127);
    }
    return r4;
}
