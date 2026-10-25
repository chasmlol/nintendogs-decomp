#include "ctx.h"

void func_02085270(u8 *param_1, u8 *param_2, s32 param_3)
{
    u32 pad;
    s16 sVar1;
    (void)&pad;
    sVar1 = *(s16 *)(*(u8 **)(param_2 + 0x14) + 4);
    *(s16 *)(param_1 + 0x34) = sVar1 + ((sVar1 - 0x1000) * (param_3 - 0xff)) / 255;
}
