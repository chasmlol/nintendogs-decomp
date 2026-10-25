#include "ctx.h"
extern s32 data_0215be28[];
extern s16 data_0215be24;
void func_020e5cc4(u8 *param_1)
{
    if (param_1 == NULL) {
        return;
    }
    *(s32 *)(param_1 + 0x20) = data_0215be28[0] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
    *(s32 *)(param_1 + 0x24) = data_0215be28[1] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
    *(s32 *)(param_1 + 0x28) = data_0215be28[2] + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 0xc);
    *(s32 *)(param_1 + 0x54) = data_0215be24;
    *(s32 *)(param_1 + 0x4c) = (s16)(data_0215be24 * 6);
}
