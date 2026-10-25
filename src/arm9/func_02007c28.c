#include "ctx.h"

void func_02007c28(u16 *param_1, u16 param_2)
{
    s32 i;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = param_2;
    *(u32 *)(param_1 + 6) = 0;
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 10) = 0;
    *(u32 *)(param_1 + 12) = 0;
    param_1[14] = 0;
    param_1[15] = 0;
    param_1[16] = 0;
    param_1[17] = 0;
    i = 0;
    do {
        s32 j = i + 1;
        *(u16 *)((u8 *)param_1 + i * 2 + 36) = 0;
        *(u16 *)((u8 *)param_1 + i * 2 + 164 + 256 - 256 + 256) = 0;
        i = j;
    } while (i < 192);
}
