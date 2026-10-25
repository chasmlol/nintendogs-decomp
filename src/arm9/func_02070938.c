#include "ctx.h"

extern void func_02089b24(u32 a, u32 b);

void func_02070938(u32 *param_1, u32 param_2)
{
    if (*param_1 != 0) {
        func_02089b24((u32)*(u8 *)(*(u8 **)param_1 + 0x3c), param_2);
    }
}
