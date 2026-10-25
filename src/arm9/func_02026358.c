#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02026358(u8 *param_1)
{
    s32 v;
    s32 mode;
    v = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    if (v < 0xccd) {
        mode = 0;
    } else if (v <= 0x119a) {
        mode = 1;
    } else {
        mode = 2;
    }
    switch (mode) {
    case 0:
        *(s32 *)(param_1 + 0x240) = FX_Mul(v, 280);
        break;
    case 1:
        *(s32 *)(param_1 + 0x240) = (s32)((((s64)v << 8) + 0x800) >> 12);
        break;
    case 2:
        *(s32 *)(param_1 + 0x240) = FX_Mul(v, 240);
        break;
    }
    *(s32 *)(param_1 + 0x244) = 512;
    *(s32 *)(param_1 + 0x24c) = 0x99c;
}
