#include "ctx.h"

extern u32 data_0215be28[];
extern s16 data_0215be24;

void func_020e5d5c(u8 *param_1)
{
    s16 s;
    if (param_1 == NULL) {
        return;
    }
    *(u32 *)(param_1 + 0x20) = data_0215be28[0] + *(u32 *)(*(u32 *)*(u32 *)(param_1 + 0x18) + 4);
    *(u32 *)(param_1 + 0x24) = data_0215be28[1] + *(u32 *)(*(u32 *)*(u32 *)(param_1 + 0x18) + 8);
    *(u32 *)(param_1 + 0x28) = data_0215be28[2] + *(u32 *)(*(u32 *)*(u32 *)(param_1 + 0x18) + 12);
    s = data_0215be24;
    *(s32 *)(param_1 + 0x54) = s;
    *(s32 *)(param_1 + 0x4c) = (s16)(s * (s16)6);
}
