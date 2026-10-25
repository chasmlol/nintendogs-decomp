#include "ctx.h"

extern u8 data_02159074[];
extern u8 data_0212fdc5[];
u32 func_020a103c(u32 a, u32 b, u32 *c);

u32 func_020a0ae8(u32 param_1, u32 *param_2)
{
    u32 uVar1;
    uVar1 = data_0212fdc5[*(u16 *)(data_02159074 + 24) * 6];
    if (uVar1 != 0xff) {
        return func_020a103c(uVar1, param_1, param_2);
    }
    return 0xffffffff;
}
