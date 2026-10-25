#include "ctx.h"

#define FX(a, b) ((s32)((((s64)(a) * (b)) + 0x800) >> 12))

extern u8 *data_0215942c;

void func_0202615c(u8 *param_1)
{
    s32 x;
    s32 mode;
    if (*(u16 *)data_0215942c == 1 || *(u16 *)data_0215942c == 3) {
        x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
        if (x < 0xccd) {
            mode = 0;
        } else if (x <= 0x119a) {
            mode = 1;
        } else {
            mode = 2;
        }
        switch (mode) {
        case 0:
            goto a0;
        case 1:
            goto a1;
        case 2:
            goto a2;
        default:
            goto done;
        }
    a0:
        *(s32 *)(param_1 + 0x240) = FX(x, 720);
        goto done;
    a1:
        *(s32 *)(param_1 + 0x240) = FX(x, 512);
        goto done;
    a2:
        *(s32 *)(param_1 + 0x240) = FX(x, 384);
        goto done;
    }
    x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    if (x < 0xccd) {
        mode = 0;
    } else if (x <= 0x119a) {
        mode = 1;
    } else {
        mode = 2;
    }
    switch (mode) {
    case 0:
        goto b0;
    case 1:
        goto b1;
    case 2:
        goto b2;
    default:
        goto done;
    }
b0:
    *(s32 *)(param_1 + 0x240) = FX(x, 496);
    goto done;
b1:
    *(s32 *)(param_1 + 0x240) = FX(x, 352);
    goto done;
b2:
    *(s32 *)(param_1 + 0x240) = FX(x, 256);
done:
    *(s32 *)(param_1 + 0x244) = 0x200;
    *(s32 *)(param_1 + 0x24c) = 0x99c;
}
