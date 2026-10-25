#include "ctx.h"
#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
void func_02026058(u8 *o)
{
    s32 v = *(s32 *)(*(u8 **)(o + 0x9e8) + 0xc);
    s32 k;
    if (v < 0xccd) {
        k = 0;
    } else if (v <= 0x119a) {
        k = 1;
    } else {
        k = 2;
    }
    switch (k) {
    case 0:
        *(s32 *)(o + 0x240) = FX_Mul(v, 0x80);
        break;
    case 1:
        *(s32 *)(o + 0x240) = FX_Mul(v, 0x70);
        break;
    case 2:
        *(s32 *)(o + 0x240) = FX_Mul(v, 0x60);
        break;
    }
    *(s32 *)(o + 0x244) = 0x180;
    *(s32 *)(o + 0x24c) = 0x668;
}
