#include "ctx.h"

extern void func_02089a44(u32 a, u32 b, u32 c);

void func_020709f8(u32 *param_1, u32 param_2, u32 param_3)
{
    if (*param_1 != 0) {
        func_02089a44((u32)*(u8 *)(*(u8 **)param_1 + 0x3c), param_2, param_3);
    }
}
