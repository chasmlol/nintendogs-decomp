#include "ctx.h"

extern void func_01ffe2f8(u8 *p);

void func_020a784c(u8 *param_1)
{
    if (*(u32 *)(param_1 + 0x88) != 0) {
        u8 *o = *(u8 **)(param_1 + 0x1c);
        *(u32 *)(o + 4) = *(u32 *)(o + 4) | 1;
    }
    func_01ffe2f8(param_1);
    *(u32 *)(*(u8 **)(param_1 + 0x1c) + 4) = *(u32 *)(*(u8 **)(param_1 + 0x1c) + 4) & ~1u;
    *(u32 *)(param_1 + 0x88) = 0;
}
