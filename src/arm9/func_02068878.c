#include "ctx.h"

extern u8 data_02150e30[];

u16 func_02068878(void)
{
    return *(vu16 *)(data_02150e30 + 0x18);
}
