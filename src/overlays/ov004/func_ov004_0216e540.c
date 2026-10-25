#include "ctx.h"

extern u8 *data_ov004_02170324;

u32 func_ov004_0216e540(void)
{
    return *(u32 *)(data_ov004_02170324 + 0x40);
}
