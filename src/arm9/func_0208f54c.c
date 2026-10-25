#include "ctx.h"

void func_0208f54c(u8 *param_1, u8 *param_2)
{
    *(u32 *)(*(u8 **)(param_2 + 8) + 0xc) = *(u32 *)(param_2 + 0xc);
    *(u32 *)(*(u8 **)(param_2 + 0xc) + 8) = *(u32 *)(param_2 + 8);
    if (param_2 == *(u8 **)(param_1 + 0x10)) {
        if (*(u8 **)(param_2 + 0xc) == param_2) {
            *(u32 *)(param_1 + 0x10) = 0;
        } else {
            *(u32 *)(param_1 + 0x10) = *(u32 *)(param_2 + 0xc);
        }
        return;
    }
}
