#include "ctx.h"

extern u8 data_02159074[];
extern u8 data_0212fdc5[];

u32 func_020a1f14(u32 a, u32 b);

u32 func_020a0a98(u32 param_1)
{
    u32 uVar1;

    uVar1 = data_0212fdc5[*(u16 *)(data_02159074 + 24) * 6];
    if (uVar1 != 0xff) {
        return func_020a1f14(uVar1, param_1);
    }
    return -1;
}
