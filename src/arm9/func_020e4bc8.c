#include "ctx.h"

extern s32 data_0215be18[];
extern s16 data_0215be14;

void func_020e4bc8(u8 *param_1)
{
    if (param_1 == 0) {
        return;
    }
    *(s32 *)(param_1 + 0x20) = data_0215be18[0] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
    *(s32 *)(param_1 + 0x24) = data_0215be18[1] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
    *(s32 *)(param_1 + 0x28) = data_0215be18[2] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 0xc);
    *(s32 *)(param_1 + 0x54) = data_0215be14;
}
