#include "ctx.h"

#define FX(a, b) ((s32)((((s64)(a) * (b)) + 0x800) >> 12))

void func_02026994(u8 *param_1)
{
    s32 x = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    s32 mode;
    if (x < 0xccd) {
        mode = 0;
    } else if (x <= 0x119a) {
        mode = 1;
    } else {
        mode = 2;
    }
    if (mode == 0) {
        goto m0;
    }
    if (mode == 1) {
        goto m1;
    }
    if (mode != 2) {
        goto end;
    }
    *(s32 *)(param_1 + 0x240) = FX(x, 205);
    *(s32 *)(param_1 + 0x244) = 0x280;
    goto end;
m1:
    *(s32 *)(param_1 + 0x240) = FX(x, 280);
    *(s32 *)(param_1 + 0x244) = 0x300;
    goto end;
m0:
    *(s32 *)(param_1 + 0x240) = FX(x, 435);
    *(s32 *)(param_1 + 0x244) = 0x380;
end:
    *(s32 *)(param_1 + 0x24c) = 0xcd0;
}
