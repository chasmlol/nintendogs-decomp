#include "ctx.h"

extern u8 *data_ov004_02170320;

u32 func_ov004_0215c6d0(void)
{
    return *(u32 *)(data_ov004_02170320 + 0x33ac);
}
