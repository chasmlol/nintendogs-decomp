#include "ctx.h"

void func_020733e0(u8 *param_1)
{
    u32 *p = *(u32 **)(param_1 + 0x148);
    if (p != NULL) {
        *p = 0;
        *(u32 **)(param_1 + 0x148) = NULL;
    }
    *(u32 *)(param_1 + 0x10c) = *(u32 *)(param_1 + 0x10c) & ~1;
    *(u32 *)(param_1 + 0x10c) = *(u32 *)(param_1 + 0x10c) & ~4;
    *(u32 *)(param_1 + 0x10c) = *(u32 *)(param_1 + 0x10c) & ~2;
}
