#include "ctx.h"

extern u8 **data_ov004_02170324;

void func_ov004_0216e6ec(void)
{
    *(u16 *)(data_ov004_02170324[0] + 0x20) |= 1;
    *(u16 *)(data_ov004_02170324[1] + 0x20) |= 1;
    *(u16 *)(data_ov004_02170324[2] + 0x20) |= 1;
    *(u16 *)(data_ov004_02170324[3] + 0x20) |= 1;
}
