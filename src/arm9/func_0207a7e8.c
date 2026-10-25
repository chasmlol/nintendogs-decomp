#include "ctx.h"

extern u32 data_0213e4f8;

void func_0207a7e8(u8 *param_1, u32 param_2, u8 *param_3)
{
    u32 uVar1;
    *(u32 *)(param_1 + 0xc) = data_0213e4f8;
    param_1[0x19] = param_3[0x17];
    *(u32 *)(param_1 + 8) = param_2;
    for (uVar1 = 0; uVar1 < param_1[0x19]; uVar1++) {
        u16 *q = (u16 *)param_1 + uVar1;
        q[13] = (u16)(uVar1 | 0x100);
    }
}
