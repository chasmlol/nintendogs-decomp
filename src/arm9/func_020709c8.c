#include "ctx.h"

extern void func_02089a1c(u32 p0, s32 p1, s32 p2);

void func_020709c8(u32 *param_1, s32 param_2, s32 param_3)
{
    if (*param_1 != 0) {
        func_02089a1c(*(u8 *)(*(u8 **)param_1 + 0x3c), param_2, param_3);
    }
}
