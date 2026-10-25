#include "ctx.h"

extern u8 data_02150e30[];

u16 func_02068888(void)
{
    return *(u16 *)(data_02150e30 + 0x16);
}
