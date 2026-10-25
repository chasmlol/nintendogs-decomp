#include "ctx.h"

extern u8 data_02159074;
extern u8 data_0212fdc5[];

u32 func_020a1de0(u32 a, u32 b, u32 c, u32 d);

u32 func_020a0cb0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 uVar1 = data_0212fdc5[*(u16 *)((u8 *)&data_02159074 + 0x18) * 6];

    if (uVar1 == 0xff) {
        return -1;
    }
    return func_020a1de0(uVar1, param_1, param_2, param_3);
}
