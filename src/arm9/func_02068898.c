#include "ctx.h"

extern u8 data_02150e30;

u16 func_02068898(void)
{
    return *(u16 *)(&data_02150e30 + 0x14);
}
