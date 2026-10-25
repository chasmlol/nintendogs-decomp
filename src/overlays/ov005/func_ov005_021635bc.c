#include "ctx.h"

extern u8 *data_ov005_02167f00;

#define GP (*(u8 * volatile *)&data_ov005_02167f00)

void func_ov005_021635bc(u8 *param_1)
{
    u8 *g;
    u8 *h;
    g = GP;
    *(s32 *)(param_1 + 0x20) = *(s32 *)(g + 0x74) + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
    h = g + 116;
    *(s32 *)(param_1 + 0x24) = *(s32 *)(h + 4) + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
    *(s32 *)(param_1 + 0x28) = *(s32 *)(h + 8) + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 0xc);
    *(s32 *)(param_1 + 0x54) = *(s16 *)(GP + 8);
    *(u16 *)(param_1 + 0x5a) = *(u16 *)(GP + 0x80);
}
