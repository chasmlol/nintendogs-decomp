#include "ctx.h"

void func_0200553c(u8 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    *(vu32 *)(param_1 + 0x30) = 4;
    *(vu16 *)(param_1 + 0x34) = (u16)param_2;
    *(vu16 *)(param_1 + 0x36) = (u16)param_3;
    *(vu16 *)(param_1 + 0x38) = (u16)param_4;
    *(vu16 *)(param_1 + 0x3a) = (u16)param_5;
    *(vu16 *)(param_1 + 0x3c) = (u16)param_6;
}
