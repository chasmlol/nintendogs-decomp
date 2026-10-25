#include "ctx.h"

void func_02025f4c(u8 *param_1)
{
    s32 v = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    s32 k;
    if (v < 0xccd) {
        k = 0;
    } else {
        k = (v <= 0x119a) ? 1 : 2;
    }
    switch (k) {
    case 0:
        *(u32 *)(param_1 + 0x240) = (u32)(((s64)v * 372 + 0x800) >> 12);
        break;
    case 1:
        *(u32 *)(param_1 + 0x240) = (u32)(((s64)v * 264 + 0x800) >> 12);
        break;
    case 2:
        *(u32 *)(param_1 + 0x240) = (u32)(((s64)v * 192 + 0x800) >> 12);
        break;
    }
    *(u32 *)(param_1 + 0x244) = 384;
    *(u32 *)(param_1 + 0x24c) = 0x668;
}
