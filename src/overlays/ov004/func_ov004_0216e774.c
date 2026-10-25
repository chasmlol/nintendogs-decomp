#include "ctx.h"

extern u8 *data_ov004_02170324;

void func_ov004_0216e774(u16 param_1)
{
    *(u16 *)(data_ov004_02170324 + 0x44) = param_1;
    *(u16 *)(*(u8 **)data_ov004_02170324 + 0xdc) = param_1;
    *(u16 *)(*(u8 **)(data_ov004_02170324 + 4) + 0x88) = param_1;
}
