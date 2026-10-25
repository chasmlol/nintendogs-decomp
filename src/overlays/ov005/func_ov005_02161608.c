#include "ctx.h"

extern u8 *data_ov005_02167f00;

void func_ov005_02161608(u32 param_1)
{
    u8 *iVar2 = *(u8 **)(data_ov005_02167f00 + 0x48);
    u32 bit;
    u32 r;
    if (iVar2 == 0) {
        return;
    }
    if (param_1 == 0) {
        bit = 1;
    } else {
        bit = 0;
    }
    r = *(u32 *)(iVar2 + 0x1c);
    r = r & ~2;
    r = r | ((bit & 1) << 1);
    *(u32 *)(iVar2 + 0x1c) = r;
}
